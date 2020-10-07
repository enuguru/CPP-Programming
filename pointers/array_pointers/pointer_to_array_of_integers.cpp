

#include <iostream>
using namespace std;


int main()
{
	int i;
	int arri[3] = { 10, 20, 30} ;
	int (*pai)[3] = &arri;
	for(i = 0; i < 3; i++)
	{
		cout << endl << (*pai)[i];
	}


}
