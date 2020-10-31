
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
//  Data is from file '64x64\night\Processed\371.bmp'.
//

const byte 371_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0xe0, 0x21, 0x32, 0x21, 0x00, 0x2b, 
	0xc0, 0x11, 0x93, 0x11, 0x00, 0x29, 
	0xb0, 0xc3, 0x11, 0x00, 0x28, 
	0xa0, 0x43, 0x14, 0x25, 0x16, 0x14, 0x33, 0x11, 0x00, 0x29, 
	0x90, 0x43, 0x15, 0x46, 0x33, 0x11, 0x00, 0x2a, 
	0x80, 0x11, 0x33, 0x56, 0x14, 0x23, 0x12, 0x00, 0x2b, 
	0x80, 0x33, 0x15, 0x56, 0x33, 0x00, 0x2c, 
	0x70, 0x11, 0x23, 0x14, 0x56, 0x15, 0x23, 0x12, 0x00, 0x2c, 
	0x70, 0x11, 0x23, 0x15, 0x56, 0x14, 0x23, 0x11, 0x00, 0x2c, 
	0x70, 0x12, 0x23, 0x15, 0x56, 0x14, 0x23, 0x00, 0x2d, 
	0x70, 0x12, 0x23, 0x15, 0x56, 0x33, 0x00, 0x2d, 
	0x70, 0x12, 0x23, 0x15, 0x56, 0x14, 0x23, 0x11, 0x00, 0x2c, 
	0x70, 0x11, 0x23, 0x14, 0x56, 0x14, 0x23, 0x11, 0x00, 0x13, 0x31, 0x00, 0x16, 
	0x80, 0x33, 0x56, 0x15, 0x23, 0x12, 0xf0, 0x11, 0x17, 0x78, 0x17, 0x11, 0x00, 0x12, 
	0x80, 0x12, 0x23, 0x14, 0x56, 0x33, 0x11, 0xc0, 0x11, 0x17, 0xb8, 0x17, 0x00, 0x11, 
	0x90, 0x33, 0x14, 0x46, 0x15, 0x33, 0xb0, 0x17, 0xf8, 0x11, 0xf0, 
	0x90, 0x11, 0x33, 0x14, 0x15, 0x36, 0x14, 0x23, 0x12, 0x90, 0x17, 0x58, 0x19, 0x56, 0x19, 0x58, 0x11, 0xe0, 
	0xa0, 0x11, 0x53, 0x34, 0x43, 0x11, 0x60, 0x17, 0x48, 0x19, 0x96, 0x19, 0x48, 0x11, 0xd0, 
	0xb0, 0x11, 0xb3, 0x60, 0x11, 0x48, 0xd6, 0x48, 0xd0, 
	0xd0, 0x11, 0x63, 0x12, 0x11, 0x70, 0x17, 0x38, 0xf6, 0x38, 0x17, 0xc0, 
	0x00, 0x10, 0x21, 0x70, 0x11, 0x37, 0x38, 0x06, 0x10, 0x19, 0x38, 0xc0, 
	0x00, 0x17, 0x17, 0x88, 0x06, 0x11, 0x38, 0x17, 0xb0, 
	0x00, 0x15, 0x11, 0x98, 0x19, 0x06, 0x11, 0x19, 0x28, 0x17, 0xb0, 
	0x00, 0x14, 0x11, 0x58, 0x49, 0x18, 0x06, 0x13, 0x38, 0xb0, 
	0x00, 0x14, 0x48, 0x19, 0x06, 0x19, 0x38, 0xb0, 
	0x00, 0x13, 0x17, 0x38, 0x06, 0x1b, 0x38, 0x11, 0xa0, 
	0x00, 0x12, 0x11, 0x38, 0x19, 0x06, 0x1b, 0x48, 0x17, 0x90, 
	0x00, 0x12, 0x17, 0x38, 0x06, 0x1c, 0x58, 0x17, 0x80, 
	0x00, 0x11, 0x17, 0x38, 0x19, 0x06, 0x1d, 0x19, 0x48, 0x17, 0x70, 
	0x00, 0x10, 0x58, 0x06, 0x20, 0x48, 0x70, 
	0xf0, 0x68, 0x06, 0x21, 0x38, 0x17, 0x60, 
	0xe0, 0x17, 0x38, 0x19, 0x06, 0x23, 0x19, 0x38, 0x60, 
	0xd0, 0x11, 0x38, 0x19, 0x06, 0x25, 0x38, 0x11, 0x50, 
	0xd0, 0x17, 0x38, 0x06, 0x26, 0x38, 0x11, 0x50, 
	0xd0, 0x17, 0x28, 0x19, 0x06, 0x26, 0x38, 0x11, 0x50, 
	0xd0, 0x17, 0x28, 0x19, 0x06, 0x26, 0x38, 0x60, 
	0xd0, 0x17, 0x28, 0x19, 0x06, 0x25, 0x19, 0x38, 0x60, 
	0xd0, 0x11, 0x38, 0x06, 0x25, 0x38, 0x17, 0x60, 
	0xe0, 0x48, 0x06, 0x23, 0x48, 0x70, 
	0xe0, 0x11, 0x48, 0x19, 0x06, 0x1e, 0x19, 0x58, 0x11, 0x70, 
	0xf0, 0x17, 0x08, 0x27, 0x11, 0x80, 
	0x00, 0x10, 0x17, 0x08, 0x25, 0x11, 0x90, 
	0x00, 0x12, 0x27, 0x08, 0x1e, 0x27, 0x11, 0xb0, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x1a, 0x17, 0x18, 0x10, 0x11, 0x18, 0x11, 0x60, 0x17, 0x18, 0x10, 0x11, 0x18, 0x11, 0x00, 0x14, 
	0x00, 0x19, 0x17, 0x29, 0x11, 0x18, 0x19, 0x18, 0x50, 0x17, 0x29, 0x11, 0x18, 0x19, 0x18, 0x00, 0x14, 
	0x00, 0x1a, 0x18, 0x49, 0x11, 0x60, 0x18, 0x49, 0x11, 0x00, 0x14, 
	0x00, 0x18, 0x27, 0x18, 0x39, 0x18, 0x27, 0x11, 0x20, 0x27, 0x18, 0x39, 0x18, 0x27, 0x11, 0x00, 0x12, 
	0x00, 0x18, 0x18, 0x89, 0x17, 0x20, 0x18, 0x89, 0x17, 0x00, 0x12, 
	0x00, 0x18, 0x17, 0x28, 0x49, 0x28, 0x11, 0x20, 0x17, 0x28, 0x49, 0x28, 0x11, 0x00, 0x12, 
	0x00, 0x1a, 0x18, 0x49, 0x11, 0x60, 0x18, 0x49, 0x11, 0x00, 0x14, 
	0x00, 0x19, 0x11, 0x29, 0x17, 0x18, 0x19, 0x18, 0x50, 0x11, 0x29, 0x17, 0x18, 0x19, 0x18, 0x00, 0x14, 
	0x00, 0x1a, 0x17, 0x18, 0x10, 0x11, 0x18, 0x11, 0x60, 0x17, 0x18, 0x10, 0x11, 0x18, 0x11, 0x00, 0x14, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	
}; // 64x64 Bitmap (4096 pixels) in 561 bytes

const uint16_t 371_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 10 entries
	0x0000, 0x2966, 0x2b33, 0x039b, 0x345b, 0xae3b, 0xef5d, 0x426a, 0x9492, 0xd6ba, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_371_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(371_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(371_RLEBM_palette);
	bmInfo.width = 64;
	bmInfo.height = 64;
	bmInfo.flags = 0x01;
}
