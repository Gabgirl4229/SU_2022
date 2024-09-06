#include <iostream>
#include <cmath>
#include "Circle2D.h"


//static data field
int Circle2D::numberOfCircles = 0;

//accessors
const double Circle2D::getX() {
    return x;
}

const double Circle2D::getY() {
    return y;
}

const double Circle2D::getRadius() {
    return radius;
}

//static accessor
int Circle2D::getNumberOfCircles() {
    return numberOfCircles;
}

//user-defined constructor
Circle2D::Circle2D(double newX, double newY, double newRadius) {
    x = newX;
    y = newY;
    radius = newRadius;
    numberOfCircles++;
}

//copy constructor
Circle2D::Circle2D(const Circle2D& circle) {
    x = circle.x;
    y = circle.y;
    radius = circle.radius;
    numberOfCircles++;
}

//destructor
Circle2D::~Circle2D() {
    numberOfCircles--;
}

//class method
const bool Circle2D::overlaps(const Circle2D& circle) {
    double length = sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2));
    if (length <= (radius + circle.radius)) {
        return true;
    } else {
        return false;
    }
}