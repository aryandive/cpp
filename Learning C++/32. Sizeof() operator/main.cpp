#include <iostream>

int main() {

    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    double gpa = 2.5;
    std::string name = "Aeronautical Dive Weapons Dealer and Defence Manufacturer";
    bool student = true;


    std::cout << sizeof(gpa) << "bytes\n";

    return 0;
}
