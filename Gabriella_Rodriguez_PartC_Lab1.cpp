#include <iostream>

int main() {
    //variables
    float distance, efficiency, price, type, speed, consumption;

    //initialize variables (to two decimal places)
    distance = efficiency = price = type = speed = consumption = 0.00;
    
    //prompt user
    std::cout << "Please enter the following amounts to calculate cost." << std::endl;
    //distance (miles)
    std::cout << "Distance (in miles): ";
    std::cin >> distance;
    std::cout << std::endl;
    //fuel efficiency (miles per gallon)
    std::cout << "Fuel Efficiency (in miles per gallon): ";
    std::cin >> efficiency;
    std::cout << std::endl;
    //price (dollars per gallon)
    std::cout << "Price (in dollars per gallon): ";
    std::cin >> price;
    std::cout << std::endl;

    //bonus - select car type
    std::cout << "Please select one of the following cars by entering the corresponding number:" << std::endl;
    std::cout << "1) Sedan" << std::endl;
    std::cout << "2) SUV" << std::endl;
    std::cout << "3) Truck" << std::endl;
    std::cin >> type;

    //bonus - average speed (miles per hour)
    std::cout << "Please enter the car's average speed (in miles per hour): ";
    std::cin >> speed;
    std::cout << std::endl;
    
    //change efficiency based on car type
    if (type == 2) {
        efficiency *= 1.2;
    } else if (type == 3) {
        efficiency *= 1.37;
    }

    //calculate gas consumption (gallons)
    consumption = distance / efficiency;

    //change gas consumption based on speed
    if (speed <= 55) {
        //decrease by 10%
        consumption -= (consumption/10);
    } else if (speed > 55 && speed <= 75) {
        //increase by 15%
        consumption += (consumption/5 * 3);
    } else if (speed > 75) {
        //increase by 25%
        consumption += (consumption/4);
    }
    
    //calculate total cost of trip
    price *= consumption;

    //display total cost of trip
    std::cout << "The total cost for this trip will be $" << price << std::endl;
}