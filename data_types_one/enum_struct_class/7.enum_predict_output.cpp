

#include <iostream>
using namespace std;

enum day {sunday = 1, tuesday, wednesday, thursday, friday, saturday}; 

int main() 
{ 
	enum day d = thursday; 
	cout << endl << "The day number stored in d is " << d << endl;
	return 0; 
}
