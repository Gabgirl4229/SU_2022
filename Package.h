#include <iostream>

#ifndef PACKAGE_H
#define PACKAGE_H

class Package {
protected:
    //data fields
    std::string name, address, city, state;
    int zipCode;
    double weightOz, costPerOz;

public:
    //static data field
    static int id;

    //user-def constructor
    Package(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double weight, double cost);

    //mutators
    void setWeight(double weight);
    void setCostPerOunce(double cost);

    //class methods
    virtual double calculateCost() const;
    virtual void printPackageInfo() const;
};

#endif