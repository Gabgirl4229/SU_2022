#include <iostream>
#include "MyVector.h"

//template
template<typename T>
//user-defined constructor
MyVector<T>::MyVector(int nElements) {
    std::cout << "The constructor was called for " << this << std::endl;
    vectorSize = (nElements > 0) ? nElements : 0;
    vectorCapacity = vectorSize + 10;
    elements = new T[vectorCapacity]; //int was changed to T
    
    //initialize the elements
    for(int i = 0; i < vectorSize; i++) {
        elements[i] = T(); //T() default value for a generic type
    }
}

//template
template<typename T>
//copy constructor
MyVector<T>::MyVector(const MyVector& other) {
    std::cout << "The copy constructor was called for " << this << std::endl;
    vectorSize = other.vectorSize;
    vectorCapacity = other.vectorCapacity;
    elements = new T[vectorCapacity];
    //copy the values
    for(int i = 0; i < vectorSize; i++) {
        elements[i] = other.elements[i];
    }
}

//template
template<typename T>
//destructor
MyVector<T>::~MyVector() {
    std::cout << "The destructor was called for " << this << std::endl;
    delete [] elements;
}

//template
template<typename T>
//class methods
void MyVector<T>::print() {
    for (int i = 0; i < vectorSize; i++) {
        std::cout << elements[i] << std::endl;
    }
}

//template
template<typename T>
void MyVector<T>::push_back(T value) {
    //if the allocated memory is full, we need more memory
    if (vectorSize >= vectorCapacity) {
        T* temp = elements;
        vectorCapacity *= 2;
        elements = new T[vectorCapacity];
        
        //copy the elements
        for (int i = 0; i < vectorSize; i++) {
            elements[i] = temp[i];
        }
        
        //free the temp memory
        delete [] temp;
    }

    elements[vectorSize] = value;
    vectorSize++;
}

//template
template<typename T>
T MyVector<T>::pop_back() {
    if (vectorSize == 0) {
        std::cout << "The vector is empty!!!" << std::endl;
        return T();
    }
    else {
        vectorSize--;
        return elements[vectorSize];
    }
}