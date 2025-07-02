#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));
    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1:
            std::cout << "You found a treasure chest! \n";
            break;
        case 2:
            std::cout << "You encountered a wild beast! \n";
            break;
        case 3:
            std::cout << "You stumbled upon a hidden cave! \n";
            break;
        case 4:
            std::cout << "You discovered a magical artifact! \n";
            break;
        case 5:
            std::cout << "You fell into a trap! \n";
            break;
        default:
            std::cout << "Nothing happened. \n";
            break;
    }

    return 0;
}