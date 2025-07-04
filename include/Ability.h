#pragma once
#include"common.h"
class Ability {
public:
    Ability(std::string name, int power, int accuracy, int pp, Type type)
        : name(name), power(power), accuracy(accuracy), pp(pp), type(type) {}

    std::string getName() const {
        return name;
    }

    int getPower() const {
        return power;
    }

    int getAccuracy() const {
        return accuracy;
    }

    int getPP() const {
        return pp;
    }

    Type getType() const {
        return type;
    }

private:
    std::string name;
    int power = 0;
    int accuracy = 100;
    int pp = 0;
    Type type = Type::Normal;
    MoveCategory category = MoveCategory::Status;
};