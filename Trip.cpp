#include <iostream>
#include <vector>
#include "Trip.h"

//initialize the static variable (must be done outside the class)
int Trip::numberOfTrips = 0;

Trip::Trip() {
    tripLength = 0;
    //erases everything in the vector to empty it
    tripRoute.clear();
    //adds one to number of trips with each creation
    numberOfTrips++;
}

int Trip::getTripLength() const {
    return tripLength;
}

std::vector<Route> Trip:: getTripRoute() const {
    return tripRoute;
}

void Trip::addRoute(const Route& route) {
    tripRoute.push_back(route);
    tripLength += route.getLength();
}