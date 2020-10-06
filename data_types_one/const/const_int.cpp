

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int q = 20;
	const int *p = &x;
	p = &q;
	cout << *p << endl;
	//*p = 80;
}
