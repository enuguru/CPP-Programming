
// C++ program to demonstrate working of setprecision() 
// in C/C++ 

#include<iomanip> 
#include<iostream> 

using namespace std; 

int main() 
{ 
	double pi = 3.14159, npi = -3.14159; 
	cout << fixed << setprecision(0) << pi <<" "<<npi<<endl; 
	cout << fixed << setprecision(1) << pi <<" "<<npi<<endl; 
	cout << fixed << setprecision(2) << pi <<" "<<npi<<endl; 
	cout << fixed << setprecision(3) << pi <<" "<<npi<<endl; 
	cout << fixed << setprecision(4) << pi <<" "<<npi<<endl; 
	cout << fixed << setprecision(5) << pi <<" "<<npi<<endl; 
	cout << fixed << setprecision(6) << pi <<" "<<npi<<endl; 
} 
