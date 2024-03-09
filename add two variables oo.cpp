#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    Number operator+(const Number& num) {
        Number result(value + num.value);
        return result;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number num1(5);
    Number num2(10);
    Number sum = num1 + num2;
    cout << "Sum of ";
    num1.display();
    cout << "and ";
    num2.display();
    cout << "is ";
    sum.display();
    return 0;
}
