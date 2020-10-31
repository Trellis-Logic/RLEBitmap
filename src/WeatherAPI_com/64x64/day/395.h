
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
//  Data is from file '64x64\day\Processed\395.bmp'.
//

const byte 395_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x20, 0x91, 0x00, 0x17, 
	0x00, 0x1e, 0xd1, 0x00, 0x15, 
	0x00, 0x1d, 0x61, 0x32, 0x71, 0x00, 0x13, 
	0x00, 0x1c, 0x41, 0x22, 0x53, 0x22, 0x51, 0x00, 0x12, 
	0x00, 0x1b, 0x41, 0x12, 0x93, 0x22, 0x41, 0x00, 0x11, 
	0x00, 0x1a, 0x31, 0x12, 0x14, 0xc3, 0x12, 0x31, 0x00, 0x11, 
	0x00, 0x19, 0x41, 0x12, 0xe3, 0x12, 0x31, 0x00, 0x10, 
	0x00, 0x16, 0x61, 0x12, 0xf3, 0x14, 0x31, 0x00, 0x10, 
	0x00, 0x13, 0x81, 0x12, 0x03, 0x11, 0x12, 0x31, 0xf0, 
	0x00, 0x12, 0x91, 0x12, 0x03, 0x11, 0x14, 0x31, 0xf0, 
	0x00, 0x11, 0x51, 0x62, 0x03, 0x12, 0x12, 0x21, 0xf0, 
	0x00, 0x10, 0x41, 0x12, 0x03, 0x19, 0x12, 0x21, 0xf0, 
	0xf0, 0x41, 0x12, 0x03, 0x1a, 0x12, 0x31, 0xe0, 
	0xf0, 0x31, 0x12, 0x03, 0x1b, 0x12, 0x41, 0xd0, 
	0xf0, 0x21, 0x12, 0x03, 0x1c, 0x12, 0x51, 0xc0, 
	0xe0, 0x31, 0x12, 0x03, 0x1d, 0x22, 0x41, 0xb0, 
	0xc0, 0x51, 0x12, 0x03, 0x1f, 0x12, 0x31, 0xb0, 
	0xb0, 0x51, 0x22, 0x03, 0x20, 0x12, 0x31, 0xa0, 
	0xb0, 0x31, 0x12, 0x14, 0x03, 0x22, 0x14, 0x31, 0xa0, 
	0xa0, 0x31, 0x12, 0x03, 0x25, 0x12, 0x21, 0xa0, 
	0xa0, 0x31, 0x03, 0x19, 0x45, 0x93, 0x12, 0x31, 0x90, 
	0xa0, 0x21, 0x12, 0x03, 0x19, 0x36, 0x15, 0x93, 0x12, 0x31, 0x90, 
	0xa0, 0x21, 0x12, 0x03, 0x18, 0x15, 0x36, 0xa3, 0x12, 0x21, 0xa0, 
	0xa0, 0x21, 0x12, 0x03, 0x18, 0x36, 0x15, 0x93, 0x12, 0x31, 0xa0, 
	0xa0, 0x31, 0x12, 0x03, 0x16, 0x15, 0x36, 0xa3, 0x12, 0x31, 0xa0, 
	0xa0, 0x31, 0x12, 0x14, 0x03, 0x15, 0x36, 0x15, 0x93, 0x12, 0x31, 0xb0, 
	0xb0, 0x41, 0x22, 0x04, 0x12, 0x15, 0x36, 0x12, 0x64, 0x22, 0x51, 0xb0, 
	0xc0, 0x01, 0x17, 0x66, 0xb1, 0xc0, 
	0xd0, 0x01, 0x16, 0x66, 0x91, 0xe0, 
	0xf0, 0x01, 0x13, 0x66, 0x81, 0x00, 0x10, 
	0x00, 0x24, 0x11, 0x36, 0x00, 0x18, 
	0x00, 0x24, 0x36, 0x11, 0x00, 0x18, 
	0x00, 0x23, 0x11, 0x36, 0x00, 0x19, 
	0x00, 0x16, 0x12, 0x17, 0x20, 0x17, 0x12, 0x70, 0x66, 0x11, 0x00, 0x16, 
	0x00, 0x15, 0x11, 0x28, 0x22, 0x28, 0x60, 0x11, 0x66, 0x00, 0x17, 
	0x00, 0x16, 0x12, 0x48, 0x12, 0x60, 0x66, 0x11, 0x00, 0x17, 
	0x00, 0x14, 0x22, 0x13, 0x48, 0x32, 0x60, 0x11, 0x36, 0x00, 0x18, 
	0x00, 0x14, 0x13, 0x88, 0x12, 0x60, 0x36, 0x11, 0x00, 0x18, 
	0x00, 0x14, 0x12, 0x23, 0x48, 0x23, 0x12, 0x50, 0x11, 0x36, 0x00, 0x19, 
	0x00, 0x16, 0x12, 0x48, 0x12, 0x70, 0x36, 0x11, 0x00, 0x19, 
	0x00, 0x16, 0x28, 0x12, 0x13, 0x28, 0x60, 0x11, 0x36, 0x00, 0x1a, 
	0x00, 0x16, 0x12, 0x17, 0x20, 0x17, 0x12, 0x60, 0x36, 0x11, 0x00, 0x1a, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	
}; // 64x64 Bitmap (4096 pixels) in 421 bytes

const uint16_t 395_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 9 entries
	0x0000, 0x3165, 0x5289, 0x8c72, 0x4393, 0xb4ea, 0xf540, 0xad75, 0xd69a, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_395_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(395_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(395_RLEBM_palette);
	bmInfo.width = 64;
	bmInfo.height = 64;
	bmInfo.flags = 0x01;
}
