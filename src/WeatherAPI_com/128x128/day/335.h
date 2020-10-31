
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
//  Data is from file '128x128\day\Processed\335.bmp'.
//

const byte 335_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x2a, 0x61, 0x00, 0x50, 
	0x00, 0x2a, 0x61, 0x00, 0x50, 
	0x00, 0x2a, 0x61, 0x00, 0x50, 
	0x00, 0x1d, 0x12, 0xc0, 0x61, 0xc0, 0x12, 0x00, 0x43, 
	0x00, 0x1b, 0x12, 0x21, 0x12, 0xb0, 0x61, 0xb0, 0x31, 0x12, 0x00, 0x41, 
	0x00, 0x19, 0x12, 0x51, 0xb0, 0x61, 0xa0, 0x12, 0x51, 0x00, 0x40, 
	0x00, 0x19, 0x61, 0x12, 0xa0, 0x61, 0xa0, 0x71, 0x00, 0x3f, 
	0x00, 0x19, 0x12, 0x61, 0xa0, 0x61, 0x90, 0x12, 0x61, 0x00, 0x40, 
	0x00, 0x1a, 0x71, 0x90, 0x61, 0x90, 0x61, 0x13, 0x00, 0x40, 
	0x00, 0x1a, 0x12, 0x61, 0x12, 0x80, 0x61, 0x80, 0x71, 0x00, 0x41, 
	0x00, 0x1b, 0x71, 0x80, 0x12, 0x30, 0x22, 0x80, 0x61, 0x12, 0x00, 0x41, 
	0x00, 0x1b, 0x12, 0x61, 0x12, 0x00, 0x14, 0x71, 0x00, 0x42, 
	0x00, 0x1c, 0x61, 0x12, 0x00, 0x14, 0x13, 0x51, 0x12, 0x00, 0x42, 
	0x00, 0x1d, 0x31, 0x12, 0x00, 0x18, 0x41, 0x00, 0x43, 
	0x00, 0x1d, 0x12, 0x13, 0x00, 0x1b, 0x12, 0x11, 0x00, 0x44, 
	0xf0, 0x22, 0x00, 0x17, 0x22, 0x51, 0x22, 0x00, 0x1c, 0x22, 0x33, 0x32, 0x00, 0x2b, 
	0xf0, 0x31, 0x00, 0x13, 0x12, 0xd1, 0x13, 0x00, 0x15, 0x12, 0x13, 0xc4, 0x13, 0x12, 0x00, 0x27, 
	0xe0, 0x61, 0xf0, 0x12, 0x01, 0x12, 0x12, 0xf0, 0x12, 0x13, 0x04, 0x12, 0x13, 0x00, 0x25, 
	0xd0, 0x12, 0x71, 0x12, 0xb0, 0x12, 0x01, 0x16, 0xc0, 0x12, 0x13, 0x04, 0x16, 0x13, 0x00, 0x23, 
	0xd0, 0xa1, 0x12, 0x80, 0x13, 0x01, 0x18, 0x12, 0x90, 0x13, 0x04, 0x1a, 0x13, 0x00, 0x21, 
	0xd0, 0x12, 0xa1, 0x12, 0x60, 0x01, 0x1b, 0x12, 0x60, 0x12, 0x04, 0x1d, 0x13, 0x00, 0x20, 
	0xf0, 0x91, 0x60, 0xb1, 0x85, 0xa1, 0x12, 0x40, 0x13, 0xb4, 0x36, 0x47, 0x26, 0xc4, 0x12, 0x00, 0x1e, 
	0x00, 0x10, 0x12, 0x61, 0x60, 0x91, 0xd5, 0x91, 0x12, 0x20, 0x13, 0x94, 0x16, 0x17, 0xb8, 0x17, 0x16, 0xa4, 0x12, 0x00, 0x1d, 
	0x00, 0x12, 0x12, 0x31, 0x12, 0x50, 0x12, 0x81, 0x05, 0x10, 0x81, 0x10, 0x13, 0x84, 0x16, 0x17, 0x08, 0x10, 0x17, 0x94, 0x12, 0x00, 0x1c, 
	0x00, 0x14, 0x13, 0x11, 0x60, 0x71, 0x05, 0x13, 0x71, 0x13, 0x84, 0x17, 0x08, 0x14, 0x16, 0x84, 0x12, 0x00, 0x1b, 
	0x00, 0x1b, 0x71, 0x05, 0x15, 0x51, 0x19, 0x74, 0x16, 0x08, 0x17, 0x17, 0x84, 0x00, 0x1b, 
	0x00, 0x1a, 0x12, 0x61, 0x05, 0x17, 0x41, 0x74, 0x16, 0x08, 0x19, 0x17, 0x16, 0x64, 0x13, 0x00, 0x1a, 
	0x00, 0x1a, 0x71, 0x05, 0x18, 0x21, 0x19, 0x64, 0x16, 0x08, 0x1c, 0x16, 0x64, 0x12, 0x00, 0x19, 
	0x00, 0x1a, 0x61, 0x05, 0x19, 0x11, 0x19, 0x64, 0x16, 0x08, 0x1d, 0x17, 0x74, 0x00, 0x19, 
	0x00, 0x19, 0x12, 0x61, 0x05, 0x1a, 0x19, 0x64, 0x08, 0x1f, 0x17, 0x64, 0x13, 0x00, 0x18, 
	0x00, 0x19, 0x61, 0x05, 0x17, 0x49, 0x64, 0x17, 0x08, 0x20, 0x16, 0x64, 0x00, 0x18, 
	0x00, 0x19, 0x61, 0x05, 0x13, 0x19, 0xc4, 0x16, 0x08, 0x22, 0x64, 0x12, 0x00, 0x17, 
	0x90, 0xb2, 0x50, 0x61, 0x05, 0x10, 0x19, 0xf4, 0x17, 0x08, 0x22, 0x16, 0x54, 0x13, 0x00, 0x17, 
	0x90, 0x12, 0xa1, 0x40, 0x12, 0x51, 0x05, 0x10, 0x04, 0x10, 0x16, 0x08, 0x23, 0x17, 0x64, 0x00, 0x17, 
	0x90, 0x12, 0x91, 0x12, 0x40, 0x12, 0x51, 0xe5, 0x19, 0x04, 0x11, 0x17, 0x08, 0x24, 0x16, 0x54, 0x12, 0x00, 0x16, 
	0x90, 0x12, 0x91, 0x12, 0x40, 0x12, 0x51, 0xd5, 0x19, 0x04, 0x12, 0x08, 0x25, 0x17, 0x54, 0x13, 0x00, 0x16, 
	0x90, 0x12, 0x91, 0x13, 0x40, 0x12, 0x51, 0xc5, 0xb4, 0x26, 0x47, 0x36, 0x08, 0x25, 0x17, 0x54, 0x13, 0x00, 0x16, 
	0x90, 0x12, 0xa1, 0x50, 0x51, 0xb5, 0x94, 0x16, 0x17, 0x08, 0x30, 0x64, 0x00, 0x16, 
	0x00, 0x19, 0x61, 0x95, 0x19, 0x74, 0x16, 0x17, 0x08, 0x32, 0x16, 0x54, 0x00, 0x16, 
	0x00, 0x19, 0x61, 0x85, 0x19, 0x74, 0x16, 0x08, 0x34, 0x16, 0x54, 0x00, 0x16, 
	0x00, 0x19, 0x61, 0x85, 0x74, 0x17, 0x08, 0x35, 0x16, 0x54, 0x12, 0x00, 0x15, 
	0x00, 0x19, 0x12, 0x61, 0x65, 0x19, 0x64, 0x17, 0x08, 0x36, 0x16, 0x54, 0x13, 0x00, 0x15, 
	0x00, 0x1a, 0x61, 0x65, 0x64, 0x16, 0x08, 0x37, 0x16, 0x74, 0x12, 0x00, 0x13, 
	0x00, 0x1a, 0x12, 0x61, 0x45, 0x19, 0x54, 0x16, 0x08, 0x38, 0x16, 0x84, 0x13, 0x00, 0x12, 
	0x00, 0x1b, 0x71, 0x35, 0x64, 0x17, 0x08, 0x38, 0xa4, 0x13, 0x00, 0x11, 
	0x00, 0x15, 0x12, 0x50, 0x12, 0x71, 0x25, 0x54, 0x16, 0x08, 0x39, 0x16, 0xa4, 0x13, 0x00, 0x10, 
	0x00, 0x13, 0x12, 0x21, 0x60, 0x81, 0x19, 0x54, 0x16, 0x08, 0x3b, 0x17, 0x16, 0x84, 0x13, 0xf0, 
	0x00, 0x11, 0x12, 0x51, 0x50, 0x12, 0x51, 0x19, 0x74, 0x17, 0x08, 0x3d, 0x17, 0x16, 0x74, 0x12, 0xe0, 
	0x00, 0x10, 0x71, 0x12, 0x50, 0x12, 0x21, 0x19, 0x94, 0x08, 0x40, 0x16, 0x74, 0xe0, 
	0xe0, 0x12, 0x91, 0x60, 0x12, 0x19, 0x94, 0x16, 0x08, 0x41, 0x16, 0x64, 0x13, 0xd0, 
	0xd0, 0xb1, 0x60, 0x13, 0xa4, 0x16, 0x08, 0x42, 0x16, 0x64, 0xd0, 
	0xd0, 0x91, 0x12, 0x60, 0x12, 0x84, 0x26, 0x27, 0x08, 0x43, 0x64, 0x12, 0xc0, 
	0xe0, 0x71, 0x80, 0x74, 0x16, 0x17, 0x08, 0x47, 0x16, 0x54, 0x13, 0xc0, 
	0xe0, 0x12, 0x41, 0x12, 0x80, 0x13, 0x64, 0x16, 0x08, 0x4a, 0x64, 0xc0, 
	0xf0, 0x21, 0x12, 0xa0, 0x64, 0x16, 0x08, 0x4b, 0x16, 0x54, 0x12, 0xb0, 
	0x00, 0x1b, 0x13, 0x64, 0x08, 0x4c, 0x16, 0x54, 0x12, 0xb0, 
	0x00, 0x1b, 0x13, 0x54, 0x17, 0x08, 0x4c, 0x17, 0x54, 0x13, 0xb0, 
	0x00, 0x1b, 0x64, 0x08, 0x4d, 0x17, 0x54, 0x13, 0xb0, 
	0x00, 0x1a, 0x12, 0x54, 0x16, 0x08, 0x4d, 0x17, 0x54, 0x13, 0xb0, 
	0x00, 0x1a, 0x12, 0x54, 0x16, 0x08, 0x4d, 0x17, 0x54, 0x13, 0xb0, 
	0x00, 0x1a, 0x12, 0x54, 0x16, 0x08, 0x4d, 0x16, 0x54, 0x12, 0xb0, 
	0x00, 0x1a, 0x12, 0x54, 0x16, 0x08, 0x4d, 0x64, 0xc0, 
	0x00, 0x1a, 0x12, 0x54, 0x16, 0x08, 0x4c, 0x17, 0x64, 0xc0, 
	0x00, 0x1b, 0x64, 0x08, 0x4c, 0x16, 0x54, 0x13, 0xc0, 
	0x00, 0x1b, 0x64, 0x17, 0x08, 0x4a, 0x17, 0x64, 0x12, 0xc0, 
	0x00, 0x1b, 0x13, 0x54, 0x16, 0x08, 0x49, 0x17, 0x64, 0x13, 0xd0, 
	0x00, 0x1b, 0x12, 0x64, 0x16, 0x08, 0x47, 0x17, 0x16, 0x64, 0x12, 0xd0, 
	0x00, 0x1c, 0x13, 0x64, 0x16, 0x08, 0x45, 0x17, 0x74, 0x13, 0xe0, 
	0x00, 0x1c, 0x12, 0x74, 0x16, 0x17, 0x08, 0x41, 0x17, 0x16, 0x84, 0xf0, 
	0x00, 0x1d, 0x13, 0x84, 0x16, 0x27, 0x08, 0x3b, 0x27, 0x16, 0x94, 0x12, 0xf0, 
	0x00, 0x1e, 0x13, 0x04, 0x50, 0x12, 0x00, 0x10, 
	0x00, 0x1f, 0x13, 0x04, 0x4e, 0x12, 0x00, 0x11, 
	0x00, 0x20, 0x13, 0x04, 0x4b, 0x13, 0x00, 0x13, 
	0x00, 0x21, 0x12, 0x04, 0x49, 0x12, 0x00, 0x14, 
	0x00, 0x23, 0x13, 0x04, 0x44, 0x13, 0x12, 0x00, 0x16, 
	0x00, 0x25, 0x22, 0x03, 0x3f, 0x12, 0x00, 0x19, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x35, 0x12, 0x14, 0x40, 0x12, 0x14, 0x12, 0xf0, 0x12, 0x14, 0x40, 0x12, 0x14, 0x12, 0x00, 0x2a, 
	0x00, 0x33, 0x12, 0x14, 0x27, 0x13, 0x30, 0x16, 0x27, 0x13, 0xc0, 0x12, 0x14, 0x27, 0x13, 0x30, 0x16, 0x27, 0x13, 0x00, 0x29, 
	0x00, 0x33, 0x16, 0x47, 0x12, 0x10, 0x13, 0x47, 0x14, 0xb0, 0x16, 0x47, 0x12, 0x10, 0x13, 0x47, 0x14, 0x00, 0x28, 
	0x00, 0x33, 0x13, 0x47, 0x14, 0x10, 0x16, 0x47, 0x12, 0xb0, 0x13, 0x47, 0x14, 0x10, 0x16, 0x47, 0x12, 0x00, 0x28, 
	0x00, 0x34, 0x16, 0x47, 0x14, 0x47, 0x13, 0xd0, 0x16, 0x47, 0x14, 0x47, 0x13, 0x00, 0x29, 
	0x00, 0x34, 0x12, 0x97, 0xe0, 0x12, 0x97, 0x00, 0x2a, 
	0x00, 0x31, 0x42, 0x14, 0x77, 0x13, 0x42, 0x70, 0x42, 0x14, 0x77, 0x13, 0x42, 0x00, 0x26, 
	0x00, 0x30, 0x14, 0x07, 0x11, 0x13, 0x50, 0x14, 0x07, 0x11, 0x13, 0x00, 0x25, 
	0x00, 0x30, 0x14, 0x07, 0x11, 0x13, 0x50, 0x14, 0x07, 0x11, 0x13, 0x00, 0x25, 
	0x00, 0x30, 0x14, 0x07, 0x11, 0x13, 0x50, 0x14, 0x07, 0x11, 0x13, 0x00, 0x25, 
	0x00, 0x30, 0x14, 0x07, 0x11, 0x13, 0x50, 0x14, 0x07, 0x11, 0x13, 0x00, 0x25, 
	0x00, 0x30, 0x12, 0x43, 0x14, 0x77, 0x14, 0x13, 0x42, 0x50, 0x12, 0x43, 0x14, 0x77, 0x14, 0x13, 0x42, 0x00, 0x25, 
	0x00, 0x34, 0x12, 0x87, 0x16, 0xe0, 0x12, 0x87, 0x16, 0x00, 0x2a, 
	0x00, 0x34, 0x14, 0x47, 0x16, 0x47, 0x13, 0xd0, 0x14, 0x47, 0x16, 0x47, 0x13, 0x00, 0x29, 
	0x00, 0x33, 0x12, 0x47, 0x16, 0x10, 0x57, 0x12, 0xb0, 0x12, 0x47, 0x16, 0x10, 0x57, 0x12, 0x00, 0x28, 
	0x00, 0x33, 0x16, 0x47, 0x12, 0x10, 0x13, 0x47, 0x14, 0xb0, 0x16, 0x47, 0x12, 0x10, 0x13, 0x47, 0x14, 0x00, 0x28, 
	0x00, 0x33, 0x12, 0x16, 0x27, 0x14, 0x30, 0x16, 0x27, 0x14, 0x12, 0xb0, 0x12, 0x16, 0x27, 0x14, 0x30, 0x16, 0x27, 0x14, 0x12, 0x00, 0x28, 
	0x00, 0x35, 0x13, 0x16, 0x12, 0x30, 0x12, 0x16, 0x13, 0xf0, 0x13, 0x16, 0x12, 0x30, 0x12, 0x16, 0x13, 0x00, 0x2a, 
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
	
}; // 128x128 Bitmap (16384 pixels) in 1320 bytes

const uint16_t 335_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 10 entries
	0x0000, 0xfd60, 0x3184, 0x632a, 0x8c92, 0xff60, 0xbe17, 0xd69a, 0xe75d, 0xb4e9, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_335_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(335_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(335_RLEBM_palette);
	bmInfo.width = 128;
	bmInfo.height = 128;
	bmInfo.flags = 0x01;
}
