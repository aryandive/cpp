#include <iostream>

int main(){
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of lik ea variable that holds multiple values"

    std::string cars[] = {"Corvette", "Mustang", "Chalenger"};

    cars[0] = "camaro";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

}