
#include <iostream>
using namespace std;

void myfunction(int &x, int &y)   //  function definition
{
   int s,z; s = 67; z = 45;  
  x = 10;   y = 20;   //  original value can be changed
  //x  =  &s;  y  =  &z;   //  x and y cannot be made to point to 
                                 // some other address since x and y are references
    // if you change x and y, p and q will change
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


//int &x = p;

//int *const x = &p;


