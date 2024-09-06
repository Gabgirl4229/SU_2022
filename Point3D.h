#include <iostream>
#include "Point2D.h"

#ifndef POINT3D_H
#define POINT3D_H

class Point3D : public Point2D {
private:
    double z;
public:
    Point3D(double x = 0, double y = 0, double z = 0);

    void print() const override;
};

#endif