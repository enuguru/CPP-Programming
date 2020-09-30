
#include <iostream>
using namespace std;

constexpr int factorial (int n)
{
    return n > 0 ? n * factorial( n - 1 ) : 1;
}

int main()
{
    int x;
    cout << endl << factorial(10);
    return 0;
}
