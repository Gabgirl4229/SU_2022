#include <iostream>
#include "MyInteger.h"

//sets all static variables to zero
int MyInteger::numberOfObjects = 0;
int MyInteger::sumOfIntegers = 0;
double MyInteger::averageOfIntegers = 0.0;

//user-defined constructor
MyInteger::MyInteger(int newValue) {
    value = newValue;
    //increases number of objects by 1
    numberOfObjects++;
    //adds value to sum
    sumOfIntegers += value;
}

//accessor
const int MyInteger::getValue() {
    return value;
}

//constant class functions
const bool MyInteger::isEven() {
    return !(value%2);
}

const bool MyInteger::equals(int n) {
    return (value == n);
}

const bool MyInteger::equals(const MyInteger& integer) {
    return (value == integer.value);
}

//static class functions
bool MyInteger::isOdd(int n) {
    return (n%2);
}

double MyInteger::getAverageOfIntegers() {
    //to avoid division by zero error
    if (sumOfIntegers == 0 && numberOfObjects == 0) {
        return 0.0;
    } else {
        averageOfIntegers = (double)sumOfIntegers / numberOfObjects;
        return averageOfIntegers;
    }
}