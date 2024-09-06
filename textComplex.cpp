#include <iostream>
#include "Complex.h"

int main() {
    //create a Complex object with no arguments
    Complex objectA;

    //set the real part to 2.4 and the imaginary part to 4.1
    objectA.setReal(2.4);
    objectA.setImg(4.1);

    //create another Complex object, with real 3.2 and img -3.6
    Complex objectB(3.2, -3.6);

    //call addition from objectA using objectB
    Complex objectC = objectA.addition(objectB);

    //print out the sum
    objectC.printComplex();

    //call additionTwo using objectA and objectB
    Complex objectD = additionTwo(objectA, objectB);

    //print out the sum
    objectD.printComplex();

    //create an array of 4+ objects
    Complex object0(1.3, 9.2);
    Complex object1(4.9, 7.2);
    Complex object2(4.7, -1.3);
    Complex object3(9.8, 1.0);
    Complex object4(-3.0, 3.7);
    Complex object5(2.8, 2.1);
    Complex object6(8.3, -5.7);
    Complex object7(6.6, 2.8);
    
    Complex arr[8] = {object0, object1, object2, object3, object4, object5, object6, object7};

    //call additionArray using the array
    Complex object8 = additionArray(arr, 8);

    //print the results
    object8.printComplex();

    return 0;
}