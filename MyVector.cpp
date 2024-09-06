#include <iostream>
#include "MyVector.h"

//user-defined constructor
MyVector::MyVector(int nElements) {
    std::cout << "The constructor was called for " << this << std::endl;
    vectorSize = (nElements > 0) ? nElements : 0;
    vectorCapacity = vectorSize + 10;
    elements = new int[vectorCapacity];

    //initialize the elements
    for (int i = 0; i < vectorSize; i++) {
        elements[i] = 0;
    }
}

//copy constructor
MyVector::MyVector(const MyVector& other) {
    std::cout << "The copy constructor was called for " << this << std::endl;
    vectorSize = other.vectorSize;
    vectorCapacity = other.vectorCapacity;
    elements = new int[vectorCapacity];
    
    //copy the values
    for(int i = 0; i < vectorSize; i++) {
        elements[i] = other.elements[i];
    }
}

//destructor
MyVector::~MyVector() {
    std::cout << "The destructor was called for " << this << std::endl;
    delete [] elements;
}

//class methods
void MyVector::print() {
    for (int i = 0; i < vectorSize; i++) {
        std::cout << elements[i] << std::endl;
    }
}
    
void MyVector::push_back(int value) {
    elements[vectorSize] = value;
    vectorSize++;
}