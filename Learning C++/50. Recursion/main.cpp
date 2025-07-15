#include <iostream>
int factorial(int num);
int main () {

    std::cout << factorial(10);

    return 0;
}
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}

// recursion = a programming technique where a function
//             invokes itself from within 
//             break a complex concept into a repeatablle single step

// (iterative vs recursive)

// advantages = less code and is cleaner 
//              useful for sorting and searching algorithms 

// disadvantages = user more memory
//                 slower
