#include <iostream>


int main() {
    std::string str = "Hello, World!";

    // length() - returns the number of characters in the string
    std::cout << "Length: " << str.length() << std::endl;

    // at(index) - returns the character at the given index
    std::cout << "Character at index 1: " << str.at(1) << std::endl;

    // front() - returns the first character
    std::cout << "First character: " << str.front() << std::endl;

    // back() - returns the last character
    std::cout << "Last character: " << str.back() << std::endl;

    // append(str) - adds string to the end
    str.append(" Have a nice day.");
    std::cout << "After append: " << str << std::endl;

    // insert(index, str) - inserts string at specified index
    str.insert(7, "C++ ");
    std::cout << "After insert: " << str << std::endl;

    // erase(start, length) - removes characters from string
    str.erase(7, 4);
    std::cout << "After erase: " << str << std::endl;

    // replace(start, length, str) - replaces part of the string
    str.replace(7, 5, "beautiful");
    std::cout << "After replace: " << str << std::endl;

    // substr(start, length) - returns substring
    std::string sub = str.substr(7, 9);
    std::cout << "Substring: " << sub << std::endl;

    // find(str) - returns index of first occurrence, or npos if not found
    size_t pos = str.find("World");
    std::cout << "Position of 'World': " << pos << std::endl;

    // rfind(str) - returns index of last occurrence
    size_t lastPos = str.rfind("o");
    std::cout << "Last position of 'o': " << lastPos << std::endl;

    // compare(str) - compares two strings (returns 0 if equal)
    std::string a = "apple";
    std::string b = "banana";
    std::cout << "Compare result: " << a.compare(b) << std::endl;

    // empty() - checks if string is empty
    std::cout << "Is string empty? " << (str.empty() ? "Yes" : "No") << std::endl;

    // clear() - removes all characters from string
    str.clear();
    std::cout << "After clear: '" << str << "'" << std::endl;

    return 0;
}
