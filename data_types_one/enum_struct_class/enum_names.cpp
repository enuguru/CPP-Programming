
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Defining enum1 Gender 
	enum Gender { Male, 
				Female }; 

	// Defining enum2 Gender2 with same values 
	// This will throw error 
	enum Gender2 { Male, 
				Female }; 

	// Creating Gender type variable 
	Gender gender = Male; 
	Gender2 gender2 = Female; 

	cout << gender << endl 
		<< gender2; 

	return 0; 
} 
