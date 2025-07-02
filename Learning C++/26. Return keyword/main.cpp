#include <iostream>

// return = return a value back to the spot
//          where you called the emcompassing funtion

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    std::string firstName = "Aryan";
    std::string LastName = "Dive";
    std::string fullName = concatStrings(firstName, LastName);

    std::cout << "Full name: " << fullName << std::endl;

    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}
