#include <iostream>

//so I can just type string whenever I'm using it
using std::string;

int main () {

    //creates an empty/default string
    string str = "test string";

    //asks user to input a string
    std::cout << "Enter a string: " << std::endl;
    //by using getline, the scan will stop only at \n
    getline(std::cin, str, '\n');

    //prints the string back (but only the odd-numbered indexes)  
    for (int i = 1; i < str.length(); i += 2) {
        std::cout << str[i];
    }

    return 0;
}