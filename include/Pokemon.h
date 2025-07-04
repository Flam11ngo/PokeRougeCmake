#include"common.h"
#include"Ability.h"
class Pokemon {
public:
    Pokemon(std::string name, Type type, int level)
        : name(name), type(type), level(level), status({}) {}
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
private:
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
    std::vector<std::string> moves;
    std::vector<Ability> abilities;
};