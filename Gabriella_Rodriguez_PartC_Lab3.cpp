#include <iostream>
#include <iomanip>
#include <cmath>

double series (int n);

int main() {

    //variables

    //prints labels
    std::cout << std::left;
    std::cout << std::setw(6) << "n";
    std::cout << std::right;
    std::cout << std::setw(12) << "Result" << std::endl;

    //prints n and results (from 1 to 9)
    for (int i = 1; i <= 9; i++) {
        std::cout << std::left;
        std::cout << "n = ";
        std::cout << std::setw(8) << i;

        //results are from here
        std::cout << std::setprecision(4) << series(i) << std::endl;
    }

    //same thing (but from 10 to 15)
    for (int i = 10; i <= 15; i++) {
        std::cout << std::left;
        std::cout << "n = ";
        std::cout << std::setw(8) << i;

        std::cout << std::setprecision(4) << series(i) << std::endl;
    }
    
}

double series (int n) {

    double fn;

    //base case
    if (n == 1) {
        return 1;
    //recursive case
    } else {
        fn = 1/pow(n, 2) + series(n - 1);
    }

    //for some reason, trailing zeroes only show up if I put the statement here ¯\_(ツ)_/¯
    std::cout << std::showpoint;
    return fn;
}