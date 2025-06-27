#include <iostream>
#include <vector>

int main() {
    // Typedefs
    typedef int Integer;
    typedef double RealNumber;

    Integer a = 5;
    RealNumber b = 3.14;

    std::cout << "Typedefs:" << std::endl;
    std::cout << "Integer a: " << a << std::endl;
    std::cout << "RealNumber b: " << b << std::endl;

    // Type aliases
    using String = std::string;
    using Character = char;

    String name = "Alice";
    Character initial = 'A';

    std::cout << "\nType Aliases:" << std::endl;
    std::cout << "String name: " << name << std::endl;
    std::cout << "Character initial: " << initial << std::endl;

    return 0;
}


// typedef = reserved keyword usied to create an additional name (alias) for another data type.
// type alias = a modern way to create an alias for a data type using the 'using' keyword.
// Both typedefs and type aliases can be used to simplify complex type declarations, making code more readable and maintainable.