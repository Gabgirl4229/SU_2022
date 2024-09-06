#include <iostream>
#include "MySet.h"

//user-defined constructor
MySet::MySet(unsigned int range) {
    size = 0;
    this->range = range;
    set = new bool[range + 1];
    for (int i = 0; i <= range; i++) {
        set[i] = 0;
    }
}

//copy constructor
MySet::MySet(const MySet& object) {
    size = object.size;
    range = object.range;
    set = new bool[range + 1];
    
    for (int i = 0; i <= range; i++) {
        set[i] = object.set[i];
    }
}

//destructor
MySet::~MySet() {
    delete [] set;
}

//class methoda
void MySet::insertElement(int k) {
    //prints error message when out of range
    if (k < 0 || k > range) {
        std::cout << "Warning! Cannot insert \"" << k << "\", it is out of range!" << std::endl;
        return;
    }

    //sets the bool for k to true
    set[k] = true;
}
    
void MySet::deleteElement(int m) {
    //prints error message when out of range
    if (m < 0 || m > range) {
        std::cout << "Warning! Cannot delete \"" << m << "\", it is out of range!" << std::endl;
        return;
    }

    //sets the bool for k to true
    set[m] = false;
}

void MySet::printSet() const {
    bool isEmpty = true;
    
    //opening curly brace
    std::cout << "{ ";

    //print set
    for (int i = 0; i <= range; i++) {
        if (set[i] == true) {
            isEmpty = false;
            if (i == range) {
                std::cout << i << " ";
            } else {
                std::cout << i << ", ";
            }
            
        }
    }

    //dashes for an empty set
    if (isEmpty == true) {
        std::cout << "--- ";
    }

    //closing curly brace
    std::cout << "}" << std::endl;
    
}
    
bool MySet::isEqualTo(const MySet& object) const {
    //compares items in both sets
    for (int i = 0; i <= range; i++) {
        if (set[i] != object.set[i]) {
            //returns false if the items don't match
            return false;
        }
    }
    //returns true if every element matches
    return true;
}