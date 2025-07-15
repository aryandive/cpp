#include <iostream>
template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.2) << '\n';
    std::cout << max('1', '2') << '\n';

    return 0;
}

// function templates = describes what a fuction looks like.
//                      Can be used to generate as many overloaded functions
//                      as needed, each using different data types