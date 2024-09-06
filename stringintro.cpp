#include <iostream>
#include <string>

using std::string;

int main() {
/*
    //initialize the string
    string s1("first string");

    //initialize by the other string
    string s2(s1);

    //initialize by number and character
    string s3(100, '$');

    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;

    std::cout << "The length of s2 is " << s2.length() << "." << std::endl;

    //scan a string
    //std::cin >> s1; bad way to do it; stops at whitespace
    //getline(input, string, delimiter);
    getline(std::cin, s1, '\n');
    std::cout << s1 << std::endl;
*/

    //Activity: scan three strings and find the minimum string between them
    string string1, string2, string3;

    std::cout << "Please enter three strings (separate by pressing Enter): " << std::endl;
    
    getline(std::cin, string1, '\n');
    getline(std::cin, string2, '\n');
    getline(std::cin, string3, '\n');
    
    string min = string1;

    //if they're all the same
    if (string1.length() == string2.length() && string2.length() == string3.length()) {
        std::cout << "All the strings have the same length." << std::endl;
    } 
    //if 1 and 2 are the smallest
    else if (string1.length() == string2.length()) {
        std::cout << "The minimums are \"" << string1 << "\" and \"" << string2 << ".\"" << std::endl;
    } 
    //if 2 and 3 are the smallest
    else if (string2.length() == string3.length()) {
        std::cout << "The minimums are \"" << string2 << "\" and \"" << string3 << ".\"" << std::endl;
    } 
    //if 1 and 3 are the smallest
    else if (string1.length() == string3.length()) {
        std::cout << "The minimums are \"" << string1 << "\" and \"" << string3 << ".\"" << std::endl;
    } else {
        //if 2 is smaller than 1 
        if (string2.length() < string1.length()) {
            min = string2;
            if (string3.length() < string2.length()) {
                min = string3;
            }
        }
        //if 3 is the smallest
        else if (string3.length() < string1.length()) {
            min = string3;
        }
        //nothing happens if 1 is the smallest
        
        std::cout << "The minimum string is \"" << min << ".\"" << std::endl;
    }
    

    return 0;
}