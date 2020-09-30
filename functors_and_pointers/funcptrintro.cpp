
#include <iostream>
using namespace std;

void one() { cout << "One\n"; }
void two() { cout << "Two\n"; }


int main()
{
	void (*fptr)(); //Declare a function pointer to voids with no params

	fptr = &one; //fptr -> one
	(*fptr)(); //=> one()

	fptr = &two; //fptr -> two
	(*fptr)(); //=> two()

	return 0;
}
