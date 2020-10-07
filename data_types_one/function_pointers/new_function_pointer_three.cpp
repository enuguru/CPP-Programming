
#include <iostream>
using namespace std;


int main()
{
	int x = 10;
	int count;
	void newfuncone(int);
	void newfunctwo(int);
	void newfuncthree(int);
	void newfuncfour(int);
	void (*fptr[4])(int);
	fptr[0] = newfuncone;
	fptr[1] = newfunctwo;
	fptr[2] = newfuncthree;
	fptr[3] = newfuncfour;
	for(count = 0; count < 4; count++)
	{
		(*fptr[count])(x);
	}
}


void newfuncone(int p)
{
	cout << "I am inside newfuncone  " << p << endl;
}


void newfunctwo(int p)
{
	cout << "I am inside newfunctwo  " << p << endl;
}



void newfuncthree(int p)
{
	cout << "I am inside newfuncthree  " << p << endl;
}


void newfuncfour(int p)
{
	cout << "I am inside newfuncfour  " << p << endl;
}
