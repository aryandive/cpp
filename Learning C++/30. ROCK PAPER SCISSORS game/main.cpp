#include <iostream>
#include <ctime>

// Function declarations
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer); // Fixed function name casing

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer); // Added call to determine winner

    return 0;
}

char getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do {
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cout << "Enter your choice: ";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player; // Fixed: returning actual player input
}

char getComputerChoice() {
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 'r'; // fallback (though unreachable)
}

void showChoice(char choice) {
    switch (choice) {
        case 'r': std::cout << "Rock\n"; break;
        case 'p': std::cout << "Paper\n"; break;
        case 's': std::cout << "Scissors\n"; break;
    }
}

void chooseWinner(char player, char computer) { // Fixed name from ChooseWinner

    if (player == computer) {
        std::cout << "It's a tie!\n";
    } else if (
        (player == 'r' && computer == 's') ||
        (player == 'p' && computer == 'r') ||
        (player == 's' && computer == 'p')
    ) {
        std::cout << "You win!\n";
    } else {
        std::cout << "You lose!\n";
    }
}
