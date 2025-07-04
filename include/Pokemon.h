#include"common.h"

class Pokemon {
public:
    Pokemon(std::string name, Type type, int level)
        : name(name), type(type), level(level), status(Status::None) {}

    void setStatus(Status newStatus) {
        status = newStatus;
    }

    Status getStatus() const {
        return status;
    }

    std::string getName() const {
        return name;
    }

    Type getType() const {
        return type;
    }

    int getLevel() const {
        return level;
    }
    void levelUp() {
        level++;
    }
    void printInfo() const {
        std::cout << "Pokemon Name: " << name << "\n"
                  << "Type: " << static_cast<int>(type) << "\n"
                  << "Level: " << level << "\n"
                  << "Status: " << static_cast<int>(status) << "\n";
    }
private:
    std::string name;
    Type type;
    int level;
    Status status;
};
std::ostream& operator<<(std::ostream& os, const Pokemon& pokemon) {
    os << "Pokemon Name: " << pokemon.getName() << "\n"
       << "Type: " << static_cast<int>(pokemon.getType()) << "\n"
       << "Level: " << pokemon.getLevel() << "\n"
       << "Status: " << static_cast<int>(pokemon.getStatus()) << "\n";
    return os;
}