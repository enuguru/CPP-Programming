
#include <iostream>
using namespace std;

void myfunction(int *p, int *q)   //  function definition
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;  
//  cout << "\n" << "the value of p is  " << *p << "\n";
//  cout << "\n" << "the value of q is  " << *q	 << "\n";
//  cout << "\n" << "the changed values of p and q are  " << *x << "  and  " << *y << "\n";
}

int main()
{
    int p, q; 
    p = 25; q = 45;
    cout << "\n" << "the original values of p and q are  " << p << "  and  " << q << "\n";
    myfunction(&p, &q);  
    cout << "\n" << "the values after swapping of p and q are  " << p << "  and  " << q << "\n";
    return 0;
}
