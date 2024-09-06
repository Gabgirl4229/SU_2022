#include <iostream>
#include <iomanip>
#include "MyVector.h"

//template
template<typename T>
//user-defined constructor
MyVector<T>::MyVector(int nElements) {
    std::cout << "The constructor was called for " << this << std::endl << std::endl;
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
    std::cout << "The destructor was called for " << this << std::endl << std::endl;
    delete [] elements;
}

//class methods

//template
template<typename T>
void MyVector<T>::print() {
    for (int i = 0; i < vectorSize; i++) {
        std::cout << std::setw(2) << elements[i] << "  ";
    }
    std::cout << std::endl;
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

//new functions for Assignment 5

//template
template<typename T>
void MyVector<T>::deleteElement(int index) {
    //you cannot delete an element outside the vector's size or an element with a negative index
    if (index < 0 || index > vectorSize) {
        std::cout << "You cannot delete an element that does not exist!!!" << std::endl;
        return;
    }

    //take out the element to be deleted
    T temp = elements[index];

    //shift everything after it to the left once
    for (int i = index; i < vectorSize - 1; i++) {
        elements[i] = elements[i + 1]; 
    }

    //put the temp element at the end of the vector
    elements[vectorSize - 1] = temp;

    //delete the last element
    pop_back();

    //do effective memory management
    if (vectorSize <= 0.5 * vectorCapacity) {
        //dynamically allocate new memory
        T* temp = elements;
        vectorCapacity = vectorSize + 10;

        //create new elements memory
        elements = new T[vectorCapacity];

        //copy all the elements
        for (int i = 0; i < vectorSize; i++) {
            elements[i] = temp[i];
        }
        
        //delete the temp memory
        delete [] temp;
        
    }
}

//template
template<typename T>
void MyVector<T>::removeDuplicate() {
    //for every item in elements
    for (int i = 0; i < vectorSize; i++) {
        int j = i;
        //start from the item after i and compare them
        while (j < vectorSize - 1) {
            j++;
            //if a duplicate is found...
            if (elements[i] == elements[j]) {
                //delete the duplicate
                deleteElement(j);
            }
        }
    }
}

//template
template<typename T>
void MyVector<T>::sort() {
    //set element i as the default min
    for (int i = 0; i < vectorSize - 1; i++) {
        //begin sorting the vector
        for (int j = i + 1; j < vectorSize; j++) {
            //update the min when necessary
            T min = elements[i];
            
            if (elements[j] < elements[i]) {               
                //replace the original value with the smaller number
                elements[i] = elements[j];
                //replace the smaller value with the original number
                elements[j] = min;
            }
        }
    }
}