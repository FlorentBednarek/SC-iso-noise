#include <SDL2/SDL_error.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>

#include "sdl_util.h"
#include "../tests/test_utils.h"
#include "../constants.h"
#include "colors.h"

void InitSDL(SDLContext *context) { 
    int result = -1;
    result = SDL_Init(SDL_INIT_VIDEO);
    massert(result == 0, SDL_GetError());

    context->window = SDL_CreateWindow(
            WINDOW_TITLE, 
            SDL_WINDOWPOS_CENTERED, 
            SDL_WINDOWPOS_CENTERED, 
            W_WIDTH, W_HEIGHT, 
            SDL_WINDOW_SHOWN);
    massert(context->window != NULL, SDL_GetError());

    context->renderer = SDL_CreateRenderer(context->window, -1, SDL_RENDERER_ACCELERATED);
    massert(context->renderer !=  NULL, SDL_GetError());
}

void QuitSDL(SDLContext *context) {
    if (context->window != NULL) {
        printf("Destroying Window...\n");
        SDL_DestroyWindow(context->window);
    } 
    if (context->renderer != NULL) {
        printf("Destroying Renderer...\n");
        SDL_DestroyRenderer(context->renderer);
    }
    printf("Quiting SDL...\n");
    SDL_Quit();
    printf("Done!\n");
}

void SetDrawColor(SDLContext context, Color color) {
    SDL_Color sdlColor;
    sdlColor = HexToSDLColor(color);
    int result = -1;
    result = SDL_SetRenderDrawColor(context.renderer, 
            sdlColor.r, 
            sdlColor.g, 
            sdlColor.b, 
            sdlColor.a);
    massert(result == 0, SDL_GetError()); 
}
