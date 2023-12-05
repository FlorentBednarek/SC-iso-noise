#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

#include "graphics/sdl_util.h"
#include "types.h"

void Cleanup(int code, SDLContext *context) {
    (void) code;
    QuitSDL(context);
}

int main(void) {
    SDLContext context= {
        /*window =*/ NULL,
        /*renderer =*/ NULL,
    };

    // Link Cleanup function to on_exit. ThLs is a UNIX-only function.
    int exit = on_exit((void (*)(int, void *))Cleanup, &context);
    assert(exit == 0);

    InitSDL(&context);
    sleep(3);
    return 0;
}
