
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
//  Data is from file '.\Processed\sleet.bmp'.
//

const byte sleet_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x2d, 0x11, 0x12, 0x53, 0x22, 0x00, 0x2e, 
	0x00, 0x2a, 0x11, 0xe3, 0x11, 0x00, 0x2a, 
	0x00, 0x28, 0x12, 0x03, 0x12, 0x14, 0x00, 0x28, 
	0x00, 0x26, 0x14, 0x03, 0x16, 0x00, 0x27, 
	0x00, 0x25, 0x12, 0x03, 0x18, 0x00, 0x26, 
	0x00, 0x24, 0xa3, 0x12, 0x14, 0x40, 0x14, 0x12, 0x93, 0x11, 0x00, 0x24, 
	0x00, 0x23, 0x83, 0x12, 0xc0, 0x83, 0x00, 0x24, 
	0x00, 0x22, 0x12, 0x73, 0x00, 0x10, 0x73, 0x00, 0x23, 
	0x00, 0x21, 0x11, 0x63, 0x11, 0x00, 0x12, 0x73, 0x00, 0x22, 
	0x00, 0x21, 0x63, 0x14, 0x00, 0x14, 0x63, 0x11, 0x00, 0x21, 
	0x00, 0x20, 0x11, 0x53, 0x11, 0x00, 0x16, 0x63, 0x00, 0x21, 
	0x00, 0x20, 0x53, 0x12, 0x00, 0x18, 0x53, 0x12, 0x00, 0x20, 
	0x00, 0x1f, 0x11, 0x53, 0x00, 0x19, 0x12, 0x53, 0x00, 0x20, 
	0x00, 0x1d, 0x21, 0x53, 0x12, 0x00, 0x1a, 0x53, 0x32, 0x11, 0x00, 0x1c, 
	0x00, 0x18, 0x14, 0x12, 0xa3, 0x00, 0x1b, 0xb3, 0x12, 0x14, 0x00, 0x18, 
	0x00, 0x16, 0x11, 0xf3, 0x00, 0x19, 0x14, 0xd3, 0x14, 0x00, 0x16, 
	0x00, 0x15, 0x03, 0x13, 0x00, 0x18, 0xf3, 0x00, 0x15, 
	0x00, 0x13, 0x14, 0x03, 0x15, 0x00, 0x17, 0x03, 0x10, 0x00, 0x14, 
	0x00, 0x12, 0x14, 0xa3, 0x22, 0xa3, 0x00, 0x17, 0x53, 0x11, 0x22, 0x93, 0x00, 0x13, 
	0x00, 0x12, 0x83, 0x80, 0x14, 0x63, 0x00, 0x17, 0x53, 0x50, 0x83, 0x00, 0x12, 
	0x00, 0x11, 0x73, 0xc0, 0x14, 0x33, 0x11, 0x00, 0x17, 0x53, 0x60, 0x14, 0x73, 0x00, 0x11, 
	0x00, 0x10, 0x12, 0x63, 0x00, 0x29, 0x53, 0x80, 0x63, 0x11, 0x00, 0x10, 
	0x00, 0x10, 0x63, 0x00, 0x2a, 0x53, 0x90, 0x63, 0x00, 0x10, 
	0xf0, 0x63, 0x00, 0x2b, 0x12, 0x43, 0xa0, 0x53, 0x11, 0xf0, 
	0xf0, 0x53, 0x11, 0x00, 0x2c, 0x12, 0x13, 0x12, 0xb0, 0x12, 0x53, 0xf0, 
	0xe0, 0x11, 0x53, 0x00, 0x3c, 0x53, 0xf0, 
	0xe0, 0x53, 0x12, 0x00, 0x3c, 0x53, 0x11, 0xe0, 
	0xe0, 0x53, 0x00, 0x3d, 0x11, 0x43, 0x12, 0xe0, 
	0xe0, 0x53, 0x00, 0x3d, 0x14, 0x53, 0xe0, 
	0xe0, 0x53, 0x00, 0x3e, 0x53, 0xe0, 
	0xe0, 0x53, 0x00, 0x3e, 0x53, 0xe0, 
	0xe0, 0x53, 0x00, 0x3d, 0x11, 0x53, 0xe0, 
	0xe0, 0x53, 0x14, 0x00, 0x3c, 0x12, 0x43, 0x12, 0xe0, 
	0xe0, 0x63, 0x00, 0x3c, 0x53, 0x11, 0xe0, 
	0xe0, 0x11, 0x53, 0x00, 0x3c, 0x53, 0xf0, 
	0xf0, 0x53, 0x12, 0x00, 0x3a, 0x63, 0xf0, 
	0xf0, 0x63, 0x00, 0x39, 0x14, 0x53, 0x11, 0xf0, 
	0x00, 0x10, 0x63, 0x00, 0x38, 0x63, 0x00, 0x10, 
	0x00, 0x10, 0x73, 0x00, 0x36, 0x63, 0x14, 0x00, 0x10, 
	0x00, 0x11, 0x73, 0x00, 0x33, 0x12, 0x63, 0x12, 0x00, 0x11, 
	0x00, 0x12, 0x83, 0x00, 0x2f, 0x11, 0x83, 0x00, 0x12, 
	0x00, 0x12, 0x11, 0x93, 0x22, 0x13, 0x02, 0x25, 0xd3, 0x00, 0x13, 
	0x00, 0x13, 0x14, 0x03, 0x3c, 0x00, 0x14, 
	0x00, 0x15, 0x03, 0x39, 0x12, 0x00, 0x15, 
	0x00, 0x16, 0x12, 0x03, 0x35, 0x12, 0x00, 0x17, 
	0x00, 0x18, 0x11, 0x03, 0x31, 0x11, 0x00, 0x19, 
	0x00, 0x1d, 0x01, 0x29, 0x00, 0x1e, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x25, 0x11, 0x15, 0x00, 0x3d, 
	0x00, 0x24, 0x11, 0x26, 0x00, 0x3d, 
	0x00, 0x23, 0x11, 0x36, 0x00, 0x3d, 
	0x00, 0x22, 0x11, 0x46, 0x00, 0x3d, 
	0x00, 0x21, 0x11, 0x56, 0x00, 0x3d, 
	0x00, 0x20, 0x11, 0x66, 0xd0, 0x13, 0x14, 0x60, 0x12, 0x00, 0x27, 
	0x00, 0x1f, 0x15, 0x76, 0xc0, 0x33, 0x50, 0x33, 0x00, 0x26, 
	0x00, 0x1e, 0x11, 0x86, 0xc0, 0x11, 0x33, 0x30, 0x12, 0x23, 0x12, 0x00, 0x26, 
	0x00, 0x1e, 0x26, 0x23, 0x56, 0xd0, 0x33, 0x30, 0x33, 0x00, 0x27, 
	0x00, 0x1e, 0x16, 0x23, 0x66, 0x15, 0xc0, 0x14, 0x33, 0x10, 0x33, 0x11, 0x00, 0x27, 
	0x00, 0x1d, 0x11, 0x16, 0x23, 0x66, 0x15, 0xd0, 0x33, 0x12, 0x33, 0x00, 0x28, 
	0x00, 0x1d, 0x14, 0x96, 0x11, 0xe0, 0x53, 0x00, 0x29, 
	0x00, 0x1e, 0x96, 0x80, 0x14, 0x03, 0x11, 0x14, 0x00, 0x22, 
	0x00, 0x1e, 0x11, 0x76, 0x15, 0x80, 0x03, 0x13, 0x00, 0x22, 
	0x00, 0x1f, 0x11, 0x56, 0x15, 0x90, 0x11, 0x03, 0x11, 0x12, 0x00, 0x22, 
	0x00, 0x21, 0x11, 0x15, 0x11, 0x00, 0x12, 0x53, 0x14, 0x00, 0x28, 
	0x00, 0x35, 0x33, 0x11, 0x33, 0x00, 0x28, 
	0x00, 0x34, 0x11, 0x33, 0x10, 0x33, 0x11, 0x00, 0x27, 
	0x00, 0x34, 0x33, 0x30, 0x33, 0x00, 0x27, 
	0x00, 0x33, 0x12, 0x23, 0x12, 0x30, 0x12, 0x23, 0x12, 0x00, 0x26, 
	0x00, 0x33, 0x33, 0x50, 0x33, 0x00, 0x26, 
	0x00, 0x33, 0x12, 0x13, 0x11, 0x50, 0x14, 0x13, 0x11, 0x00, 0x26, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	
}; // 100x100 Bitmap (10000 pixels) in 695 bytes

const uint16_t sleet_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 7 entries
	0x0000, 0x52aa, 0xad55, 0xffff, 0x3a02, 0x3ab5, 0x555f, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_sleet_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(sleet_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(sleet_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
