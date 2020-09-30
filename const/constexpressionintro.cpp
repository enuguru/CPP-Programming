
#include <iostream>
using namespace std;

constexpr int multiply (int x, int y)
{
    return x * y;
}

int main()
{ 
// the compiler may evaluate this at compile time
const int val = multiply( 10, 10 );
cout << endl << val << endl;
return 0;
}
