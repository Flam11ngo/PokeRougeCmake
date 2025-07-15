#include"common.h"
#include"Ability.h"
#include"Atlas.h"



class Pokemon {
public:
    Pokemon(int id,std::string name, Type type,int raceHp = 100, int raceAttack = 50, int raceDefense = 50, int raceSpecialAttack = 50, int raceSpecialDefense = 50,int raceSpeed = 50,int NumofAtlas = 60)
        : raceId(id), name(name), type(type), raceAttack(raceAttack), raceDefense(raceDefense),  raceSpecialAttack(raceSpecialAttack), raceSpecialDefense(raceSpecialDefense), raceHp(raceHp), raceSpeed(raceSpeed), NumofAtlas(NumofAtlas), status({}) {
        }
    Pokemon(int id,std::string name, Type type, Type type_,int raceHp = 100, int raceAttack = 50, int raceDefense = 50, int raceSpecialAttack = 50, int raceSpecialDefense = 50,int raceSpeed = 50,int NumofAtlas = 60)
        : raceId(id), name(name), type(type), type_(type_), raceHp(raceHp), raceAttack(raceAttack), raceDefense(raceDefense),  raceSpecialAttack(raceSpecialAttack), raceSpecialDefense(raceSpecialDefense), raceSpeed(raceSpeed),NumofAtlas(NumofAtlas),status({}) {}

    void setStatus(Status newStatus) {
        status.push_back(newStatus);
    }
    void setAtlas(Atlas* atlas) {
        this->atlas = atlas;
    }
    void setAtlas_(Atlas* atlas_) {
        this->atlas_ = atlas_;
    }
    std::vector<Status> getStatus() const {
        return status;
    }
    std::string getName() const {
        return name;
    }
    int getNumofAtlas() const {
        return NumofAtlas;
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
    Atlas* getAtlas() {
        return atlas;
    }
    Atlas* getAtlas_() {
        return atlas_;
    }
    

    void on_update(const float& deltaTime) {
        PassedTime += deltaTime;
        if (PassedTime >= deltaTime * 2) { // Update every second
            PassedTime = 0;
            currentAtlasIndex = (currentAtlasIndex + 1) % atlas->size();
        }
    }

    void on_draw(SDL_Renderer* renderer, int x, int y) {
        if (atlas && atlas->size() > 0) {
            SDL_Texture* texture = atlas->getTexture(currentAtlasIndex);
            if (texture) {
                SDL_Rect dstRect = { x, y, 100, 100 }; // Assuming each sprite is 100x100 pixels
                SDL_RenderCopy(renderer, texture, nullptr, &dstRect);
            }
        }
    }
    void addAbility(const Ability& ability) {
        abilities.push_back(ability);
    }
    void GenerateRandomValues(){
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 100);
        hp = dis(gen);
        attack = dis(gen);
        defense = dis(gen);
        speed = dis(gen);
        specialAttack = dis(gen);
        specialDefense = dis(gen);
    }
protected:
    // Basic information
    std::string name;
    Type type;
    Type type_;
    int level;
    std::vector<Status> status;
    // Values for Pokemon's IV
    int hp = 100; 
    int attack = 50; 
    int defense = 50; 
    int speed = 50; 
    int specialAttack = 50; 
    int specialDefense = 50; 
    int exp = 0;
    int expToNextLevel = 100;
    int maxHp = 100;
    int maxAttack = 50;
    bool Owned = false;
    bool isFriend = false; // Indicates if the Pokémon is a friend or an enemy
    bool isCaptureable = false; // Indicates if the Pokémon can be captured

    // Values for Pokemon's EV
    int raceId = 0; // Unique identifier for the Pokémon species
    int raceHp = 100; // Base HP for the Pokémon species
    int raceAttack = 50; // Base Attack for the Pokémon species
    int raceDefense = 50; // Base Defense for the Pokémon species
    int raceSpeed = 50; // Base Speed for the Pokémon species
    int raceSpecialAttack = 50; // Base Special Attack for the Pokémon species
    int raceSpecialDefense = 50; // Base Special Defense for the Pokémon species

    // Values for evolution
    Pokemon* evolution = nullptr;

    // Values for sprite animation
    Atlas* atlas = nullptr; 
    Atlas* atlas_ = nullptr;
    int NumofAtlas;
    // Values for sprite abilities
    std::vector<Ability> abilities;

    // Values for update
    int currentAtlasIndex = 0; // Index of the currently selected move
    int PassedTime = 0; // Time passed since the last action
};

class Pikachu : public Pokemon {
public:
    Pikachu() : Pokemon(0, "Pikachu", Type::Electric, 35, 55, 40, 50, 50, 90, 60) {}
};

class Lucario : public Pokemon {
public: 
    Lucario() : Pokemon(1, "Lucario", Type::Fighting, Type::Steel, 70, 110, 70, 115, 70, 90, 60) {}
};