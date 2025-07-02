#include <iostream>

void happyBirthday(std::string name, int age); // function prototype

int main() {
    // function = a block of reuseable code

    std::string name = "Aryan";
    int age = 20;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to you! \n";
    std::cout << "Happy Birthday to you! \n";
    std::cout << "Happy Birthday dear friend! \n";
    std::cout << "You are " << age << " years old \n";
}