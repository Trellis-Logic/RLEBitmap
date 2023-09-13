//
//  Copyright Michael Hotchin
//
//  MIT License
//
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this
// software andassociated documentation files(the "Software"), to deal in the Software
// without restriction, including without limitation the rights to use, copy, modify,
// merge, publish, distribute, sublicense, and/or sell copies of the Software, andto
// permit persons to whom the Software is furnished to do so, subject to the following
// conditions :
//
// The above copyright notice andthis permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
// CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
// THE USE OR OTHER DEALINGS IN THE SOFTWARE
//

//
//  Build environment:  Visual Studio Community 2019
//

// bmper.exe <bitmap filename>
//
// Reads a Windows bitmap (.BMP) file, and outputs C++ code encoding the bitmap as a Run
// Length Encoded RGB 565 bitmap, suitable for use on many arduino displays.
//

#include <stdio.h>
#include <stdint.h>
#include <memory>
#include <cstring>
#include <fstream>
#include <vector>
#include "CBitmapHandler.h"

typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef int32_t LONG;

typedef struct tagBITMAPFILEHEADER {
  WORD  bfType;
  DWORD bfSize;
  WORD  bfReserved1;
  WORD  bfReserved2;
  DWORD bfOffBits;
} __attribute__((packed)) BITMAPFILEHEADER, *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;


typedef struct tagBITMAPINFOHEADER {
  DWORD biSize;
  LONG  biWidth;
  LONG  biHeight;
  WORD  biPlanes;
  WORD  biBitCount;
  DWORD biCompression;
  DWORD biSizeImage;
  LONG  biXPelsPerMeter;
  LONG  biYPelsPerMeter;
  DWORD biClrUsed;
  DWORD biClrImportant;
} __attribute__((packed)) BITMAPINFOHEADER, *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;

 typedef  enum
 {
   BI_RGB = 0x0000,
   BI_RLE8 = 0x0001,
   BI_RLE4 = 0x0002,
   BI_BITFIELDS = 0x0003,
   BI_JPEG = 0x0004,
   BI_PNG = 0x0005,
   BI_CMYK = 0x000B,
   BI_CMYKRLE8 = 0x000C,
   BI_CMYKRLE4 = 0x000D
 } Compression;


typedef long FXPT2DOT30;

typedef struct tagCIEXYZ {
  FXPT2DOT30 ciexyzX;
  FXPT2DOT30 ciexyzY;
  FXPT2DOT30 ciexyzZ;
} __attribute__((packed)) CIEXYZ;

typedef struct tagICEXYZTRIPLE {
  CIEXYZ ciexyzRed;
  CIEXYZ ciexyzGreen;
  CIEXYZ ciexyzBlue;
} __attribute__((packed)) CIEXYZTRIPLE;

typedef struct {
  DWORD        bV4Size;
  LONG         bV4Width;
  LONG         bV4Height;
  WORD         bV4Planes;
  WORD         bV4BitCount;
  DWORD        bV4V4Compression;
  DWORD        bV4SizeImage;
  LONG         bV4XPelsPerMeter;
  LONG         bV4YPelsPerMeter;
  DWORD        bV4ClrUsed;
  DWORD        bV4ClrImportant;
  DWORD        bV4RedMask;
  DWORD        bV4GreenMask;
  DWORD        bV4BlueMask;
  DWORD        bV4AlphaMask;
  DWORD        bV4CSType;
  CIEXYZTRIPLE bV4Endpoints;
  DWORD        bV4GammaRed;
  DWORD        bV4GammaGreen;
  DWORD        bV4GammaBlue;
} __attribute__((packed)) BITMAPV4HEADER, *LPBITMAPV4HEADER, *PBITMAPV4HEADER;

unsigned short RGB_888_to_565(uint8_t R, uint8_t G, uint8_t B)
{
	return ((unsigned short)(R & 0xF8) << 8) | ((unsigned short)(G & 0xFC) << 3) | ((unsigned short)(B & 0xF8) >> 3);
}


