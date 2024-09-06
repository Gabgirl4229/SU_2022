#include <iostream>

int main() {
    
    //creates variables for user-input and total
    int num, sum;

    //asks user to input a number
    std::cout << "Enter a number from 0 to 1000000: " << std::endl;
    std::cin >> num;

    //in case some idiot decides to put in a number outside the range
    if (num < 0 || num > 1000000) {
        std::cout << "You entered a number outside the range." << std::endl;
        return 0;
    }
    
    //adds each digit in the number to the sum
    sum = 0;
    
    while (num != 0) {
        sum += num%10;
        num /= 10;
    }

    std::cout << "Sum: " << sum << std::endl;

    //bonus: if the sum is two digits or more, continue until there is only one digit
    while (sum > 9) {
        num = sum;
        sum = 0;

        while (num != 0) {
            sum += num%10;
            num /=10;
        }
    }   

    std::cout << "Bonus Output: " << sum << std::endl;

    return 0;
}