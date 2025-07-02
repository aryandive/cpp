#include <iostream>

int main()
{

    int rows;
    int coloum;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many coloum?: ";
    std::cin >> coloum;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= coloum; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}