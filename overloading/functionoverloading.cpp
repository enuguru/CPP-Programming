
//Function Overloading
#include <iostream>
using namespace std;

void print_this(char the_char)
{
	cout << the_char << "\n";
}

void print_this(char* the_C_string)
{
	cout << the_C_string << "\n";
}

void print_this(int ASC_code)
{
	cout << static_cast<char> (ASC_code) << "\n";
}



int main()
{
    print_this(97);                 // ASCII code for 'a'
    print_this('b');                 // Char
    print_this("c");               // C-style String
    return 0;
}
