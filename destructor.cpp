#include <iostream>

class MyClass {
private:
    
public:
    static int numberOfObjects;

    int* data;

    MyClass(int size) {
        std::cout << "The constructor was called." << std::endl;
        data = new int[size];
        numberOfObjects++;
    }

    //destructor (for deleting objects)
    ~MyClass() {
        std::cout << "The destructor was called." << std::endl;
        delete[] data;
        numberOfObjects--;
    }
};

//initialize static data member
int MyClass::numberOfObjects = 0;

void testFunction() {
    std::cout << "The function was called." << std::endl;
    //this object will be deleted as soon as the function ends
    MyClass temp(10);
    std::cout << "The function ended." << std::endl;
}

int main() {
    std::cout << "The number of objects is " << MyClass::numberOfObjects << std::endl;
    for (int i = 0; i < 10000; i++) {
        MyClass class1(999999999);
    }
    testFunction();
    //displays two objects even though technically it's only one
    std::cout << "The number of objects is " << MyClass::numberOfObjects << std::endl;
    
    return 0;
}