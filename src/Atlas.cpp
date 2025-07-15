#include"Atlas.h"

Atlas::~Atlas() {
    for (SDL_Texture* texture : textures) {
        if (texture) {
            SDL_DestroyTexture(texture);
        }
    }
}

void Atlas::load( SDL_Renderer* renderer, const std::string& filePath ,int num) {
    for(int i = 0; i < num; ++i) {
        std::string fullPath = filePath + std::to_string(i) + ".png";
        SDL_Texture* texture = IMG_LoadTexture(renderer, fullPath.c_str());
        if (texture) {
            textures.push_back(texture);
        }
    }
}

void Atlas::clear() {
    textures.clear();
}

size_t Atlas::size() const {
    return textures.size();
}

void Atlas::addTexture(SDL_Texture* texture) {
    if (texture) {
        textures.push_back(texture);
    }
}

SDL_Texture* Atlas::getTexture(size_t index) const {
    if (index < textures.size()) {
        return textures[index];
    }
    return nullptr;
}

