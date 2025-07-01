#include <iostream>

int main()
{

    // && = logical AND (If two conditions are true)
    // || = logical OR (If at least one of two condition is true)
    //  ! = logical NOT

    int age = 20;
    bool hasID = true;

    // logical AND (&&)
    if (age >= 18 && hasID)
    {
        std::cout << "Access granted (AND condition passed)." << std::endl;
    }

    // Logical OR (||)
    if (age >= 18 || hasID)
    {
        std::cout << "Access maybe granted (OR condition passed)." << std::endl;
    }

    // Logical NOT (!)
    bool isBanned = false;
    if (!isBanned)
    {
        std::cout << "User is not banned (NOT condition passed)." << std::endl;
    }

    return 0;
}