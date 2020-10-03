// CPP program to illustrate bool 
// data type in C++ 
#include<iostream> 
using namespace std; 
int main() 
{ 
	int x1 = 10, x2 = 20, m = 2; 
	bool b1, b2; 
	b1 = x1 == x2; // false 
	
	b2 = x1 < x2; // true 
	
	cout << "b1 is = " << b1 << "\n"; 
	cout << "b2 is = " << b2 << "\n"; 
	bool b3 = true; 
	cout << "b3 is = " << b3 << "\n"; 
	return 0; 
	
} 
