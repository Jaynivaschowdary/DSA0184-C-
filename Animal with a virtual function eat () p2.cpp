#include <iostream>
class Animal {
public:
    virtual void eat() const {
        std::cout << "Animal is eating\n";
    }
};
class Herbivore : public Animal {
public:
    void eat() const override {
        std::cout << "Herbivore is eating plants\n";
    }
};
class Carnivore : public Animal {
public:
    void eat() const override {
        std::cout << "Carnivore is eating meat\n";
    }
};

int main() {
    Herbivore herb;
    Carnivore carn;
    herb.eat();
    carn.eat();

    return 0;
}
