
#include <iostream>
#include <functional>
using namespace std;

void another_func(std::function<int (int)> localclosure)
{
    cout << "factorial(10) : " << localclosure(10) << endl;
}
 
int main()
{
    std::function<int(int)> fact;
    int p = 20;
    fact = [&](int n)->int
    {
        if(n==0) {
            cout << endl << p;
            return 1;
        }
        else
        {
            return (n * fact(n-1));
        }
    } ;
    another_func(fact);

    return 0;
}
