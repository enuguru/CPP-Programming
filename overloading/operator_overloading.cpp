
// Operator Overloading

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class mystring
{
	char *p;

public:
	mystring(char *str = "")
	{
		p = new char[strlen(str)+1];
		strcpy(p,str);
	}

	mystring operator +(mystring s)
	{
		char *str = new char[strlen(p)+strlen(s.p)+1];
		strcpy(str,p);
		strcat(str,s.p);
		return mystring(str);
	}

	mystring operator =(mystring s)
	{
		strcpy(p,s.p);
		return mystring(p);
	}

	mystring operator +=(mystring s)
	{
		char *str = new char[strlen(p)+strlen(s.p)+1];
		strcpy(str,p);
		strcat(str,s.p);
		return mystring(str);
	}

	void toupper()
	{
		char *temp = p;
		while(*temp)
		{
			if(*temp >='a' && *temp <='z')
			     *temp = *temp - 32;
			temp++;
		}
	}


	void tolower()
	{
		char *temp = p;
		while(*temp)
		{
			if(*temp >='A' && *temp <='Z')
			     *temp = *temp + 32;
			temp++;
		}
	}

	void showsize()
	{
		cout << strlen(p) +1 << endl;
	}

	
	void showlength()
	{
		cout << strlen(p) << endl;
	}

	void display()
	{
		cout << p << endl;
	}

};


int main(int argc, char* argv[])
{
	mystring s = "Hi",s1 = "Hello", s2;
	s2 = s + s1;
	s = s + s1;
	s1 = s2;
	s1.toupper();
	s2.tolower();
	s.showsize();
	s.showlength();
	s.display();
	s1.display();
	s2.display();
	printf("Hello World!\n");
	return 0;
}
