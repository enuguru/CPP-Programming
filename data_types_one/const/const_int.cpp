

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	const int *p = &x;
	cout << *p << endl;
	//*p = 80;
}
