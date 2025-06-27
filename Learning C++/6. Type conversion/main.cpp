#include <iostream>

int main () {
    // type converstion = converting a value from one data type to another
    // implicit conversion = automatic conversion by the compiler
    // explicit conversion = conversion using a cast operator
    
    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100;

    std::cout << score << "%";

}