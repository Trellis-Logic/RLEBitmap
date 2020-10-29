
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
//  Data is from file '.\Processed\partly-cloudy-night.bmp'.
//

const byte partly_cloudy_night_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x64, 
	0x00, 0x50, 0x11, 0x00, 0x13, 
	0x00, 0x20, 0x42, 0x00, 0x2c, 0x13, 0x00, 0x13, 
	0x00, 0x1b, 0x14, 0x65, 0x00, 0x2d, 0x11, 0x23, 0x00, 0x12, 
	0x00, 0x18, 0x14, 0x75, 0x12, 0x00, 0x2d, 0x14, 0x33, 0x11, 0x00, 0x11, 
	0x00, 0x16, 0x11, 0x85, 0x00, 0x2d, 0x14, 0x73, 0x14, 0xf0, 
	0x00, 0x14, 0x14, 0x95, 0x00, 0x2e, 0x11, 0x73, 0x11, 0xf0, 
	0x00, 0x13, 0xa5, 0x00, 0x31, 0x11, 0x33, 0x11, 0x00, 0x11, 
	0x00, 0x11, 0x12, 0xa5, 0x00, 0x33, 0x33, 0x00, 0x12, 
	0x00, 0x10, 0x14, 0xa5, 0x12, 0x00, 0x33, 0x33, 0x00, 0x12, 
	0xf0, 0x14, 0xb5, 0x00, 0x34, 0x11, 0x13, 0x11, 0x00, 0x12, 
	0xe0, 0x14, 0xb5, 0x12, 0x00, 0x14, 0xa4, 0x00, 0x16, 0x14, 0x13, 0x14, 0x00, 0x12, 
	0xe0, 0xc5, 0x00, 0x12, 0x04, 0x10, 0x00, 0x14, 0x13, 0x00, 0x13, 
	0xd0, 0xc5, 0x14, 0x00, 0x10, 0x04, 0x14, 0x00, 0x12, 0x13, 0x00, 0x13, 
	0xc0, 0x11, 0xc5, 0xf0, 0x12, 0x04, 0x16, 0x12, 0x00, 0x10, 0x13, 0x00, 0x13, 
	0xb0, 0x12, 0xd5, 0xe0, 0x04, 0x1a, 0xf0, 0x14, 0x00, 0x13, 
	0xb0, 0xd5, 0x14, 0xd0, 0x94, 0x12, 0x80, 0x12, 0x94, 0x00, 0x22, 
	0xa0, 0x14, 0xd5, 0xd0, 0x84, 0xe0, 0x84, 0x00, 0x21, 
	0xa0, 0xe5, 0xc0, 0x12, 0x64, 0x12, 0x00, 0x10, 0x12, 0x74, 0x00, 0x20, 
	0xa0, 0xe5, 0xc0, 0x64, 0x00, 0x14, 0x64, 0x00, 0x20, 
	0x90, 0xf5, 0xb0, 0x64, 0x00, 0x16, 0x64, 0x00, 0x1f, 
	0x90, 0xf5, 0xb0, 0x54, 0x12, 0x00, 0x17, 0x54, 0x12, 0x00, 0x1e, 
	0x90, 0xf5, 0xa0, 0x64, 0x00, 0x18, 0x64, 0x00, 0x1e, 
	0x80, 0x14, 0xf5, 0xa0, 0x54, 0x00, 0x1a, 0x54, 0x00, 0x1e, 
	0x80, 0x05, 0x10, 0x50, 0x12, 0x94, 0x00, 0x1a, 0xa4, 0x00, 0x19, 
	0x80, 0x05, 0x10, 0x20, 0x12, 0xc4, 0x00, 0x1b, 0xc4, 0x00, 0x16, 
	0x80, 0x05, 0x10, 0x12, 0x04, 0x10, 0x00, 0x19, 0xe4, 0x00, 0x14, 
	0x80, 0xf5, 0x04, 0x13, 0x12, 0x00, 0x17, 0xf4, 0x12, 0x00, 0x12, 
	0x80, 0xd5, 0x11, 0x04, 0x15, 0x00, 0x17, 0x04, 0x11, 0x00, 0x11, 
	0x80, 0xc5, 0x11, 0x94, 0x12, 0x30, 0x12, 0x84, 0x12, 0x00, 0x16, 0x12, 0x44, 0x12, 0x20, 0x12, 0x94, 0x00, 0x10, 
	0x80, 0xc5, 0x74, 0x12, 0xa0, 0x54, 0x00, 0x17, 0x12, 0x44, 0x12, 0x50, 0x74, 0x12, 0xf0, 
	0x80, 0xb5, 0x74, 0xe0, 0x24, 0x00, 0x18, 0x54, 0x70, 0x12, 0x64, 0xf0, 
	0x80, 0xa5, 0x11, 0x64, 0x00, 0x29, 0x54, 0x90, 0x64, 0xe0, 
	0x80, 0xa5, 0x64, 0x00, 0x2a, 0x54, 0x90, 0x12, 0x54, 0xe0, 
	0x80, 0x14, 0x85, 0x64, 0x00, 0x2c, 0x44, 0xa0, 0x64, 0xd0, 
	0x90, 0x85, 0x54, 0x12, 0x00, 0x2d, 0x12, 0xd0, 0x54, 0xd0, 
	0x90, 0x85, 0x54, 0x00, 0x3c, 0x54, 0x12, 0xc0, 
	0x90, 0x75, 0x11, 0x54, 0x00, 0x3c, 0x12, 0x54, 0xc0, 
	0x90, 0x12, 0x65, 0x54, 0x00, 0x3e, 0x54, 0xc0, 
	0xa0, 0x65, 0x54, 0x00, 0x3e, 0x54, 0xc0, 
	0xa0, 0x14, 0x55, 0x54, 0x00, 0x3e, 0x54, 0xc0, 
	0xb0, 0x55, 0x54, 0x00, 0x3e, 0x54, 0xc0, 
	0xb0, 0x14, 0x45, 0x54, 0x12, 0x00, 0x3d, 0x54, 0xc0, 
	0xc0, 0x45, 0x64, 0x00, 0x3d, 0x54, 0xc0, 
	0xd0, 0x45, 0x54, 0x00, 0x3c, 0x54, 0x12, 0xc0, 
	0xd0, 0x12, 0x35, 0x54, 0x12, 0x00, 0x3b, 0x54, 0xd0, 
	0xe0, 0x14, 0x25, 0x64, 0x00, 0x3a, 0x64, 0xd0, 
	0xf0, 0x11, 0x25, 0x64, 0x00, 0x39, 0x54, 0x12, 0xd0, 
	0x00, 0x10, 0x11, 0x15, 0x64, 0x12, 0x00, 0x37, 0x64, 0xe0, 
	0x00, 0x11, 0x14, 0x15, 0x64, 0x12, 0x00, 0x35, 0x64, 0xf0, 
	0x00, 0x13, 0x11, 0x74, 0x00, 0x32, 0x84, 0xf0, 
	0x00, 0x14, 0x94, 0x00, 0x2e, 0x94, 0x00, 0x10, 
	0x00, 0x15, 0x04, 0x3e, 0x00, 0x11, 
	0x00, 0x16, 0x04, 0x3c, 0x00, 0x12, 
	0x00, 0x17, 0x12, 0x04, 0x38, 0x00, 0x14, 
	0x00, 0x19, 0x04, 0x35, 0x00, 0x16, 
	0x00, 0x1c, 0x12, 0x04, 0x2e, 0x12, 0x00, 0x18, 
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
	
}; // 100x100 Bitmap (10000 pixels) in 629 bytes

const uint16_t partly_cloudy_night_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 6 entries
	0x0000, 0xad55, 0x3a02, 0xffff, 0x52aa, 0xfff5, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_partly_cloudy_night_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(partly_cloudy_night_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(partly_cloudy_night_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
