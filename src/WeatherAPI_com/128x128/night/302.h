
//
//  This file is AUTOMATICALLY GENERATED, and should not be edited unless you are certain
//  that it will not be re-generated anytime in the future.  As generated code, the
//  copyright owner(s) of the generating program do NOT claim any copyright on the code
//  generated.
//
//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,
//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and
//  there is no way of determining where any line other than the first starts without
//  walking though the data.  
//
//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,
//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit
//  (0x01) set.
//
//  In that case, if the high 4 bits of the first byte are ZERO, then this is a 2 byte
//  run.  The first byte is the index of the color in the color palette, and the second
//  byte is the length.
//
//  Else, the lower 4 bits are the color index, and the upper 4 bits are the run length.
//
//  If the 'flags' member first bit is zero, then ALL runs are 2 byte runs.  The first
//  byte is the palette index, and the second is the run length.
//
//  In order to save PROGMEM for other uses, the bitmap data is placed in a section that
//  occurs near the END of the used FLASH.  So, this data should only be accessed using
//  the 'far' versions of the progmem functions - the usual versions are limited to the
//  first 64K of FLASH.
//
//  Data is from file '128x128\night\Processed\302.bmp'.
//

const byte 302_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x45, 0x31, 0x32, 0x21, 0x00, 0x33, 
	0x00, 0x41, 0x11, 0x22, 0xb3, 0x22, 0x00, 0x2f, 
	0x00, 0x3f, 0x12, 0x03, 0x12, 0x12, 0x11, 0x00, 0x2c, 
	0x00, 0x3d, 0x12, 0x03, 0x17, 0x11, 0x00, 0x2a, 
	0x00, 0x3b, 0x11, 0x03, 0x1a, 0x12, 0x11, 0x00, 0x28, 
	0x00, 0x3a, 0x12, 0x03, 0x1d, 0x12, 0x00, 0x27, 
	0x00, 0x38, 0x11, 0xc3, 0x24, 0x45, 0x34, 0xb3, 0x12, 0x00, 0x26, 
	0x00, 0x37, 0x11, 0xa3, 0x14, 0x15, 0xb6, 0x15, 0x14, 0x93, 0x12, 0x00, 0x25, 
	0x00, 0x36, 0x11, 0x93, 0x14, 0x06, 0x10, 0x15, 0x14, 0x83, 0x12, 0x00, 0x24, 
	0x00, 0x36, 0x83, 0x14, 0x06, 0x14, 0x15, 0x14, 0x73, 0x12, 0x00, 0x23, 
	0x00, 0x35, 0x12, 0x73, 0x15, 0x06, 0x17, 0x14, 0x73, 0x12, 0x00, 0x22, 
	0x00, 0x34, 0x12, 0x73, 0x15, 0x06, 0x19, 0x14, 0x73, 0x11, 0x00, 0x21, 
	0x00, 0x33, 0x11, 0x73, 0x15, 0x06, 0x1b, 0x15, 0x73, 0x00, 0x21, 
	0x00, 0x33, 0x12, 0x63, 0x15, 0x06, 0x1d, 0x14, 0x63, 0x12, 0x00, 0x20, 
	0x00, 0x32, 0x11, 0x63, 0x14, 0x06, 0x1f, 0x14, 0x63, 0x00, 0x20, 
	0x00, 0x2d, 0x21, 0x32, 0x63, 0x14, 0x06, 0x20, 0x15, 0x63, 0x12, 0x00, 0x1f, 
	0x00, 0x2a, 0x22, 0xc3, 0x15, 0x06, 0x21, 0x14, 0x63, 0x00, 0x1f, 
	0x00, 0x27, 0x11, 0x12, 0xe3, 0x14, 0x06, 0x23, 0x63, 0x11, 0x00, 0x1e, 
	0x00, 0x26, 0x12, 0x03, 0x10, 0x15, 0x06, 0x23, 0x14, 0x53, 0x12, 0x00, 0x1e, 
	0x00, 0x24, 0x11, 0x03, 0x12, 0x06, 0x24, 0x15, 0x63, 0x00, 0x1e, 
	0x00, 0x23, 0x11, 0x03, 0x12, 0x14, 0x06, 0x25, 0x63, 0x00, 0x1e, 
	0x00, 0x22, 0x12, 0xa3, 0x24, 0x45, 0x24, 0x13, 0x15, 0x06, 0x25, 0x14, 0x53, 0x11, 0x00, 0x1d, 
	0x00, 0x21, 0x12, 0x93, 0x15, 0x06, 0x30, 0x15, 0x53, 0x12, 0x00, 0x1d, 
	0x00, 0x20, 0x11, 0x83, 0x15, 0x06, 0x32, 0x15, 0x53, 0x12, 0x00, 0x1d, 
	0x00, 0x20, 0x73, 0x14, 0x15, 0x06, 0x33, 0x15, 0x53, 0x12, 0x00, 0x1d, 
	0x00, 0x1f, 0x12, 0x63, 0x14, 0x06, 0x35, 0x15, 0x53, 0x12, 0x00, 0x1d, 
	0x00, 0x1e, 0x11, 0x63, 0x14, 0x06, 0x36, 0x15, 0x63, 0x11, 0x00, 0x1c, 
	0x00, 0x1e, 0x12, 0x63, 0x15, 0x06, 0x36, 0x15, 0x73, 0x12, 0x00, 0x1b, 
	0x00, 0x1e, 0x63, 0x15, 0x06, 0x37, 0x15, 0x93, 0x11, 0x00, 0x19, 
	0x00, 0x1d, 0x12, 0x53, 0x14, 0x06, 0x38, 0x14, 0xa3, 0x11, 0x00, 0x18, 
	0x00, 0x1d, 0x12, 0x53, 0x15, 0x06, 0x38, 0x15, 0x14, 0xa3, 0x11, 0x00, 0x17, 
	0x00, 0x1c, 0x12, 0x63, 0x06, 0x3c, 0x15, 0x14, 0x83, 0x11, 0x00, 0x16, 
	0x00, 0x1a, 0x12, 0x73, 0x14, 0x06, 0x3e, 0x15, 0x73, 0x12, 0x00, 0x16, 
	0x00, 0x19, 0x12, 0x83, 0x14, 0x06, 0x3f, 0x15, 0x73, 0x12, 0x00, 0x15, 
	0x00, 0x17, 0x11, 0xa3, 0x15, 0x06, 0x40, 0x15, 0x73, 0x00, 0x15, 
	0x00, 0x17, 0xb3, 0x15, 0x06, 0x41, 0x15, 0x63, 0x12, 0x00, 0x14, 
	0x00, 0x16, 0x12, 0x83, 0x14, 0x25, 0x06, 0x43, 0x14, 0x63, 0x00, 0x14, 
	0x00, 0x15, 0x12, 0x73, 0x14, 0x06, 0x48, 0x63, 0x11, 0x00, 0x13, 
	0x00, 0x15, 0x73, 0x15, 0x06, 0x49, 0x14, 0x53, 0x12, 0x00, 0x13, 
	0x00, 0x14, 0x12, 0x63, 0x15, 0x06, 0x4a, 0x15, 0x53, 0x12, 0x00, 0x13, 
	0x00, 0x14, 0x63, 0x14, 0x06, 0x4c, 0x63, 0x00, 0x13, 
	0x00, 0x13, 0x11, 0x63, 0x06, 0x4d, 0x63, 0x00, 0x13, 
	0x00, 0x13, 0x12, 0x53, 0x14, 0x06, 0x4d, 0x14, 0x53, 0x00, 0x13, 
	0x00, 0x13, 0x12, 0x53, 0x15, 0x06, 0x4d, 0x14, 0x53, 0x00, 0x13, 
	0x00, 0x13, 0x12, 0x53, 0x06, 0x4e, 0x63, 0x00, 0x13, 
	0x00, 0x13, 0x63, 0x06, 0x4d, 0x15, 0x53, 0x12, 0x00, 0x13, 
	0x00, 0x13, 0x12, 0x53, 0x06, 0x4d, 0x15, 0x53, 0x12, 0x00, 0x13, 
	0x00, 0x13, 0x12, 0x53, 0x15, 0x06, 0x4c, 0x14, 0x53, 0x11, 0x00, 0x13, 
	0x00, 0x13, 0x12, 0x53, 0x15, 0x06, 0x4b, 0x15, 0x63, 0x00, 0x14, 
	0x00, 0x13, 0x11, 0x53, 0x14, 0x06, 0x4b, 0x14, 0x53, 0x12, 0x00, 0x14, 
	0x00, 0x14, 0x63, 0x15, 0x06, 0x49, 0x14, 0x63, 0x11, 0x00, 0x14, 
	0x00, 0x14, 0x12, 0x63, 0x15, 0x06, 0x47, 0x14, 0x63, 0x12, 0x00, 0x15, 
	0x00, 0x14, 0x11, 0x63, 0x14, 0x15, 0x06, 0x45, 0x14, 0x73, 0x11, 0x00, 0x15, 
	0x00, 0x15, 0x12, 0x73, 0x15, 0x06, 0x42, 0x15, 0x83, 0x12, 0x00, 0x16, 
	0x00, 0x16, 0x83, 0x14, 0x25, 0x06, 0x3b, 0x25, 0x14, 0x93, 0x12, 0x00, 0x17, 
	0x00, 0x16, 0x11, 0x03, 0x50, 0x12, 0x00, 0x18, 
	0x00, 0x17, 0x11, 0x03, 0x4e, 0x12, 0x00, 0x19, 
	0x00, 0x18, 0x11, 0x03, 0x4c, 0x12, 0x00, 0x1a, 
	0x00, 0x1a, 0x12, 0x03, 0x48, 0x12, 0x00, 0x1c, 
	0x00, 0x1b, 0x11, 0x12, 0x03, 0x44, 0x12, 0x11, 0x00, 0x1d, 
	0x00, 0x1e, 0x11, 0x02, 0x40, 0x11, 0x00, 0x20, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x38, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x35, 
	0x00, 0x37, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x36, 
	0x00, 0x37, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x36, 
	0x00, 0x36, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x37, 
	0x00, 0x36, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x37, 
	0x00, 0x35, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x38, 
	0x00, 0x35, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x38, 
	0x00, 0x34, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x39, 
	0x00, 0x34, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x39, 
	0x00, 0x33, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x3a, 
	0x00, 0x33, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x3a, 
	0x00, 0x32, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x3b, 
	0x00, 0x32, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x3b, 
	0x00, 0x31, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x3c, 
	0x00, 0x31, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x3c, 
	0x00, 0x30, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x3d, 
	0x00, 0x30, 0x17, 0x58, 0x11, 0x50, 0x17, 0x58, 0x11, 0x00, 0x3d, 
	0x00, 0x2f, 0x11, 0x58, 0x17, 0x50, 0x11, 0x58, 0x17, 0x00, 0x3e, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	
}; // 128x128 Bitmap (16384 pixels) in 967 bytes

const uint16_t 302_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 9 entries
	0x0000, 0x2986, 0x426a, 0x8c72, 0xad75, 0xd6ba, 0xef5d, 0x2b34, 0x2c5c, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_302_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(302_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(302_RLEBM_palette);
	bmInfo.width = 128;
	bmInfo.height = 128;
	bmInfo.flags = 0x01;
}
