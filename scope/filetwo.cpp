
#include <iostream>
using namespace std;

extern int x;

void newfunction()
{
	x = x + 1;
	cout << x << endl;
}
