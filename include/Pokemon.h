#include"common.h"
#include"Ability.h"
#include"Atlas.h"
class Pokemon {
public:
    Pokemon(std::string name, Type type, int level)
        : name(name), type(type), level(level), status({}) {
        }
    Pokemon(std::string name, Type type, Type type_, int level)
        : name(name), type(type), type_(type_), level(level), status({}) {}
    void setStatus(Status newStatus) {
        status.push_back(newStatus);
    }
    std::vector<Status> getStatus() const {
        return status;
    }
    std::string getName() const {
        return name;
    }
    Type getType() const {
        return type;
    }
    Type getType_() const {
        return type_;
    }
    int getLevel() const {
        return level;
    }
    void levelUp() {
        level++;
    }
    std::vector<Ability> getAbilities() const {
        return abilities;
    }
    Atlas& getAtlas() {
        return atlas;
    }
    Atlas& getAtlas_() {
        return atlas_;
    }
protected:
    std::string name;
    Type type;
    Type type_;
    int level;
    std::vector<Status> status;
    int hp = 100; 
    int attack = 50; 
    int defense = 50; 
    int speed = 50; 
    int specialAttack = 50; 
    int specialDefense = 50; 
    int exp = 0;
    int expToNextLevel = 100;
    int maxHp = 100;
    bool isFriend = false;
    int raceId = 0; // Unique identifier for the Pokémon species
    int raceHp = 100; // Base HP for the Pokémon species
    int raceAttack = 50; // Base Attack for the Pokémon species
    int raceDefense = 50; // Base Defense for the Pokémon species
    int raceSpeed = 50; // Base Speed for the Pokémon species
    int raceSpecialAttack = 50; // Base Special Attack for the Pokémon species
    int raceSpecialDefense = 50; // Base Special Defense for the Pokémon species

    Pokemon* evolution = nullptr;

    Atlas atlas; 
    Atlas atlas_; 
    std::vector<std::string> moves;
    std::vector<Ability> abilities;
    int currentAtlasIndex = 0; // Index of the currently selected move
    int PassedTime = 0; // Time passed since the last action
};

class Pikachu : public Pokemon {
public:
    Pikachu(int level)
        : Pokemon("Pikachu", Type::Electric, level) {
        // Initialize Pikachu-specific attributes
        setStatus(Status::None);
        isFriend = true;
        // Add Pikachu's abilities
        abilities.emplace_back("Thunderbolt", 90, 100, 15, Type::Electric);
        abilities.emplace_back("Quick Attack", 40, 100, 30, Type::Normal);
    }
    void on_draw(SDL_Renderer *renderer){
       
        SDL_Texture* texture = atlas.getTexture(currentAtlasIndex);
        SDL_Rect rec{128,128,128,128};
        if (texture) {
            SDL_RenderCopy(renderer, texture, nullptr, &rec);
        }
    }
    void on_update(const int& delta) {
        PassedTime += delta;
        if (PassedTime >= delta * 2) {
            PassedTime = 0;
            currentAtlasIndex = (currentAtlasIndex + 1) % atlas.size();
        }
    }
};