
#include <iostream>
using namespace std;

// this is the same as call by refeence
// but this syntax is in C
void myfunction(int *const x, int *const y)   //  function definition
{  
  int s,q; s = 56; q = 567;
  *x = 10;   *y = 20;   //  original value can be changed
  x  =  &s;  y  =  &q;   //  x and y can be made to point to 
                                 // some other address
}

int main()
{
    int p, q; 
    p = 25; q = 45;
    cout << "\n" << "the original values of p and q are  " << p << "  and  " << q << "\n";
    myfunction(&p, &q);  
    cout << "\n" << "the value of p and q after function call are  " << p << "  and  " << q << "\n";
    return 0;
}
