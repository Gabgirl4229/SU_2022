#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

//initialize static
int Package::id = 0;

int main() {
    //create Package object
    Package p1("John Smith", "1020 Orange St.", "Lakeland", "FL", 33111, 10.5, 0.4);
    //create TwoDayPackage object
    TwoDayPackage p2("Bob George", "21 Pine Rd.", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);
    //create OvernightPackage object
    OvernightPackage p3("Don Kelly", "9 Main St.", "Denver", "CO", 77777, 12.25, 0.7, 0.25); //not a typo on the ZIP code, I just don't like repeating sixes

    //print package info for all objects
    p1.printPackageInfo();
    std::cout << std::endl;
    p2.printPackageInfo();
    std::cout << std::endl;
    p3.printPackageInfo();

    return 0;
}