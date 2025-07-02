#include <iostream>
#include <iomanip>

void ShowBalance(double balance);
double deposite();
double withdraw(double balance);

int main()
{
    double balance = 0.00;
    int choice = 0;

    do
    {
        std::cout << "*********************\n";
        std::cout << "Enter your choise: \n";
        std::cout << "**********************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit \n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            ShowBalance(balance);
            break;
        case 2:
            balance += deposite();
            ShowBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            ShowBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting \n";
            break;

        default: std::cout << "Invalid choice \n";
        }

    } while (choice != 4);

    return 0;
}

void ShowBalance(double balance){
    std::cout <<"Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposite(){

    double amount = 0;

    std::cout << "Enter amount want to deposite: ";
    std::cin >> amount;

    if(amount > 0) {
        return amount;
    }
    else{
        std::cout << "Invalid Amount: \n";
        return 0;
    }

    return 0;
}

double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficent balance \n";
        return 0;
    }
    else if (amount < 0) {
        std::cout << "Invalid number \n";
        return 0;
    }
    else( std::cout << "Enter Amount \n" );

    return amount;
}