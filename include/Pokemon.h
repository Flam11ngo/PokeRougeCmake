#include"common.h"

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
};
inline std::ostream& operator<<(std::ostream& os, const Pokemon& pokemon) {
    os << "Pokemon Name: " << pokemon.getName() << "\n"
       << "Type: " << static_cast<int>(pokemon.getType()) << "\n"
       << "Level: " << pokemon.getLevel() << "\n";
    return os;
}