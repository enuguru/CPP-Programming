
#include <iostream>
using namespace std;


int main()
{
	void newfunc(int);
	int x = 10;
	newfunc(x);
}


void newfunc(int p)
{
	cout << "I am inside newfunc  " << p << endl;
}
