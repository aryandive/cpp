#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "****** temperature conversion ****** \n ";

    std::cout << "F = ahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "what unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp * 9.0 / 5.0) + 32.0;
        std::cout << "Temperature in Fahrenheit: " << temp << " F\n";
    } else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32.0) * 5.0 / 9.0;
        std::cout << "Temperature in Celsius: " << temp << " C\n";
    } else {
        std::cout << "Invalid unit entered.\n";
    }

    std::cout << "************************************";

    return 0;
}