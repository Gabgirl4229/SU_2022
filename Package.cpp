#include <iostream>
#include <iomanip>
#include "Package.h"

//user-def constructor
Package::Package(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost) {
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    this->zipCode = ZIP;
    this->weightOz = weight;
    this->costPerOz = cost;
}

//mutators
void Package::setWeight(double weight) {
    this->weightOz = weight;
}
    
void Package::setCostPerOunce(double cost) {
    this->costPerOz = cost;
}

//class methods
double Package::calculateCost() const {
    return costPerOz * weightOz;
}

void Package::printPackageInfo() const {
    //change static
    id = 1;
    
    std::string line(20, '-');
    std::cout << line << std::endl;
    std::cout << "Package" << std::endl << std::endl;
    std::cout << "ID: " << id << std::endl << std::endl;
    std::cout << name << std::endl << address << std::endl << city << ", " << state << " " << zipCode << std::endl << std::endl;
    std::cout << "Cost: $" << std::fixed << std::setprecision(2) << calculateCost() << std::endl;
    std::cout << line << std::endl;
}