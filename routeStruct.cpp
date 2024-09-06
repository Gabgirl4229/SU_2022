#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

//calculate length
int computeDistance(const std::string& source, const std::string& destination) {
    return rand() % 3000 + 50;
}

//structure
struct Route {
    std::string source;
    std::string destination;
    int length;
};

int main() {
    srand(time(0));
    
    //object
    Route summerTrip;
    summerTrip.source = "Lakeland";
    summerTrip.destination = "Disney World"; //Disney Land SUCKS

    //get length
    summerTrip.length = computeDistance(summerTrip.source, summerTrip.destination);

    //results
    std::cout << "{ " << summerTrip.source << " } => { " << summerTrip.destination << " }" << std::endl;
    std::cout << "Length: " << summerTrip.length;
    return 0;
}