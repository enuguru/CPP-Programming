// CPP program to demonstrate use Delete copy 
// constructor and delete assignment operator 
#include <iostream> 
using namespace std; 

class Base { 
	int x; 
public: 
	Base() {	 } 
	Base(int y) : x(y) { } 
	Base(const Base& temp_obj) = delete; 
	Base& operator=(const Base& temp_obj) = delete; 
}; 

int main() 
{ 
	Base b1(10); 
	Base b2(b1); // Calls copy constructor 
	b2 = b1; // Calls copy assignment operator 
	return 0; 
} 
