#include "Shape.hpp"
#include "Circle.hpp"
#include "Polygon.hpp"
#include "Rectangle.hpp"

#include <iostream>

int main() 
{
  Shape figura1{1,2};
  Circle circulo1{2,3,5};
  Polygon poligono1{4,5,6};
  Rectangle rectangulo1{7,8};

  std::cout << figura1.draw() << " con valor en x: " << figura1.getValueX() << " y valor en y en: " << figura1.getValueY() << "\n";

  std::cout << circulo1.draw() << " con valor en x: " << circulo1.getValueX() << " y valor en y en: " << circulo1.getValueY() << " con radio r: "<< circulo1.getRadio() << "\n";

  std::cout << poligono1.draw() << " con valor en x: " << poligono1.getValueX() << " y valor en y en: " << poligono1.getValueY() << " con radio r: "<< poligono1.getSides() << "\n";

  std::cout << rectangulo1.draw() << " con valor en x: " << rectangulo1.getValueX() << " y valor en y en: " << rectangulo1.getValueY() << " con una area de: " << rectangulo1.setarea() << " con un perimetro de: " << rectangulo1.setper() << "\n";

  return 0;
}
