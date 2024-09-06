#include <iostream>
#include <string>

//will define Route.h for any file that calls it but doesn't have it yet
#ifndef ROUTE_H
#define ROUTE_H

//use struct for combinations of data types
//use class for functions and objects that are private or public
class Route {
private:
    //class data members (set defaults)
    std::string source = "empty";
    std::string destination = "empty";
    int length = 0;

    //class internal function
    void updateLength();

public:
    //no-argument constructor
    Route();
    //user-defined constructor
    Route(std::string newSource, std::string newDestination);

    //get functions (accessors)
    std::string getSource();
    std::string getDestination();
    int getLength() const;

    //set functions (mutators)
    void setSource(const std::string& newSource);
    void setDestination(const std::string& newDestination);

    //class method
    void printInfo();
};

#endif