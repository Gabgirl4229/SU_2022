#ifndef TRIP_H
#define TRIP_H
#include <vector>
#include "Route.h"

class Trip {
private:
    int tripLength;
    std::vector<Route> tripRoute;

public:
    //static data field
    static int numberOfTrips;

    //get functions
    int getTripLength() const;
    std::vector<Route> getTripRoute() const;

    //adds a route to the vector
    void addRoute(const Route& route);

    //no-argument constructor
    Trip();
};

#endif