//this is called a preprocessor directive
#include <iostream> 

//using namespace std means you don't need the std lines in main
using namespace std;

//you can also use namespace specifically for cout and endl
using std::cout;
using std::endl;

//code that was done in class
int main() {
    //this is how you would do it in C
    //printf("%s", "Hello COP3337!\n"); //\n is an escape sequence

    //this is how you would do it without any std namespaces
    std::cout << "Hello COP3337!\n" << std::endl << "Ready to code?";

    //this is how you would do it with all the "using" stuff
    //cout << "HEllo COP3337!\n" << endl << "Ready to code?";
    
    // cout - console output, an object of class ostream
    // << - stream insertion operator
    // endl - end line
    //std - standard namespace
    //:: - scope resolution operator

    return 0;
}


/*
//code used for RunYourFirstProgram Assignment
int main() {
//using namespace std;
  std::cout << "Hello COP3337!" << std::endl;
  // \n - escape sequence
  //std - standard namespace
  //:: scope resolution operator
  // << stream insertion operator
  // cout is an object of class ostream
  // endl is a manipulator
  cout << "I want to study C++!" << endl;
  cout << "The answer is " << (10 - 5 / 3.54) * 3 << endl;
  return 0;
}
*/