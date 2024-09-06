#include <iostream>
#include "Triangle.h"

int main() {
    //create a red non-filled triangle with sides 4, 4, 4
    Triangle t1(4, 4, 4, "red", false);

    //create a green filled triangle with sides 5, 5, 2
    Triangle t2(5, 5, 2, "green", true);

    //create a blue filled triangle with sides 5.5, 5.5, 1
    Triangle t3(5.5, 5.5, 1, "blue", true);

    //display information about the triangles
    t1.display();
    t2.display();
    t3.display();

    return 0;
}