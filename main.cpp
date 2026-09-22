#include <iostream>

void calc() {
    double a, b;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> b;

    if (operation == '+') {
        std::cout << "Result: " << a + b << std::endl;
    }
    else if (operation == '-') {
        std::cout << "Result: " << a - b << std::endl;
    }
    else if (operation == '*') {
        std::cout << "Result: " << a * b << std::endl;
    }
    else if (operation == '/') {
        if (b != 0) {
            std::cout << "Result: " << a / b << std::endl;
        }
        else {
            std::cout << "Error: division by zero!" << std::endl;
        }
    }
    else {
        std::cout << "Error: invalid operation!" << std::endl;
    }

}
