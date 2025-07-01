#include <iostream>

int main()
{

    char op;
    double num1, num2, result;

    std::cout << "***************** CALCULATOR *****************\n";

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << "\n";
        break;
    case '-':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << "\n";
        break;
    case '*':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << "\n";
        break;
    case '/':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << "\n";
        break;
    default:
        std::cout << "Error! Operator is not correct.\n";
        break;
    }

    std::cout << "***************** ********** *****************\n";
}