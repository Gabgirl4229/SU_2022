#include <iostream>

class Rectangle2D {
private:
    //data fields
    double x, y, width, height;

public:
    //if a given point is inside this rectangle
    bool contains(double givenX, double givenY);

    //if another rectangle is inside this rectangle
    bool contains(const Rectangle2D& r);

    //if another rectangle overlaps this rectangle
    bool overlaps(const Rectangle2D& r);

    //no-argument constructor
    Rectangle2D();

    //user-defined constructor
    Rectangle2D(const double& newX, const double& newY, const double& newWidth, const double& newHeight);
};