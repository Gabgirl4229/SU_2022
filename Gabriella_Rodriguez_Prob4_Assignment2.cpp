#include <iostream>
#include <ctime>

int main() {
    //initialize randomness
    srand(time(0));
    
    //creates variables
    int dice1 = rand()%6 + 1;
    int dice2 = rand()%6 + 1;
    int sum = dice1 + dice2;
    int point;

    //first roll
    std::cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << std::endl;

    if (sum == 2 || sum == 3 || sum == 12) {
        std::cout << "Craps! You lose" << std::endl;
    } else if (sum == 7 || sum == 11) {
        std::cout << "A natural! You win" << std::endl;
    } 
    //if something else is rolled the first time
    else {
        //sets new point as sum
        point = sum;
        std::cout << "The point is now " << point << std::endl;

        //loops until player rolls 7 or point
        do {
            dice1 = rand()%6 + 1;
            dice2 = rand()%6 + 1;
            sum = dice1 + dice2;
            
            std::cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << std::endl;
        } while (sum != 7 && sum != point);

        //win/lose results
        if (sum == 7) {
            std::cout << "You sevened out! You lose" << std::endl;
        } else if (sum == point) {
            std::cout << "You landed the point! You win" << std::endl;
        }
            
    }
}