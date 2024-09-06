#include <iostream>
#include "Package.h"

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

class OvernightPackage : public Package {
private:
    //data field
    double overnightFeePerOz;

public:
    //user-def constructor
    OvernightPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee);

    //mutator
    void setOvernightFeePerOunce(const double& fee);

    //class methods
    double calculateCost() const override;
    void printPackageInfo() const override;
    
};

#endif