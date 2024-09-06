#include <iostream>

//so I don't need to put std every time
using std::cout;
using std::endl;

int main() {

    //seconds of studying
    int x = 0;
    
    //name
    cout << "First Name: " << "Gabriella" << endl;
    cout << "Last Name: " << "Rodriguez" << endl;

    //calculations for seconds studying - 13 weeks total
    //2 lectures a week (1 hr 15 mins each) minus 2 lectures (holidays)
    x += (2 * 13 - 2) * 75 * 60;
    //2 midterms (1 hr each)
    x += 2 * 60 * 60;
    //1 final (2 hrs)
    x += 120 * 60;
    //self-study (2 hrs 30 mins each)
    x += 13 * 150 * 60; 
    
    //seconds studying
    cout << "I am supposed to spend " << x << " seconds studying C++ programming." << endl;

    return 0;
    
}