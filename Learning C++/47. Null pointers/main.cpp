#include <iostream>

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}

// Null value = a special value that means something has no value.
//              When a pointer is holding a null value,
//              that pointer is not pointing at anything (null point)

// nullptr = keyword represents a null pointer literal 

// nullptrs are helpful when deterining if an address
// was successfully assigned to a pointer