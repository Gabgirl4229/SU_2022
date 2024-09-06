#include <iostream>
#include <cmath>
#include <iomanip>
#include "Triangle.h"
//#include "GeometricObject.cpp"

//no-arg constructor
Triangle::Triangle() {
    side1 = side2 = side3 = 1.0;
}

//user-def constructor
Triangle::Triangle(const double& side1, const double& side2, const double& side3, const std::string& color, bool filled) : GeometricObject(color, filled) {
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
}

//accessors
double Triangle::getPerimeter() const {
    return side1 + side2 + side3;
}

double Triangle::getArea() const {
    //Pythagorean theorem for the height
    double height = sqrt(pow(side1, 2) - pow(side3/2, 2));
    return (side3 * height)/2;
}

//class method
void Triangle::display() {
    std::cout << "Area:" << std::setw(10) << " " << getArea() << std::endl;
    std::cout << "Perimeter:" << std::setw(5) << " " << getPerimeter() << std::endl;
    std::cout << "Color:" << std::setw(9) << " " << getColor() << std::endl;
    std::cout << "Filled:" << std::setw(8) << " " << isFilled() << std::endl;
    
    std::string line(24, '_');
    std::cout << line << std::endl;
}