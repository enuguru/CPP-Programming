

#include <iostream>
using namespace std;


int main()
{
	int i;
	int *arrip[3];
	int x = 10; int y = 20; int z = 30;
	arrip[0] = &x;
	arrip[1] = &y;
	arrip[2] = &z;
	for(i=0; i< 3; i++)
	{
		cout << endl << *arrip[i];
	}
}

