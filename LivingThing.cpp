#include <iostream>

class LivingThing {
public:
    virtual void printInfo() {
        std::cout << "Living Thing" << std::endl << "|" << std::endl;
    }
};

class Animal : public LivingThing {
public:
    void printInfo() {
        LivingThing::printInfo();
        std::cout << "Animal" << std::endl << "|" << std::endl;
    }
};

class Fish : public Animal {
public:
    void printInfo() {
        Animal::printInfo();
        std::cout << "Fish" << std::endl << "|" << std::endl;
    }
};

class Sardine : public Fish {
public:
    void printInfo() {
        Fish::printInfo();
        std::cout << "Sardine" << std::endl;
    }
};

class Bass : public Fish {
public:
    void printInfo() {
        Fish::printInfo();
        std::cout << "Bass" << std::endl;
    }
};

class Mammal : public Animal {
public:
    void printInfo() {
        Animal::printInfo();
        std::cout << "Mammal" << std::endl << "|" << std::endl;
    }
};

class Cat : public Mammal {
public:
    void printInfo() {
        Mammal::printInfo();
        std::cout << "Cat" << std::endl << "|" << std::endl;
    }
};

class Tiger : public Cat {
public:
    void printInfo() {
        Cat::printInfo();
        std::cout << "Tiger" << std::endl;
    }
};

void printLivingThingTree(LivingThing& creature) {
    creature.printInfo();
}

int main() {
    //create creatures
    Tiger tiger;
    Sardine sardine;
    Cat cat;

    //print class trees
    std::cout << "Class Tree for Tiger:" << std::endl;
    printLivingThingTree(tiger);
    std::cout << std::endl;

    std::cout << "Class Tree for Sardine:" << std::endl;
    printLivingThingTree(sardine);
    std::cout << std::endl;

    std::cout << "Class Tree for Cat:" << std::endl;
    printLivingThingTree(cat);
    std::cout << std::endl;

    return 0;
}