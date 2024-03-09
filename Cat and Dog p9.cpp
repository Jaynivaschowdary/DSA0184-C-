#include <iostream>
class Animal {
public:
    virtual void speak() const = 0;
};
class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};
class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Cat cat;
    Dog dog;
    cat.speak();
    dog.speak();

    return 0;
}
