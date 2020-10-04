
// An example program to show working of enum in C++ 

#include<iostream>
using namespace std;

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 

int main() 
{ 
	enum week day; 
	day = Wed; 
	cout << endl << day << endl;
	return 0; 
} 
