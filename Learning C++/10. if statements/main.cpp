#include <iostream>

int main ()
{
    int age;

    if (age < 18) {
        std::cout << "You are a minor." << std::endl;
    } else if (age >= 18 && age < 65) {
        std::cout << "You are an adult." << std::endl;
    } else if (age >= 65) {
        std::cout << "You are a senior citizen." << std::endl;
    } else
    {
        std::cout << "Invalid age." << std::endl;
    }
    
    return 0;
}
