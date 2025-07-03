#include <iostream>

int main() {
    // fill() = Fills a range of elemnets with a specified value
    //          fill (begin, end, value)  

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "burger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}