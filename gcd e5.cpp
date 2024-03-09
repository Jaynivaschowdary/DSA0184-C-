#include <iostream>
int gcd(int a, int b) {
    int result;
    do {
        result = a % b;
        a = b;
        b = result;
    } while (result != 0);
    return a;
}
int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int result = gcd(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    return 0;
}
