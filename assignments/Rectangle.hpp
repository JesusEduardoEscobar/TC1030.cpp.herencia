#pragma once

#include "Shape.hpp"

class  Rectangle : public Shape {
    private:
        double width;
        double height;
    
    public:
        rectange();
        Rectangle(double valX, double valY, double valWidth, double valHeight);
        double getWidh();
        double getHeight();
}