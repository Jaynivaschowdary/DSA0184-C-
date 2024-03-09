#include <iostream>
#include <cmath>
using namespace std;
int absolute(int num) {
    return abs(num);
}
double absolute(double num) {
    return fabs(num);
}
int main() {
    int intNum = -5;
    double doubleNum = -3.14;

    cout << "Absolute value of " << intNum << " is: " << absolute(intNum) << endl;
    cout << "Absolute value of " << doubleNum << " is: " << absolute(doubleNum) << endl;

    return 0;
}
