#ifndef _TYPES_H_
#define _TYPES_H_

#include <SDL2/SDL.h>

typedef struct {
    SDL_Window *window;
    SDL_Renderer *renderer;
} SDLContext;

typedef int Color;

#endif
