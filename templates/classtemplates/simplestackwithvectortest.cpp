
#include <iostream>
#include <string>
#include <cstdlib>
#include "simplestackwithvector.hpp"

int main()
{
    try {
        Stack<int>         intStack;       // here we create a stack of ints, default vector will be used
        Stack<std::string> stringStack;    // here we create a stack of strings, so string will be used

        // manipulate int stack
        intStack.push(7);
        std::cout << intStack.top() << std::endl;

        // manipulate string stack
        stringStack.push("hello");
        std::cout << stringStack.top() << std::endl; 
        stringStack.pop();
        stringStack.pop();
    }
    catch (std::exception const& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
        return EXIT_FAILURE;  // exit program with ERROR status
    }
}
