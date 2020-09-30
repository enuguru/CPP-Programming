
// this function shows how you can call a simple closure

#include <iostream>
using namespace std;

int main()
{
   [](int v){cout << v << "*6=" << v*6 << endl;} (7);
   return 0;
}
