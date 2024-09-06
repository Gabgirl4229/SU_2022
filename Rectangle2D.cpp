#include <iostream>
#include "Rectangle2D.h"

//if a given point is inside this rectangle
bool Rectangle2D::contains(double givenX, double givenY) {
    if (givenX >= x - (width/2) && givenX <= x + (width/2) && givenY >= y - (height/2) && givenY <= y + (height/2)) {
        return true;
    } else {
        return false;
    }
}

//if another rectangle is inside this rectangle
bool Rectangle2D::contains(const Rectangle2D& r) {
    //will return false if r's width or height is larger
    if (r.width > width || r.height > height) {
        return false;
    }
    //will return false if any border of r is outside the current rectangle
    if (r.x - (r.width/2) < x - (width/2) || r.x + (r.width/2) > x + (width/2)) {
        return false;
    }
    if (r.y - (r.height/2) < y - (height/2) || r.y + (r.height/2) > y + (height/2)) {
        return false;
    }
    //else return true
    return true;
}

//if another rectangle overlaps this rectangle
bool Rectangle2D::overlaps(const Rectangle2D& r) {
    //create a placeholder boolean
    bool temp;
        
    //for the current rectangle's x values...
    for (int i = x - (width/2); i <= x + (width/2); i++) {
        //set temp to false if r's x corners are outside rectangle
        if (r.x + (r.width/2) < x - (width/2) || r.x - (r.width/2) > x + (width/2)) {
            temp = false;
        } else {
            temp = true;
        }
    }

    //for the current rectangle's y values...
    for (int i = y - (height/2); i <= y + (height/2); i++) {
        //return false if r's x and y corners are outside rectangle
        if ((r.y + (r.height/2) < y - (height/2) || r.y - (r.height/2) > y + (height/2)) && temp == false) {
            return false;
        } else {
            return true;
        }
    }
}

//no-argument constructor
Rectangle2D::Rectangle2D() {
    x = y = 0;
    width = height = 1;
}

    //user-defined constructor
Rectangle2D::Rectangle2D(const double& newX, const double& newY, const double& newWidth, const double& newHeight) {
    x = newX;
    y = newY;
    width = newWidth;
    height = newHeight;
}