#include <iostream>

//abstract class
class Weapon {
public:
    //abstract (pure virtual) function of a class
    virtual void use() const = 0;
};

class Gun : public Weapon {
public:
    //adding "virtual" uses polymorphism to allow machineGun's function to be called
    void use() const override {
        std::cout << "BANG " << std::endl;
    }
};

class MachineGun : public Gun {
public:
    void use() const override {
        std::cout << "BANG BANG BANG " << std::endl;
    }

};

class Bazooka : public Weapon {
public:
    //the "override" keyword prevents mistakes in function signature from breaking the code
    void use() const override {
        std::cout << "BOOOOOOM!!! " << std::endl;
    }
};

class Knife : public Weapon {
    void use() const override {
        std::cout << "SWISH! SWISH! " << std::endl;
    }
};

class Player {
public:
    void use(const Weapon& weapon) {
        weapon.use();
    }
};

int main() {
    Gun gun;
    MachineGun machineGun;
    Bazooka bazooka;
    Knife knife;
    Player player;

    //gun.shoot();
    //machineGun.shoot();

    //example of calling a Gun function from machineGun
    //machineGun.Gun::shoot();

    //does one bang without polymorphism and three bangs with it
    player.use(gun);
    player.use(machineGun);
    player.use(bazooka);
    player.use(knife);

    //does one bang without polymorphism and three bangs with it
    //Gun* gunPtr = &machineGun;
    //gunPtr->shoot();

    return 0;
}