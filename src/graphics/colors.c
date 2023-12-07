#include "colors.h"
#include <SDL2/SDL_pixels.h>

SDL_Color HexToSDLColor(const Color hex_color) {
    SDL_Color sdl_color; 
    sdl_color.r = hex_color >> 24 & 0x000000ff;
    sdl_color.g = hex_color >> 16 & 0x000000ff;
    sdl_color.b = hex_color >> 8 & 0x000000ff;
    sdl_color.a = hex_color >> 24 & 0x000000ff;
    return sdl_color;
}
