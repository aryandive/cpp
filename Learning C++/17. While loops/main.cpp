#include <iostream>

int main() {
    std::string name;

    while(name.empty()){
        std::cout << "Enter you name: ";
        std::getline(std::cin, name);

    }


    std::cout << "Hello " << name;
    // Your code here

    return 0;
}