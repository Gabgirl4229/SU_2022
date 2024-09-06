#include <iostream>
#include <vector>

std::string my_join(std::vector<std::string> param_1, std::string param_2); 

int main() {
    //creates vector str1 and string str2
    std::vector<std::string> str1;
    std::string str2;

    //adds in the strings for each element in vector str1
    str1.push_back("abc");
    str1.push_back("def");
    str1.push_back("gh");
    str1.push_back("!");

    //changes value of str2 to "-"
    str2 = "-";

    //prints input using "-"
    std::cout << "Input: [\"" << str1.at(0) << "\", \"" << str1.at(1) << "\", \"" << str1.at(2) << "\", \"" << str1.at(3) << "\"] && \"" << str2 << "\"" << std::endl; 

    //prints output using "-"
    std::cout << "Output: \"" << my_join(str1, str2) << "\"\n" << std::endl;
    
    //changes value of str2 to "blah"
    str2 = "blah";

    //prints input using "blah"
    std::cout << "Input: [\"" << str1.at(0) << "\", \"" << str1.at(1) << "\", \"" << str1.at(2) << "\", \"" << str1.at(3) << "]\" && \"" << str2 << "\"" << std::endl; 

    //prints output using "blah"
    std::cout << "Output: \"" << my_join(str1, str2) << "\"\n" << std::endl;
    
    //changes value of str2 to ""
    str2 = "";

    //prints input using ""
    std::cout << "Input: [\"" << str1.at(0) << "\", \"" << str1.at(1) << "\", \"" << str1.at(2) << "\", \"" << str1.at(3) << "\"] && \"" << str2 << "\"" << std::endl; 

    //prints output using ""
    std::cout << "Output: \"" << my_join(str1, str2) << "\"\n" << std::endl;
    
}

std::string my_join(std::vector<std::string> param_1, std::string param_2) {
    //just adds all the pieces together as one string
    return param_1.at(0) + param_2 + param_1.at(1) + param_2 + param_1.at(2) + param_2 + param_1.at(3);
}