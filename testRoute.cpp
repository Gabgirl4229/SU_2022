#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Route.h"
#include "Trip.h"

bool isShortRoute(Route r);

void printTrip(const Trip& trip);

int main() {
    //allows randomization to occur
    srand(time(0));

/*
    //create object and set initial values at the same time
    Route route("New York", "Buffalo");
    route.printInfo();
    
    //change source and destination
    route.setSource("Lakeland");
    route.setDestination("Disney World"); //Disneyland SUCKS
    //print the information
    route.printInfo();
    
    //change the destination
    route.setDestination("Orlando");
    route.printInfo();

    //create a second route
    //Route newRoute;

    //create a third route (that is empty like newRoute)
    //Route newRoute2 = Route();

    //print length of route
    std::string ans = (isShortRoute(route)) ? "short" : "long";
    std::cout << "The route is: " << ans;
*/
    
    //create an object of class Route
    Trip theBestTripEver;

    //create Routes
    Route firstDay("Lakeland", "Sarasota");
    Route secondDay("Sarasota", "West Palm Beach");
    Route thirdDay("West Palm Beach", "Orlando");
    Route fourthDay("Orlando", "Lakeland");

    //add routes to the trip object
    theBestTripEver.addRoute(firstDay);
    theBestTripEver.addRoute(secondDay);
    theBestTripEver.addRoute(thirdDay);
    theBestTripEver.addRoute(fourthDay);

    //print trip information
    printTrip(theBestTripEver);
    
    return 0;
}

bool isShortRoute(Route r) {
    return (r.getLength() < 500);
}

void printTrip(const Trip& trip) {
    std::vector<Route> tripRoute = trip.getTripRoute();

    for(Route r: tripRoute) {
        r.printInfo();
    }

    std::cout << "The length of the trip is: " << trip.getTripLength() << " miles" << std::endl;
    std::cout << "Total Trips: " << Trip::numberOfTrips << std::endl;
}