
// C program to demonstrate 
// External Static Variables 

#include <stdio.h> 
#include <iostream> 
using namespace std;

int add(int, int); 

static int a = 5; 

int main() 
{ 
	int c; 
	cout << a << endl;
	printf("%d", add(a, c)); 
	return 0;
} 

int add(int c, int b) 
{ 
	cout << a << endl;
	b = 5; 
	c = a + b; 
	return c; 
} 
