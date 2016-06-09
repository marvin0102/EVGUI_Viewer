/* GIMP RGBA C-Source image dump (cork.c) */

#include "twinint.h"

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */ 
  char         	*comment;
  unsigned char	 pixel_data[8 * 8 * 4];
} cork_image = {
  8, 8, 4,
  "cork",
  "{\265\123\125\214\275\123\125{\265\123\125{\265\123\125\214\275\123\125{\265"
  "\336\125{\265\123\125\234\316\125\125{\265\123\125Z\214\316\125{\265\123\125"
  "k\234\336\125Z\214\326\125Z\224\336\125{\265\123\125{\265\336\125\214\275"
  "\123\125Z\214\326\125{\265\123\125\214\275\123\125{\255\336\125{\265\123\125"
  "{\265\336\125{\255\123\125{\265\336\125{\265\123\125Z\214\316\125{\263\353"
  "\125{\265\123\125\234\316\125\125{\265\123\125{\265\336\125\214\275\123\125{"
  "\255\336\125{\265\123\125{\265\336\125{\265\123\125k\245\123\125\234\316\125"
  "\125{\265\123\125{\265\336\125\214\306\125\125{\255\336\125k\245\123\125{"
  "\265\336\125{\265\123\125\234\316\125\125Z\214\316\125Z\214\326\125{\265\123"
  "\125k\245\123\125{\265\336\125\214\275\123\125{\255\123\125\214\275\123\125a"
  "\223\321\125\207\270\354\125[\215\326\125{\265\123\125Z\214\316\125\214\306"
  "\125\125{\255\336\125{\255\123\125Z\224"
  "\336\125"
};

twin_pixmap_t *
twin_make_pattern (void)
{
    twin_pointer_t	pixels;

    pixels.v = (void *) cork_image.pixel_data;

    return twin_pixmap_create_const (TWIN_ARGB32,
				     cork_image.width,
				     cork_image.height,
				     cork_image.width * cork_image.bytes_per_pixel,
				     pixels);
}
