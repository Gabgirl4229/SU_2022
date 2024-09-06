#include <iostream>

#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger {
private:
    //private data fields
    int value;
    static int numberOfObjects;
    static int sumOfIntegers;
    static double averageOfIntegers;

public:
    //user-defined constructor
    MyInteger(int newValue);

    //accessor
    const int getValue();

    //constant class functions
    const bool isEven();

    const bool equals(int n);
    const bool equals(const MyInteger& integer);

    //static class functions
    static bool isOdd(int n);

    static double getAverageOfIntegers();
};

#endif