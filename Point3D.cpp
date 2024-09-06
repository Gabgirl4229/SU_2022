#include <iostream>
#include "Point3D.h"

Point3D::Point3D(double x, double y, double z) : Point2D(x, y) {
    this->z = z;
}

void Point3D::print() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}