void printHeader(const char *name, const char *filename)
{
	printf("\n"
"//\n"
"//  This file is AUTOMATICALLY GENERATED, and should not be edited unless you are certain\n"
"//  that it will not be re-generated anytime in the future.  As generated code, the\n"
"//  copyright owner(s) of the generating program do NOT claim any copyright on the code\n"
"//  generated.\n"
"//\n"
"//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,\n"
"//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and\n"
"//  there is no way of determining where any line other than the first starts without\n"
"//  walking though the data.\n"
"//\n"
"//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,\n"
"//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit\n"
"//  (0x01) set.\n"
"//\n"
"//  In that case, if the high 4 bits of the first byte are ZERO, then this is a 2 byte\n"
"//  run.  The first byte is the index of the color in the color palette, and the second\n"
"//  byte is the length.\n"
"//\n"
"//  Else, the lower 4 bits are the color index, and the upper 4 bits are the run length.\n"
"//\n"
"//  If the 'flags' member first bit is zero, then ALL runs are 2 byte runs.  The first\n"
"//  byte is the palette index, and the second is the run length.\n"
"//\n"
"//  In order to save PROGMEM for other uses, the bitmap data is placed in a section that\n"
"//  occurs near the END of the used FLASH.  So, this data should only be accessed using\n"
"//  the 'far' versions of the progmem functions - the usual versions are limited to the\n"
"//  first 64K of FLASH.\n"
"//\n"
"//  Data is from file '%s'.\n"
"//\n"
, filename);

	printf("\nconst uint8_t %s_RLEBM_data[] PROGMEM_LATE = \n{\n\t", name);
}



void dumpPalette(
	const char *name,
	CBitmapHandler *pHandler)
{
	size_t newPaletteCount = pHandler->GetNumPaletteEntries();

	printf("const uint16_t %s_RLEBM_palette[] PROGMEM_LATE = \n{\n\t// Palette has %zd entries", name, newPaletteCount);

	for (size_t i = 0; i < newPaletteCount; i++)
	{
		if (i % 16 == 0)
		{
			printf("\n\t");
		}

		printf("0x%04x, ", pHandler->GetPaletteEntry(i));
	}

	printf("\n};\n\n\n");
}







