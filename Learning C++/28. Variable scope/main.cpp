#include <iostream>
    // Local variables = declared inside a function or block {}
    // Global variable = declared outside of all functions

int myNum = 3;
void printNum();

int main() {
    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n'; 
}

//  adding '::' to myNum for using globle variable 