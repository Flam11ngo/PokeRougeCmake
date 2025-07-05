#pragma once
#include "common.h"
class Atlas {
public:
    Atlas() = default;
    ~Atlas();
    void load(SDL_Renderer *renderer, const std::string &filePath, int num);
    size_t size() const;
    void clear();
    void addTexture(SDL_Texture *texture);
    SDL_Texture *getTexture(size_t index) const;
private:
    std::vector<SDL_Texture*> textures;
    SDL_Renderer* renderer = nullptr;
};