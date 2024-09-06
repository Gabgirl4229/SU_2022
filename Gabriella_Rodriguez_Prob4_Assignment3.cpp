#include <iostream>

//Stock class
class Stock {
private:
    //data fields
    std::string symbol;
    std::string name;
    double previousClosingPrice;
    double currentPrice;

public:
    //get functions (accessors) for all data fields
    std::string getSymbol() {
        return symbol;
    }

    std::string getName() {
        return name;
    }

    double getPreviousClosingPrice() {
        return previousClosingPrice;
    }

    double getCurrentPrice() {
        return currentPrice;
    }

    //set functions (mutators) for the doubles
    void setPreviousClosingPrice(const double& price) {
        previousClosingPrice = price;
    }

    void setCurrentPrice(const double& price) {
        currentPrice = price;
    }

    //returns percentage changed from previous to now
    double getChangePercent() {
        //??? okay, I played around with the sample and I think I'm supposed to divide 27.6 by 27.5 and then subtract one - very strange
        return currentPrice/previousClosingPrice - 1;
    }

    //user-defined constructor (with symbol and name)
    Stock (const std::string& newSymbol, const std::string& newName) {
        symbol = newSymbol;
        name = newName;
    }
};

int main() {
    //create the Microsoft object
    Stock company("MSFT", "Microsoft Corporation");

    //set previous and current price
    company.setPreviousClosingPrice(27.5);
    company.setCurrentPrice(27.6);

    //display object properties
    std::cout << "Company: " << company.getName() << " (" << company.getSymbol() << ")" << std::endl; //name and symbol
    std::cout << "Previous Closing Price: " << company.getPreviousClosingPrice() << std::endl; //previous price
    std::cout << "Current Price: " << company.getCurrentPrice() << std::endl; //current price
    std::cout << "Percentage Change: " << company.getChangePercent() << std::endl;
    
    return 0;
}