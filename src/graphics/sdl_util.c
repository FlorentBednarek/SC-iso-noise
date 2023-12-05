#include <assert.h>

#include "sdl_util.h"


void InitSDL() {
    int r = SDL_Init(SDL_INIT_VIDEO);
    assert(r == 0);
}

void QuitSDL() {
    SDL_Quit();
}

