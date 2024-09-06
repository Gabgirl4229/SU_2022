#include <iostream>
#include "MyVector.h"

void func(MyVector temp) {
    std::cout << "The function func was called " << std::endl;
}

int main() {
    
    MyVector* mvPtr = new MyVector;
    mvPtr->push_back(86);
    mvPtr->push_back(52);
    mvPtr->push_back(70);
    mvPtr->push_back(86);
    mvPtr->push_back(53);
    
    mvPtr->print();
    func(*mvPtr);
    delete mvPtr;
    
    return 0;
}