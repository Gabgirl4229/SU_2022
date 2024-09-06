#include <iostream>
#include <iomanip>

int main() {
    //creates variables
    int num(0); 
    
    //asks user to enter integer from 1 to 9
    std::cout << "Please enter an integer from 1 to 15: \t";
    std::cin >> num;

    //determine full width of the bottom row
    int totalSpace;
    
    if (num > 9) {
        totalSpace = 27 + (num - 9) * 4;
    } else {
        totalSpace = num * 3;
    }
    
    
    //for each row
    int i;
    for (i = 1; i <= num; i++) {
        
        //print space before numbers
        int space;
        
        if (i > 9) {
            space = totalSpace - (27 + (i - 9) * 4);
        } else {
            space = totalSpace - (i * 3);
        }

        for (int j = 0; j < space; j++) {
            std::cout << " ";
        }
        
        //print from row number to 2
        for (int x = i; x > 1; x--) {
            if (x <= 9) {
                std::cout << std::left << std::setw(3) << x;
            } else {
                std::cout << std::left << std::setw(4) << x;
            }
        }
        //print from 1 to row number
        for (int y = 1; y <= i; y++) {
            if (y <= 9) {
                std::cout << std::left << std::setw(3) << y;
            } else {
                std::cout << std::left << std::setw(4) << y;
            }
        }

        //goes to next line at the end of each row
        std::cout << std::endl;
    }

    return 0;
}