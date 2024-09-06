#include <iostream>
#include "Rectangle2D.h"

int main() {
    //creates the three rectangles
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4); 

    //creates "answer variable"
    std::string answer;
    
    //displays results
    answer = (r1.contains(3, 3)) ? "YES" : "NO";
    std::cout << "Does r1 contain (3, 3)?  ~" << answer << std::endl; //contains (3, 3)
    answer = (r1.contains(r2)) ? "YES" : "NO";
    std::cout << "Does r1 contain r2?  ~" << answer << std::endl; //contains r2
    answer = (r1.overlaps(r3)) ? "YES" : "NO";
    std::cout << "Does r1 overlap with r3?  ~" << answer << std::endl; //overlaps r3

    return 0;
}