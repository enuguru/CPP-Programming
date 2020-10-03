// An example C++ program to show use of wchar_t in array 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// char type array string 
	char caname[] = "this is elegant programming" ; 
	cout << caname << endl ; 

	// wide-char type array string 
	wchar_t waname[] = L"this is elegant programming" ; 
	wcout << waname << endl; 

	return 0; 
} 
