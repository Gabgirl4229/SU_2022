#include <iostream>
#include "MySet.h"

int main() {
    //create an object with 20
    MySet set1(20);

    //insert numbers 13, 7, 20, 21
    set1.insertElement(13);
    set1.insertElement(7);
    set1.insertElement(20);
    set1.insertElement(21);

    //call printSet from set1
    set1.printSet();

    //delete 22 and 13
    set1.deleteElement(22);
    set1.deleteElement(13);
    
    //create a second object with 100
    MySet set2(100);

    //call printSet from set2
    set2.printSet();

    //create a third object using the first object
    MySet set3(set1);

    //check if set3 is equal to set1
    std::cout << "set3.isEqualTo(set1) = " << set3.isEqualTo(set1) << std::endl;
}