#include <iostream>

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    //data fields
    double real, img;

public:
    //accessors
    double getReal() const;
    double getImg() const;

    //mutators
    void setReal(const double& newReal);
    void setImg(const double& newImg);

    //no-argument constructor with defaults 0.0
    Complex();

    //user-defined constructor
    Complex(double newReal, double newImg);

    //class methods
    void printComplex(); //prints the number in a + bi form
    Complex addition(Complex& comp); //adds the inputted number to the number that calls it
    
};

//functions outside of the class
Complex additionTwo(Complex& comp1, Complex& comp2);
Complex additionArray(Complex complexArray[], int i);

#endif