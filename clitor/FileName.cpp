#include <iostream>
#include <cmath> // for acos and cos

int main() {
    // Declare variables
    double a, b, x;

    // Prompt user for input
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Calculate the expression
    try {
        double numerator = 2 * a - x;
        double denominator = b * cos(3 * x);

        if (denominator == 0) {
            throw std::runtime_error("Denominator cannot be zero.");
        }

        double value = numerator / denominator;

        // Check if value is within the valid range for arccos
        if (value < -1 || value > 1) {
            throw std::runtime_error("Value out of range for arccos.");
        }

        double result = acos(value);
        std::cout << "Result of the calculation: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}