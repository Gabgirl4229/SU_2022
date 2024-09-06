#include <iostream>
//required to use sqrt() function
#include <cmath>

int main() {

    //variable for the number
    int num;

    //asks user to enter a number
    std::cout << "Please enter a number:\t";
    std::cin >> num;
    std::cout << std::endl;

    //checks the sign of the number
    //if negative
    if (num < 0) {
        std::cout << "This program does not accept negative numbers." << std::endl;
    //if positive and less than or equal to 100
    } else if (num%4 == 0) {
        std::cout << "The number " << num << " is divisible by 4." << std::endl;
        std::cout << "Quotient: " << num/4 << std::endl;
    } else if (num%4 != 0 && num <= 100) {
        std::cout << "The number " << num << " is not divisible by 4." << std::endl;
        std::cout << "Quotient: " << num/4 << "\tRemainder: " << num%4 << std::endl;
    //if positive and greater than 100
    } else if (num >= 100) {
        std::cout << "The number " << num << " is greater than 100." << std::endl;
        std::cout << "Square root: " << sqrt(num) << std::endl;
    }

    return 0;
}