#include <iostream>
#include "MyVector.h"
#include "MyVector.cpp"

int main() {
    std::string s1("I like OOP!!!");
    std::string s2("I do not like OOP!!!");

    MyVector<std::string> mv;
    MyVector<double> mvD;

    mvD.push_back(12.3);
    mvD.push_back(12.4);
    mvD.push_back(12.5);

    mvD.print();

    mv.push_back(s1);
    mv.push_back(s2);
    
    mv.pop_back();

    mv.print();
    
    return 0;
}