int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("%s <bitmap filename>\n", argv[0]);
		printf("Read the bitmap file (extension .BMP), and outputs the C++ code to store\n");
		printf("   the bitmap data and retrieve it for rendering.\n");
		return -1;
	}

    std::ifstream file(argv[1], std::ios::binary | std::ios::ate);
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<char> buffer(size);
    if (!file.read(buffer.data(), size))
    {
        printf("Failed to read %s", argv[1]);
        return -1;
    }

	//  Generate variable names from the file name.
	char  name[64] = { '\0' };
	char *pPos = name;

	const char *pName = strchr(argv[1], '\\');

	//  Locate filename portion of argument
	if (pName == nullptr)
	{
		pName = argv[1];
	}
	else
	{
		pName++;
	}

	//  Create a name suitable for variables, derived from the filename.
	while ((*pName != '.') && (*pName != '\0'))
	{
		//  Replace problematic characters
		if (isalnum(*pName))
			*pPos++ = *pName;
		else
			*pPos++ = '_';

		pName++;
	}

	*pPos = L'\0';

	const BITMAPFILEHEADER *pbmh = reinterpret_cast<const BITMAPFILEHEADER *>(buffer.data());

	const BITMAPINFOHEADER *pbmHeader = (const BITMAPINFOHEADER *)((const uint8_t *)(buffer.data())+sizeof(BITMAPFILEHEADER));

	//  We process VERY specific bitmap types.  Bitmap version 3,4,5, with 8, 24, 32 bit
	//  colors per pixel, no compression.
	unsigned long dwHeaderSize = pbmHeader->biSize;

	if ((dwHeaderSize != 40) && (dwHeaderSize != 108) && (dwHeaderSize != 124))
	{
		printf("Unknown BM type with header size %x.\n", dwHeaderSize);

		return -1;
	}

	if (pbmHeader->biCompression != BI_RGB)
	{
		if (pbmHeader->biCompression == BI_BITFIELDS)
		{
			//  Use a bitmap header structure that has the RGB masks.  Make sure they are
			//  the expected default values.  Default order (in bytes) BGRA.
			const BITMAPV4HEADER *pHeader2 = (const BITMAPV4HEADER *)(pbmHeader);
			if ((pHeader2->bV4RedMask != 0x00FF0000) ||
				(pHeader2->bV4GreenMask != 0x0000FF00) ||
				(pHeader2->bV4BlueMask != 0x000000FF))
			{
				printf("Invalid RGB channel masks.\n");
				return -1;
			}
		}
		else
		{
			printf("Compression unsupported.\n");

			return -1;
		}
	}

	auto width = pbmHeader->biWidth;
	auto height = pbmHeader->biHeight;
	if (height < 0)
	{
		printf("'Upside down' (negative height) bitmaps not supported.\n");
		return -1;
	}

	auto pBits = (const uint8_t *)buffer.data() + pbmh->bfOffBits;

	std::unique_ptr<CBitmapHandler> pHandler = nullptr;

	switch (pbmHeader->biBitCount)
	{
	case 32:
		pHandler = std::make_unique<C32BitBitmapHandler>(pBits, (uint16_t)pbmHeader->biWidth, (uint16_t)pbmHeader->biHeight);
		break;

	case 24:
		pHandler = std::make_unique<C24BitBitmapHandler>(pBits, (uint16_t)pbmHeader->biWidth, (uint16_t)pbmHeader->biHeight);
		break;

	case 8:
		pHandler = std::make_unique<C8BitBitmapHandler>(pBits, (uint16_t)pbmHeader->biWidth, (uint16_t)pbmHeader->biHeight,
			(const uint8_t *)buffer.data()+pbmHeader->biSize+sizeof(BITMAPFILEHEADER));
		break;
	}

	if (!pHandler)
	{
		printf("Invalid bit depth of %d.\n", pbmHeader->biBitCount);

		return -1;
	}

	auto numPaletteEntries = pHandler->GetNumPaletteEntries();

	if (numPaletteEntries > 256)
	{
		printf("Bitmap has too many unique colors.  Must be 256 or fewer colors.\n");

		return -1;
	}

	printHeader(name, argv[1]);

	unsigned int numBytes = 0;

	for (uint16_t i = 0; i < height; i++)
	{
		unsigned short currentColor = pHandler->GetPixelColor(0, i);

		int count = 1;

		for (uint16_t j = 1; j < width; j++)
		{
			uint16_t color = pHandler->GetPixelColor(j, i);

			if ((color != currentColor) || (count == 0x00ff))
			{
				size_t currentPaletteIndex = pHandler->GetPaletteIndex(currentColor);

				if (count > 15 || numPaletteEntries > 16)
				{
					printf("0x%02zx, 0x%02x, ", currentPaletteIndex, (unsigned int)count);
					numBytes += 2;
				}
				else
				{
					//  Pack info into one byte
					uint8_t b = (uint8_t) (currentPaletteIndex | count << 4);
					printf("0x%02x, ", b);
					numBytes += 1;
				}

				currentColor = color;
				count = 1;
			}
			else
			{
				count++;
			}
		}

		if (count != 0)
		{
			size_t currentPaletteIndex = pHandler->GetPaletteIndex(currentColor);

			if (count > 15 || numPaletteEntries > 16)
			{
				printf("0x%02zx, 0x%02x, ", currentPaletteIndex, count);
				numBytes += 2;
			}
			else
			{
				//  Pack info into one byte
				uint8_t b = (uint8_t)(currentPaletteIndex | count << 4);
				printf("0x%02x, ", b);
				numBytes += 1;
			}
		}

		printf("\n\t");

	}
	printf("\n}; // %dx%d Bitmap (%d pixels) in %d bytes\n\n", width, height, (width * height), numBytes);

	dumpPalette(name, pHandler.get());

	uint8_t flags = 0;

	if (numPaletteEntries <= 16)
	{
		//  set 'small palette' flag
		flags |= 0x01;
	}


	printf(
"//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary\n"
"//  addresses will do.\n"
"#if not defined pgm_get_far_address\n"
"#define pgm_get_far_address(x) ((uint32_t)(&(x)))\n"
"#endif\n"
"\n"
"//  Returns the info needed to render the bitmap.\n"
"inline void get_%s_RLEBM(\n"
"	RLEBitmapInfo &bmInfo)\n"
"{\n"
"	bmInfo.pRLEBM_data_far = pgm_get_far_address(%s_RLEBM_data);\n"
"	bmInfo.pRLEBM_palette_far = pgm_get_far_address(%s_RLEBM_palette);\n"
"	bmInfo.width = %d;\n"
"	bmInfo.height = %d;\n"
"	bmInfo.flags = 0x%02x;\n"
"}\n",
name, name, name, width, height, flags);

	return 0;
}

