#include <iostream>
#include <cstring>
#include <ctime>

//calculate length
int computeDistance(const std::string& source, const std::string& destination) {
    return rand() % 3000 + 50;
}

//class (NOT structure)
class Route {

//not accessible by the program
private:
    //defined terms (attributes)
    std::string source;
    std::string destination;
    int length;

    //uses the length function above
    void updateLength() {
        length = computeDistance(source, destination);
    }

//accessible by the program
public:
   //get functions (accessor)
    std::string getSource() { 
        return source; 
    }
    std::string getDestination() {
        return destination; 
    }
    int getLength() { 
        return length; 
    }
    //set functions (mutator)
    void setSource(const std::string& newSource) {
        source = newSource;
        updateLength();
    }
    void setDestination(const std::string& newDestination) {
        destination = newDestination;
        updateLength();
    }

    //class method
    void printInfo() {
        std::cout << "{ " << getSource() << " } => { " << getDestination() << " }" << std::endl;
        std::cout << "Length: " << getLength() << std::endl;
    }
};

int main() {
    srand(time(0));
    
    //object
    Route summerTrip;

    //set source and destination (length is set automatically)
    summerTrip.setSource("Lakeland");
    summerTrip.setDestination("Disney World"); //Disney Land SUCKS

    //results
    summerTrip.printInfo();
    
    return 0;
}