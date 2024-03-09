#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() {
        return length * width;
    }
};
int main() {
    Rectangle rect(5.0,3.0);
    std::cout<<"Area of a rectangle:"<<area;
    return 0;
}
