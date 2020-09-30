

#include <iostream>
using namespace std;

void one(int a, int b) { cout << a+b << "\n"; }
void two(int a, int b) { cout << a*b << "\n"; }


int main()
{
	void (*fptr[2])(int, int);
	fptr[0] = one;
	fptr[1] = two;

	fptr[0](12, 3); //one(12, 3)
	fptr[1](5, 4); //two(5, 3)

	return 0;
}

