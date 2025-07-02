#include <iostream>
#include <ctime>

int main() {

    int num;
    int guess; 
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "************* Number Guessing Game *************\n";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high! Try again. \n";
        }
        else if(guess < num){
            std::cout << "Too Low! Try again. \n";
        }
        else{
            std::cout << "Congratulations! You guessed the number " << num << " in " << tries << " tries. \n";
        }
    }while(guess != num);

    return 0;
}