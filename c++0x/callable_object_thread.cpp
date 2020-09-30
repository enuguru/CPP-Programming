
/*

Here, we created an function object and assign it to a thread task. We may be temped to pass the 
instance on the fly:

// MyFunctor fnctor;
std::thread t(MyFunctor());

But it won't compile. So, if we still want to make it work, we should do this instead:

// MyFunctor fnctor;
std::thread t((MyFunctor()));

*/

#include <iostream>
#include <thread>

class MyFunctor
{
public:
    void operator()() {
        std::cout << "functor\n";
    }
};

int main()
{
    MyFunctor fnctor;
    std::thread t(fnctor);
    std::cout << "main thread\n";
    t.join();
    return 0;
}
