#include <iostream>
class Vehicle {
public:
    virtual void drive() const = 0;
};
class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Car is being driven.\n";
    }
};
class Truck : public Vehicle {
public:
    void drive() const override {
        std::cout << "Truck is being driven.\n";
    }
};
int main() {
    Car car;
    Truck truck;
    car.drive();
    truck.drive();

    return 0;
}
