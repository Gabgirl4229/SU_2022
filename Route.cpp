#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Route.h"

//calculate length
int computeRouteLength(std::string source, std::string destination) {
    return rand()%1000 + 50;
}

//sets length to zero if empty
void Route::updateLength() {
    length = (source == "Empty" || destination == "Empty") ? 0 : 
computeRouteLength(source, destination);
}

//get functions
std::string Route::getSource() { 
    return source; 
}
std::string Route::getDestination() {
    return destination; 
}
int Route::getLength() const { 
    return length; 
}

//set functions
void Route::setSource(const std::string& newSource) {
    source = newSource;
    updateLength();
}
void Route::setDestination(const std::string& newDestination) {
    destination = newDestination;
    updateLength();
}

//class method
void Route::printInfo() {
    std::cout << "{ " << getSource() << " => " << getDestination() << " }" << std::endl;
    std::cout << "Length: " << getLength() << " miles" << std::endl;
}

//no-argument constructor
Route::Route() {
    setSource("Empty");
    setDestination("Empty");
}

//user-defined constructor
Route::Route(std::string newSource, std::string newDestination) {
    setSource(newSource);
    setDestination(newDestination);
}