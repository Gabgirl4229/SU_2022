#include <iostream>

#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
protected:
    double x, y;
public:
    Point2D(double x = 0, double y = 0);

    virtual void print() const;
};

#endif