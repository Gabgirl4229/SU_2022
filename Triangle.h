#include <iostream>
#include "GeometricObject.cpp"

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public GeometricObject {
private:
    double side1, side2, side3;

public:
    //no-arg constructor
    Triangle();

    //user-def constructor
    Triangle(const double& side1, const double& side2, const double& side3, const std::string& color, bool filled);

    //accessors
    double getPerimeter() const;
    double getArea() const;

    //class method
    void display();
};

#endif