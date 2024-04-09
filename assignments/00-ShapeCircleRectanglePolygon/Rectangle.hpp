#pragma once

#include "Shape.hpp"

class  Rectangle : public Shape {
    private:
    public:
        Rectangle();
        Rectangle(int valX, int valY, int, int);
        int area();
        int per();
};