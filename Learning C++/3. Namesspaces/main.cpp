#include <iostream>

namespace first {
    int x = 5;
}

namespace second {
    int x = 10;
}

int main() {
    int x = 0;
    std::cout << x;

    return 0;
}

// Namespace + provides a solution for preventing name conflicts in large projects.