#include <iostream>
#include "Point2D.h"

Point2D::Point2D(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point2D::print() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}