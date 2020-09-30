
#include <iostream>
using namespace std;

void myfunction(int const x, int const y)   //  function definition
{  
  x = 10;   y = 20;   //  original value cannot be changed
                      // if you change x and y, p and q will not change
}

int main()
{
    int p, q; 
    p = 25; q = 45;
    cout << "\n" << "the original values of p and q are  " << p << "  and  " << q << "\n";
    myfunction(p, q);  
    cout << "\n" << "the value of p and q after function call are  " << p << "  and  " << q << "\n";
    return 0;
}
