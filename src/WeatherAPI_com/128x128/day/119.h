
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
//  Data is from file '128x128\day\Processed\119.bmp'.
//

const byte 119_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x45, 0x11, 0x32, 0x13, 0x22, 0x21, 0x00, 0x32, 
	0x00, 0x41, 0x11, 0x13, 0x14, 0xb5, 0x16, 0x12, 0x11, 0x00, 0x2e, 
	0x00, 0x3f, 0x13, 0x14, 0x05, 0x11, 0x14, 0x12, 0x00, 0x2c, 
	0x00, 0x3d, 0x13, 0x05, 0x16, 0x14, 0x12, 0x00, 0x2a, 
	0x00, 0x3b, 0x12, 0x05, 0x1a, 0x14, 0x11, 0x00, 0x28, 
	0x00, 0x3a, 0x16, 0x05, 0x1d, 0x12, 0x00, 0x27, 
	0x00, 0x38, 0x11, 0x14, 0xc5, 0x77, 0xc5, 0x16, 0x00, 0x26, 
	0x00, 0x37, 0x11, 0xa5, 0xe7, 0xa5, 0x16, 0x00, 0x25, 
	0x00, 0x36, 0x11, 0x95, 0x07, 0x13, 0x85, 0x14, 0x00, 0x24, 
	0x00, 0x35, 0x11, 0x85, 0x07, 0x16, 0x85, 0x16, 0x00, 0x23, 
	0x00, 0x35, 0x14, 0x75, 0x07, 0x19, 0x75, 0x13, 0x00, 0x22, 
	0x00, 0x34, 0x13, 0x75, 0x07, 0x1b, 0x75, 0x11, 0x00, 0x21, 
	0x00, 0x33, 0x11, 0x75, 0x07, 0x1d, 0x65, 0x14, 0x00, 0x21, 
	0x00, 0x33, 0x14, 0x65, 0x07, 0x1f, 0x65, 0x12, 0x00, 0x20, 
	0x00, 0x32, 0x12, 0x65, 0x07, 0x20, 0x75, 0x00, 0x20, 
	0x00, 0x2d, 0x11, 0x22, 0x23, 0x14, 0x65, 0x07, 0x21, 0x65, 0x12, 0x00, 0x1f, 
	0x00, 0x2a, 0x12, 0x14, 0xc5, 0x07, 0x23, 0x55, 0x14, 0x00, 0x1f, 
	0x00, 0x27, 0x11, 0x16, 0xe5, 0x07, 0x24, 0x65, 0x11, 0x00, 0x1e, 
	0x00, 0x26, 0x13, 0x05, 0x10, 0x07, 0x25, 0x55, 0x16, 0x00, 0x1e, 
	0x00, 0x24, 0x11, 0x14, 0x05, 0x11, 0x07, 0x25, 0x55, 0x14, 0x00, 0x1e, 
	0x00, 0x23, 0x12, 0x05, 0x12, 0x07, 0x26, 0x65, 0x11, 0x00, 0x1d, 
	0x00, 0x22, 0x12, 0xb5, 0x77, 0x15, 0x07, 0x27, 0x55, 0x12, 0x00, 0x1d, 
	0x00, 0x21, 0x12, 0x95, 0x07, 0x32, 0x55, 0x12, 0x00, 0x1d, 
	0x00, 0x20, 0x11, 0x85, 0x07, 0x34, 0x55, 0x13, 0x00, 0x1d, 
	0x00, 0x20, 0x18, 0x75, 0x07, 0x35, 0x55, 0x16, 0x00, 0x1d, 
	0x00, 0x1f, 0x16, 0x75, 0x07, 0x36, 0x55, 0x16, 0x00, 0x1d, 
	0x00, 0x1e, 0x11, 0x75, 0x07, 0x37, 0x55, 0x14, 0x11, 0x00, 0x1c, 
	0x00, 0x1e, 0x16, 0x65, 0x07, 0x38, 0x75, 0x16, 0x00, 0x1b, 
	0x00, 0x1d, 0x11, 0x65, 0x07, 0x39, 0x85, 0x14, 0x11, 0x00, 0x19, 
	0x00, 0x1d, 0x13, 0x65, 0x07, 0x39, 0xa5, 0x12, 0x00, 0x18, 
	0x00, 0x1d, 0x14, 0x55, 0x07, 0x3a, 0xb5, 0x11, 0x00, 0x17, 
	0x00, 0x1c, 0x12, 0x65, 0x07, 0x3d, 0x95, 0x11, 0x00, 0x16, 
	0x00, 0x1a, 0x12, 0x75, 0x07, 0x40, 0x75, 0x14, 0x00, 0x16, 
	0x00, 0x18, 0x11, 0x14, 0x85, 0x07, 0x41, 0x75, 0x13, 0x00, 0x15, 
	0x00, 0x17, 0x11, 0x18, 0x95, 0x07, 0x42, 0x75, 0x00, 0x15, 
	0x00, 0x16, 0x11, 0xb5, 0x07, 0x43, 0x65, 0x13, 0x00, 0x14, 
	0x00, 0x16, 0x14, 0x85, 0x07, 0x47, 0x55, 0x18, 0x00, 0x14, 
	0x00, 0x15, 0x13, 0x75, 0x07, 0x49, 0x65, 0x11, 0x00, 0x13, 
	0x00, 0x14, 0x11, 0x75, 0x07, 0x4b, 0x55, 0x13, 0x00, 0x13, 
	0x00, 0x14, 0x13, 0x65, 0x07, 0x4c, 0x55, 0x16, 0x00, 0x13, 
	0x00, 0x14, 0x65, 0x07, 0x4d, 0x55, 0x14, 0x00, 0x13, 
	0x00, 0x13, 0x11, 0x65, 0x07, 0x4d, 0x65, 0x00, 0x13, 
	0x00, 0x13, 0x13, 0x55, 0x07, 0x4e, 0x65, 0x00, 0x13, 
	0x00, 0x13, 0x16, 0x55, 0x07, 0x4e, 0x65, 0x00, 0x13, 
	0x00, 0x13, 0x14, 0x55, 0x07, 0x4e, 0x65, 0x00, 0x13, 
	0x00, 0x13, 0x14, 0x55, 0x07, 0x4e, 0x55, 0x14, 0x00, 0x13, 
	0x00, 0x13, 0x14, 0x55, 0x07, 0x4e, 0x55, 0x16, 0x00, 0x13, 
	0x00, 0x13, 0x16, 0x55, 0x07, 0x4d, 0x65, 0x12, 0x00, 0x13, 
	0x00, 0x13, 0x13, 0x55, 0x07, 0x4d, 0x65, 0x00, 0x14, 
	0x00, 0x13, 0x12, 0x65, 0x07, 0x4b, 0x65, 0x16, 0x00, 0x14, 
	0x00, 0x14, 0x65, 0x07, 0x4b, 0x65, 0x11, 0x00, 0x14, 
	0x00, 0x14, 0x16, 0x65, 0x07, 0x49, 0x65, 0x14, 0x00, 0x15, 
	0x00, 0x14, 0x11, 0x75, 0x07, 0x47, 0x75, 0x11, 0x00, 0x15, 
	0x00, 0x15, 0x16, 0x75, 0x07, 0x44, 0x85, 0x13, 0x00, 0x16, 
	0x00, 0x16, 0x18, 0x85, 0x07, 0x40, 0x95, 0x16, 0x00, 0x17, 
	0x00, 0x16, 0x11, 0x05, 0x50, 0x16, 0x00, 0x18, 
	0x00, 0x17, 0x12, 0x05, 0x4e, 0x16, 0x00, 0x19, 
	0x00, 0x18, 0x11, 0x14, 0x05, 0x4b, 0x12, 0x00, 0x1a, 
	0x00, 0x1a, 0x16, 0x05, 0x48, 0x16, 0x11, 0x00, 0x1b, 
	0x00, 0x1b, 0x11, 0x16, 0x05, 0x44, 0x13, 0x11, 0x00, 0x1d, 
	0x00, 0x1e, 0x12, 0x13, 0x06, 0x3e, 0x12, 0x11, 0x00, 0x20, 
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
	0x00, 0x80, 
	
}; // 128x128 Bitmap (16384 pixels) in 739 bytes

const uint16_t 119_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 9 entries
	0x0000, 0x3185, 0x52ab, 0x6b6a, 0xad75, 0xd69a, 0x8c72, 0xe75d, 0xbe17, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_119_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(119_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(119_RLEBM_palette);
	bmInfo.width = 128;
	bmInfo.height = 128;
	bmInfo.flags = 0x01;
}
