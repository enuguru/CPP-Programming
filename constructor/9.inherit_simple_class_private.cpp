#include <iostream> 
using namespace std; 

class Dummy { 
public: 
	Dummy() { } 
private: 
	Dummy(const Dummy& temp_obj) { } 
	Dummy& operator=(const Dummy& temp_obj) { } 
}; 

class Base : public Dummy { 
	int x; 
public: 
	Base() { } 
	Base(int y) : x(y) { } 
}; 

int main() 
{ 
	Base b1(10); 
	Base b2(b1); // Calls copy constructor 
	b2 = b1; // Calls copy assignment operator 
	return 0; 
} 
