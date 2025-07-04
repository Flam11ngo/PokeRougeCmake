#include"common.h"

class Vector2 {
public:
    Vector2(float x = 0, float y = 0) : x(x), y(y) {}
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }
    Vector2& operator+=(const Vector2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }
    Vector2& operator-=(const Vector2& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }
    Vector2& operator*=(const Vector2& other) {
        x *= other.x;
        y *= other.y;
        return *this;
    }
    Vector2 operator/(const float scalar) const {
        return Vector2(x / scalar, y / scalar);
    }
    Vector2& operator/=(const float scalar) {
        x /= scalar;
        y /= scalar;
        return *this;
    }
    float operator*(const Vector2& other) const {
        return x * other.x + y * other.y;
    }
    float length() const {
        return std::sqrt(x * x + y * y);
    }
    Vector2 normalized() {
        float len = length();
        if (len > 0) {
            return Vector2(x / len, y / len);
        }
        return Vector2(0, 0);
    }

    float x, y;
};