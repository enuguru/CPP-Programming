
#include <iostream>
#include <deque>
#include <cstdlib>
#include "classtemplatewithdefaultargs.hpp"

int main()
{
    try {
        // stack of ints:
        Stack<int> intStack;

        // stack of ints which uses a std::deque<> to manage the elements
       //  **** note this *** here we are specifically using a deque for managing the stack
       // by default the code uses a vector 
        Stack<double,std::deque<double> > dblStack;

        // manipulate int stack
        intStack.push(7);
        std::cout << intStack.top() << std::endl;
        intStack.pop();

        // manipulate double stack
        dblStack.push(42.42);
        std::cout << dblStack.top() << std::endl; 
        dblStack.pop();
        dblStack.pop();
    }
    catch (std::exception const& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
        return EXIT_FAILURE;  // exit program with ERROR status
    }
}
