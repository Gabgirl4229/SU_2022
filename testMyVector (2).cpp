#include <iostream>
#include <ctime>
#include <vector>
#include "MyVector.h"
#include "MyVector.cpp"

int main() {
    //allow RNG
    srand(time(0));
    
    //create an object
    MyVector<int> mvI;

    //give the object 20 elements
    for (int i = 0; i < 20; i++) {
        //the elements are randomized values from 0-20
        mvI.push_back(rand()%20);
        
    }

    //prints the contents
    std::cout << "The contents of the vector are: " << std::endl;
    mvI.print();
    std::cout << std::endl;

    //removes duplicates
    mvI.removeDuplicate();

    //prints again
    std::cout << "The contents of the vector (after removing duplicates) are: " << std::endl;
    mvI.print();
    std::cout << std::endl;

    //sorts vector
    mvI.sort();

    //prints one last time
    std::cout << "The contents of the vector (after sorting) are: " << std::endl;
    mvI.print();
    std::cout << std::endl;
    
    return 0;
}