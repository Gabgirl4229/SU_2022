#include <iostream>
#include "MyInteger.h"

int main() {    
    //print average of numbers
    std::cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << std::endl;

    //print isOdd for the integer 3
    std::cout << "isOdd(3) = " << MyInteger::isOdd(3) << std::endl;

    //create 3 MyInteger objects
    MyInteger i1(9323);
    MyInteger i2(147);
    MyInteger i3(9323);

    //displays isEven for i1
    std::cout << "i1.isEven() = " << i1.isEven() << std::endl;

    //displays equals for i3 using 843
    std::cout << "i3.equals(843) = " << i3.equals(843) << std::endl;

    //displays equals for i1 using i3
    std::cout << "i1.equals(i3) = " << i1.equals(i3) << std::endl;

    //print average of numbers (again)
    std::cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << std::endl;
    
    return 0;
}