
// this function shows how you can call a simple closure

#include <iostream>
using namespace std;

int main()
{
   []() { int x = 10; cout << x << " This is a very simple demonstration of closure" << endl; } ();
   return 0;
}
