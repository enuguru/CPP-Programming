

#include <iostream>
#include <thread>

void thread_function()
{
    std::cout << "thread function\n";
}

int main()
{
    std::thread t(&thread_function);
    std::cout << "main thread\n";
    std::thread t2 = t;

    t2.join();

    return 0;
}
