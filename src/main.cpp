#define SDL_MAIN_HANDLED
#include"common.h"

int main(){
    std::cout << "Game exited successfully." << std::endl;
    SDL_Window* window = SDL_CreateWindow("Pokemon Game",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          800, 600,
                                          SDL_WINDOW_SHOWN);
    while(true)
        ;
    return 0;
}