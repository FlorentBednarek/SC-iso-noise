#ifndef _SDL_UTILITY_H_
#define _SDL_UTILITY_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

#include "../types.h"

void InitSDL(SDLContext *context);

void QuitSDL(SDLContext *context);
#endif


