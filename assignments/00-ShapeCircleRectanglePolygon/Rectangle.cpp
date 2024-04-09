#include "Rectangle.hpp"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int valX, int valY): Shape{valX, valY};
{
    
}

int Rectangle::area()
{
    int area;
    area = valX*valY;
    return area;
}

int Rectangle::per()
{
    int per;
    per = 2*valX + 2*valY;
    return per;
}