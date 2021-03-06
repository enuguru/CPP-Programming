

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "classtemplatedefargsqueue.hpp"

int main()
{
    try {
        Stack<int>   intStack;       // stack of ints
        Stack<float> floatStack;     // stack of floats

        // manipulate int stack
        intStack.push(42);
        intStack.push(7);

        // manipulate float stack
        floatStack.push(7.7);

        // assign stacks of different type
        floatStack = intStack;

        // print float stack
        std::cout << floatStack.top() << std::endl;
        floatStack.pop();
        std::cout << floatStack.top() << std::endl;
        floatStack.pop();
        std::cout << floatStack.top() << std::endl;
        floatStack.pop();
    }
    catch (std::exception const& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    // stack for ints using a vector as an internal container
    Stack<int,std::vector<int> > vStack;
    //...
    vStack.push(42);
    vStack.push(7);
    std::cout << vStack.top() << std::endl;
    vStack.pop();
}
