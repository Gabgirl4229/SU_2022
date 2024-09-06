#include <iostream>

class A {
private:
    std::string msg2 = "Message Two!";

protected:
    std::string msg3 = "Message Three!";

public:
    std::string msg1 = "Message One!";
};

class B : public A {
private:

public:
    void f() {
        std::cout << msg1 << std::endl; //public is fine
        //std::cout << msg2 << std::endl; //private is not fine
        std::cout << msg3 << std::endl; //protected is fine
    }
};

int main() {
    B b;

    std::cout << b.msg1; //public, okay
    //std::cout << b.msg2; //private, not okay
    std::cout << b.msg3; //protected, not okay

    std::cout << std::endl << std::endl;
    b.f();

    return 0;
}