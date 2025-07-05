#include"Global.h"
Pikachu pikachu(5);


void loadGlobalResources(SDL_Renderer* renderer) {
    // Load global resources like textures, sounds, etc.
    pikachu.getAtlas().load(renderer, "../image/Pikachu/", 60);
    pikachu.getAtlas_().load(renderer, "../image/Pikachu_back/", 60);
}