#include"Global.h"

std::vector<Pokemon> Id2Pokemon{
    Pikachu(),
    Lucario(),
};
std::unordered_map<std::string, int> Pokemon2Id = {
    {"Pikachu", 0},
    {"Lucario", 1},
};

std::vector<Atlas> PokemonAtlas;
std::vector<Pokemon> Pokemons;


void loadGlobalResources(SDL_Renderer* renderer) {
    // Load global resources like textures, sounds, etc.
    for(int i = 0; i < Id2Pokemon.size(); i++) {
        PokemonAtlas.emplace_back();
        PokemonAtlas[i].load(renderer, "../image/" + Id2Pokemon[i].getName() + "/", Id2Pokemon[i].getNumofAtlas());
        Id2Pokemon[i].setAtlas(&PokemonAtlas[Pokemon2Id[Id2Pokemon[i].getName()]]);
    }
}