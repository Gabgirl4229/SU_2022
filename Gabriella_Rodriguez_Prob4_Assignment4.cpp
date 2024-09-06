#include <iostream>

class Pointers {
private:
    //private data fields
    int* pInt;
    double* pDouble;
    
public:
    //user-defined constructor
    Pointers (int* pInt, double* pDouble) {
        setpInt(pInt);
        setpDouble(pDouble);
    }

    //accessors
    int* const getpIntValue() {
        return pInt;
    }

    int const getpIntData() {
        return *pInt;
    }

    double* const getpDoubleValue() {
        return pDouble;
    }

    double const getpDoubleData() {
        return *pDouble;
    }

    //mutators
    void setpInt(int* newpInt) {
        pInt = newpInt;
    }

    void setpDouble(double* newpDouble) {
        pDouble = newpDouble;
    }

    void setpInt(int number) {
        *pInt = number;
    }

    void setpDouble(int number) {
        *pDouble = number;
    }

    //class method
    void const printDoubles() {
        for (int i = 0; i < *pInt; i++) {
            std::cout << *pDouble << "  ";
        }
        std::cout << std::endl;
    }
    
};

int main() {
    //creates an integer i and initializes it to 10
    int i = 10;
    //creates a double variable d and initializes it to 2.2
    double d = 2.2;

    //create a Pointers object named pointers and give it the addresses of i and d
    Pointers pointers(&i, &d);

    //call printDoubles
    pointers.printDoubles();

    //change integer value to 5
    pointers.setpInt(5);

    //call printDoubles again
    pointers.printDoubles();

    //create a pointer variable pD and give it the address of d
    double* pD = &d;

    //use pD to change the value of d to 77.77
    *pD = 77.77;

    //changes the value of pDouble to pD's value using mutator
    pointers.setpDouble(pD);

    //calls printDoubles one more time
    pointers.printDoubles();
    
    return 0;
}