#include <iostream>
#include "Point2D.h"
#include "Point3D.h"

void printPoints(const Point2D& p) {
    p.print();
}

int main() {
    //create 2D object
    Point2D p2d(1,1);

    //create 3D object
    Point3D p3d(1,1,2);

    //print objects
    printPoints(p2d);
    printPoints(p3d);

    return 0;
}