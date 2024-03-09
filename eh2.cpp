#include <iostream>

int main() {
    try {
        // Outer try block
        try {
            // Inner try block
            int num1, num2;
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            
            if (num2 == 0) {
                throw std::runtime_error("Division by zero error");
            }
            
            std::cout << "Result of division: " << num1 / num2 << std::endl;
        } catch (const std::runtime_error& e) {
            // Inner catch block
            std::cerr << "Inner exception caught: " << e.what() << std::endl;
        }
        
        // Simulating another operation that might throw an exception
        throw std::logic_error("Logic error occurred");
        
    } catch (const std::exception& e) {
        // Outer catch block
        std::cerr << "Outer exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
