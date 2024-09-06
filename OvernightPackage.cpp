#include <iostream>
#include <iomanip>
#include "OvernightPackage.h"

//user-def constructor
OvernightPackage::OvernightPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee) : Package(name, address, city, state, ZIP, w, cost) {
    this->overnightFeePerOz = fee;
}

//mutator
void OvernightPackage::setOvernightFeePerOunce(const double& fee) {
    this->overnightFeePerOz = fee;
}

//class methods
double OvernightPackage::calculateCost() const {
    return costPerOz * weightOz + overnightFeePerOz * weightOz;
}
    
void OvernightPackage::printPackageInfo() const {
    //change static
    id = 3;
    
    std::string line(20, '-');
    std::cout << line << std::endl;
    std::cout << "Overnight Package" << std::endl << std::endl;
    std::cout << "ID: " << id << std::endl << std::endl;
    std::cout << name << std::endl << address << std::endl << city << ", " << state << " " << zipCode << std::endl << std::endl;
    std::cout << "Cost: $" << std::fixed << std::setprecision(2) << calculateCost() << std::endl;
    std::cout << line << std::endl; 
}