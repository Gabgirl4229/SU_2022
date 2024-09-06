#include <iostream>

//done iteratively
/*
void hackPass() {
    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = 'A'; j <= 'Z'; j++) {
            std::cout << i << j << "\t";
        }
        std::cout << std::endl;
    }
}
*/

//helper funciton
void hackPass(std::string& pass, int nLetters, int index) {
    static long nCombinations = 0;
    //base case
    if (index >= nLetters) {
        std::cout << pass << '\t' << nCombinations++ << std::endl;
        return;
    } else {
    //recursive case
        pass.push_back('A');
        while (pass.at(index) <= 'Z') {
            //base case - prints the combination
            hackPass(pass, nLetters, index + 1);
            //increases the second number
            pass.at(index)++;
        }
    }
    
}

//done recursively
void hackPass(int nLetters) {
    std::string s;
    //helper function
    hackPass(s, nLetters, nLetters - 1);
}

int main() {
    hackPass(1);
    return 0;
}