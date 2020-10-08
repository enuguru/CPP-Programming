#include <iostream> 
using namespace std; 

class Base { 
	int x; 
public: 

private: 

	Base() { cout << endl << "no arg constructor" << endl; } 
	Base(int y): x(y) { cout << endl << "one arg constructor" << endl; } 
	// Copy constructor 
	Base(const Base& obj) : x(obj.x) { } 

	// copy assignment operator 
	Base& operator=(const Base& tmp_obj) 
	{ 
		x = tmp_obj.x; 
		return *this; 
	} 
}; 

int main() 
{ 
	Base b1;
	//Base b1(10); 
	//Base b2(b1); // calls copy constructor 
	//b2 = b1; // calls copy assignment operator 
	return 0; 
} 
