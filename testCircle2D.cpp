#include <iostream>
#include "Circle2D.h"

int main() {
    //dynamically create a Circle2D object with (2, 2, 5.5)
    Circle2D* pCir1 = new Circle2D(2, 2, 5.5);

    //create another Circle2D object with (-6, -3, 1.5)
    Circle2D cir2(-6, -3, 1.5);

    //call getNumberOfCircles from pCir1
    std::cout << "Number of objects is " << pCir1->getNumberOfCircles() << std::endl;

    //use the copy constructor on cir2 to create cir3
    Circle2D cir3(cir2);

    //call getNumberOfCircles from cir3
    std::cout << "Number of objects is " << cir3.getNumberOfCircles() << std::endl;

    //call overlaps() from pCir1 using cir2
    std::cout << "pCir1 overlaps cir2: " << pCir1->overlaps(cir2) << std::endl;

    //call overlaps() from cir3 using cir2
    std::cout << "cir3 overlaps cir2: " << cir3.overlaps(cir2) << std::endl;

    //frees the memory allocated to the heap
    delete pCir1;

    //call getNumberOfCircles
    std::cout << "Number of objects is " << Circle2D::getNumberOfCircles() << std::endl;
    
    return 0;
}