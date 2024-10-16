#include <iostream>
int main() {
    int number1, number2;
    char op;

    std::cout << "Enter a number: ";
    std::cin >> number1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter another number: ";
    std::cin >> number2;

    switch (op) {
        case '+':
            std::cout << "Result: " << number1 + number2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << number1 - number2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << number1 * number2 << std::endl;
            break;
        case '/':
            if (number2!= 0) {
                std::cout << "Result: " << number1 / number2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
    }

    return 0;
}
