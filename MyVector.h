#include <iostream>

#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int* elements;
    unsigned vectorCapacity, vectorSize;

public:
    //user-defined constructor
    MyVector(int nElements = 0);

    //copy constructor
    MyVector(const MyVector& other);

    //destructor
    ~MyVector();

    //class methods
    void print();
    void push_back(int value);
};

#endif