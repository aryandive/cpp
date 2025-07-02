#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping, std::string topping1);

int main() {

    bakePizza("Pepperoni", "mushrooms");

    return 0;
}

void bakePizza() {
    std::cout << "here is you pizza \n";
}

void bakePizza(std::string topping){
    std::cout << "Here is your " << topping << " pizza \n";
}

void bakePizza(std::string topping, std::string topping1){
    std::cout << "Here is your " << topping << " and " << topping1 << " pizza \n";
}