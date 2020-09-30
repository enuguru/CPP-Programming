
// run the program with the following command "g++ -g -std=c++14 thread_create.cpp -pthread"
// if you do not give -pthread the program will not compile
#include <iostream>
#include <thread>

void thread_function()
{
    std::cout << "thread function\n";
}

int main()
{
    std::thread t(&thread_function);   // t starts running
    std::cout << "main thread\n";
    t.join();   // main thread waits for the thread t to finish
    return 0;
}
