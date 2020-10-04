
// it includes algorithms, containers, vectors, stack and all other data structures
// it is very heavy

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Defining enum1 Gender 
	enum Gender { Male, 
				Female }; 

	// Defining enum2 Color 
	enum Color { Red, 
				Green }; 

	// Creating Gender type variable 
	Gender gender = Male; 
	Color color = Red; 

	// Upon comparing gender and color 
	// it will return true as both have value 0 
	// which should not be the case actually 
	if (gender == color) 
		cout << "Equal"; 

	return 0; 
} 
