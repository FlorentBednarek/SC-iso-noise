#ifndef _COLORS_H_
#define _COLORS_H_

#include <SDL2/SDL_pixels.h>
#include "../types.h"

#define BLACK 0x000000ff
#define WHITE 0xffffffff
#define RED 0xff0000ff
#define GREEN 0x00ff00ff
#define BLUE 0x0000ffff

SDL_Color HexToSDLColor(Color hex_color);


#endif
