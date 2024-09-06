#include <iostream>

//function prototype
int evenCount(unsigned int value);

int main() {
    
    //creates variables
    unsigned int input;
    
    //prompts the user to enter an integer
    std::cout << "Please enter an integer number:    ";
    std::cin >> input;
    
    //uses evenCount to determine amount of even numbers
    std::cout << "There are " << evenCount(input) << " even digits in this number" << std::endl;
    return 0;
}

int evenCount(unsigned int value) {
    
    //creates variable for counting even digits
    int counter = 0;

    //adds 1 to counter if the last digit is even
    if ((value%10)%2 == 0) {
        counter++;
    }
    
    //base case
    if (value/10 == 0) {
        return counter;
    } 
    //recursive case 
    else {
        //removes the last digit and repeats itself
        return counter + evenCount(value/10);
    } 
}