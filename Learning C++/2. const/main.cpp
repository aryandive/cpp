#include <iostream>

int main() {
    const double PI = 3.14159; // Declare a constant variable for pi
    const int RADIUS = 5; // Declare a constant variable for RADIUS 
    double area = PI * RADIUS * RADIUS; // Calculate the area of a circle
    std::cout << "The area of the circle with RADIUS " << RADIUS << " is " << area << std::endl; // output the result!

    // Note: The use of 'const' ensures that the values of pi and RADIUS cannot be changed after their initial assignment.
    // This is a good practice to prevent accidental modification of values that should remain constant.
    // other examples of using 'const' could include defining constants for mathematical values, configuration settings, or fixed parameters in your program.

    return 0;
}