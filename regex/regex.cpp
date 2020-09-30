
// Example 1 this program check with the help of regular expression if the given input
// is an integer

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string input;
	regex integer("(\\+|-)?[[:digit:]]+");
	//As long as the input is correct ask for another number
	while(true)
	{
		cout<<"Give me an integer!"<<endl;
		cin>>input;
		if(!cin) break;
		//Exit when the user inputs q
		if(input=="q")
			break;
		if(regex_match(input,integer))
			cout<<"integer"<<endl;
		else
		{
			cout<<"Invalid input"<<endl;
		}
	}
}
