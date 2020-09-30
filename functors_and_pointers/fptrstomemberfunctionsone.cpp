

#include <iostream>
using namespace std;

class Number
{
public:
	int i;
        void (* newfptr)();
	Number() { i = 0; }
	int one() { return i+1; }
	int two() { return i+2; }
};

void another_func() { cout << endl << "Other function called from class member function" << endl;  }

int main()
{
	Number object; //Create a new 'Number' object named 'object'
        
	int (Number::*NumberPtr)(); //Declare a pointer to member functions in "Number" of type 'int' with takes no params

	NumberPtr = &Number::one;
	cout << (object.*NumberPtr)() << endl;

	NumberPtr = &Number::two;
	cout << (object.*NumberPtr)() << endl;

	return 0;
}

