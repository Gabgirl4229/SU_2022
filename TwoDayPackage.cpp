#include <iostream>
#include <iomanip>
#include "TwoDayPackage.h"

//user-def constructor
TwoDayPackage::TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee) : Package(name, address, city, state, ZIP, w, cost) {
    this->flatFee = fee;
}

//mutator
void TwoDayPackage::setFlatFee(const double& fee) {
    this->flatFee = fee;
}

//class methods
double TwoDayPackage::calculateCost() const {
    return costPerOz * weightOz + flatFee;
}

void TwoDayPackage::printPackageInfo() const {
    //change static
    id = 2;
    
    std::string line(20, '-');
    std::cout << line << std::endl;
    std::cout << "Two-Day Package" << std::endl << std::endl;
    std::cout << "ID: " << id << std::endl << std::endl;
    std::cout << name << std::endl << address << std::endl << city << ", " << state << " " << zipCode << std::endl << std::endl;
    std::cout << "Cost: $" << std::fixed << std::setprecision(2) << calculateCost() << std::endl;
    std::cout << line << std::endl; 
}