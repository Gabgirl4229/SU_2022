#include <iostream>

class Account {
private:
    //private variables
    int id;
    double balance;
    double annualInterestRate;

public:
    //get functions (accessors)
    int getID() {
        return id;
    }

    double getBalance() {
        return balance;
    }

    //set functions (mutators)
    void setID(int newid) {
        if (newid < 0) {
            id = 0;
        } else {
            id = newid;
        }
        return;
    }

    void setBalance(double newbalance) {
        if (newbalance < 0) {
            balance = 0;
        } else {
            balance = newbalance;
        }
        return;
    }

    void setInterestRate(double newannualInterestRate) {
        if (newannualInterestRate < 0) {
            annualInterestRate = 0;
        } else {
            annualInterestRate = newannualInterestRate;
        }
        return;
    }

    //account constructor
    Account(int newid, double newbalance, double newannualInterestRate) {
        setID(newid);
        setBalance(newbalance);
        setInterestRate(newannualInterestRate);
    }

    //monthly interest calculator
    double getMonthlyInterest() {
        return (balance*4.5/100)/12;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            //cannot withdraw more than the balance
            std::cout << "Not enough money" << std::endl;
        } else {
            balance -= amount;
        }
    }

    void deposit(double amount) {
        balance += amount;
    }
};

int main() {
    //create an Account object
    Account savings(-1, 20000, 4.5);

    //print ID and initial balance
    std::cout << "ID: " << savings.getID() << std::endl;
    std::cout << "Balance: $" << savings.getBalance() << std::endl;
    
    //withdraw $25,000 from savings
    savings.withdraw(25000);
    
    //deposit $3,000 into savings
    savings.deposit(3000);

    //print balance after deposit and monthly interest
    std::cout << "Balance: $" << savings.getBalance() << std::endl;
    std::cout << "Monthly Interest: $" << savings.getMonthlyInterest() << std::endl;
    
    return 0;
}