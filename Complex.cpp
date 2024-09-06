#include <iostream>
#include "Complex.h"

//functions outside of the class
Complex additionTwo(Complex& comp1, Complex& comp2) {
    //creates a new object
    Complex compAddTwo;

    //adds the real and imaginary components
    compAddTwo.setReal(comp1.getReal() + comp2.getReal());
    compAddTwo.setImg(comp1.getImg() + comp2.getImg());

    //returns the new item
    return compAddTwo;
}

Complex additionArray(Complex complexArray[], int i) {
    //creates a new object
    Complex compAddArray;

    //uses a loop to add the components
    for (int n = 0; n < i; n++) {
        compAddArray.setReal(compAddArray.getReal() + complexArray[n].getReal());
        compAddArray.setImg(compAddArray.getImg() + complexArray[n].getImg());
    }

    //returns the new item
    return compAddArray;
}

//accessors
double Complex::getReal() const {
    return real;
}

double Complex::getImg() const {
    return img;
}

//mutators
void Complex::setReal(const double& newReal) {
    real = newReal;
}

void Complex::setImg(const double& newImg) {
    img = newImg;
}

//no-argument constructor with defaults 0.0
Complex::Complex() {
    setReal(0.0);
    setImg(0.0);
}

//user-defined constructor
Complex::Complex(double newReal, double newImg) {
    setReal(newReal);
    setImg(newImg);
}

//class methods
void Complex::printComplex() {
    std::cout << real << " + " << img << "i" << std::endl;
}

Complex Complex::addition(Complex& comp) {
    //creates a new object
    Complex compAdd;

    //adds the real and imaginary components
    compAdd.real = real + comp.real;
    compAdd.img = img + comp.img;

    //returns the new item
    return compAdd;
}