#include <iostream>

class Human {
public:
    std::string name;

    //no-arg constructor
    Human() {
        std::cout << "Human constructor (no-arg) was called." << std::endl;
        name = "John Doe";
    }

    Human(std::string name) {
        std::cout << "Human constructor (user-defined) was called." << std::endl;
        this->name = name;
    }

    //destructor
    ~Human() {
        std::cout << "Human destructor was called. (Nobody died!)" << std::endl;
    }

    void print() {
        std::cout << "Hi! My name is " << name << "." << std::endl;
    }
};

//derived class from Human
class Student : public Human {
public:
    int id;

    //this constructor calls the Human() constructor by default first
    Student() {
        std::cout << "Student constructor was called." << std::endl;
        id = 0;
    }

    //user-defined constructor that also calls the base user-defined constructor
    Student(std::string name, int id) : Human(name) {
        //this->name = name;
        this->id = id;
    }

    ~Student() {
        std::cout << "Student destructor was called. (We don't care about those.)" << std::endl;
    }

    //redefining a base class function
    void print() {
        //call the method of the base class
        Human::print();
        
        //add your own extra info
        std::cout << "I am a student and ";
        learn();
        std::cout << "My ID is " << id << "." << std::endl;
    }

    void learn() {
        std::cout << "I am learning OOP!" << std::endl;
    }
};

class Professor : public Human {
public:
    std::string subject;
};

int main() {
    Student st;
    st.print();
    std::cout << std::endl;

    Student st2("Billy", 100);
    st.print();
    std::cout << std::endl;

    Human h;
    h.print();
    
    return 0;
}