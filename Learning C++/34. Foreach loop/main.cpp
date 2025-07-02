#include <iostream>

int main() {
    // Foreach loop = loop that eases the treaversal over an
    //                iterable daata set

int grades[] = {65,72, 81, 93};

for(int grade : grades){
    std::cout << grade << '\n';
}

    return 0;
}