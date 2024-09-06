#include <iostream>
#include "Package.h"

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

class TwoDayPackage : public Package {
private:
    double flatFee;

public:
    //user-def constructor
    TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee);

    //mutator
    void setFlatFee(const double& fee);

    //class methods
    double calculateCost() const override;
    void printPackageInfo() const override;
};

#endif