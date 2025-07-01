#include <iostream>

int main() {
    
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression! : expression;

    // int grade = 50;
    // grade >=60 ? std::cout << "You pass!" : std::cout << "You fail!";

    // int number = 9;
    // number % 2 ? std::cout << "Odd" : std::cout << "Even";

    bool hunger = true;
    // hunger ? std::cout << "Eat something!" : std::cout << "Keep working!";
    std::cout << (hunger ? "Eat something!" : "Keep working!");

    return 0;
}