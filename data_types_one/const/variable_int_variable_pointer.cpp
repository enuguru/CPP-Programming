

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int s = 10;
	int *p = &x;
	*p = 80;
	cout << *p << endl;
	p = &s;
	cout << *p << endl;
}
