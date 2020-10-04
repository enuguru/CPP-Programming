

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Defining enum1 Gender 
	enum Gender { Male, 
				Female }; 

	// Creating Gender type variable 
	Gender gender = Male; 

	// creating a variable Male 
	// this will throw error 
	int Male = 10; 

	cout << gender << endl; 

	return 0; 
} 
