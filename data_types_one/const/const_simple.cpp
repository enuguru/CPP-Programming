

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	const int *p = &x;
	cout << *p << endl;
	int s = 20;
	int const *q = &s;
	cout << *q << endl;
	//*p = 80;
}
