

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int s = 10;
	const int *const p = &x;
	*p = 80;
	p = &s;
	cout << *p << endl;
}
