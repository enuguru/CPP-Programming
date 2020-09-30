/*

Return from a lambda function

The compiler can deduce the return value type from a lambda function as shown in the case #1 of the 
example below. However, still we can explicitly specify its return type as in the case #2:

/* lam.cpp */
#include <iostream>
using namespace std;

int main()
{
  /* case #1 - compiler deduces return type */
  cout << [](int n) {return n*n;} (5); // this is a lambda function, see it is unnamed, also it is 
                                       // called at the same place it is defined "(5)" the syntax
                                       // the value 5 you are passing is received in int n
  cout << endl;
  /* case #2 - explicit return type */
  cout << [](int n)->int {return n*n;} (5); // here the return type is indicated by " ->int "

  return 0;
}

