#include <iostream>

//don't turn this in or alter it
//it's just a reference for the problem

class GeometricObject 
{ 
public: 
    GeometricObject() { 
        color = "white"; 
        filled = false; 
    } 
    GeometricObject(const std::string& color, bool filled) { 
        this->color = color; 
        this->filled = filled; 
    } 
    std::string getColor() const { 
        return color;   
    } 
    bool isFilled() const { 
        return filled; 
    } 
 
private: 
    std::string color; 
    bool filled; 
}; 