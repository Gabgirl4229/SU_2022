#include <iostream>
//according to the homework, I should use these
#include <iomanip>
#include <cmath>

//include definition for pi
#define PI 3.14159

int main() {

    //creates variables for side length and area 
    float side = 0, area = 0;

    //asks user to input side length
    std::cout << "Please enter the side length for your hexagon:\t";
    std::cin >> side;

    //area formula: (6*(side^2))/(4*(tan(pi/6)))
    area = (6 * pow(side,2)) / (4 * tan(PI/6));

    //display area (rounded to two decimals)
    std::cout << "The area of your hexagon is " << std::setprecision(4) << area << "." << std::endl;

    return 0;
}