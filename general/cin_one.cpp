
#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	
	/* For single input */
	cout << "Enter a number: ";
	cin >> x;
	
	/* For multiple inputs*/
	cout << "Enter 2 numbers: ";
	cin >> y >> z;
	
	cout << "Sum = " << (x+y+z);
	return 0;
}
