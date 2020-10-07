
#include <iostream>
using namespace std;

int main()
{
	struct person
	{

		int age;
		float salary;
	};
	struct person students[3];
	students[0].age = 19;
	students[0].salary = 12000.00;
	students[1].age = 20;
	students[1].salary = 12000.00;
	students[2].age = 17;
	students[2].salary = 12000.00;
	struct person *asp[3];
	asp[0] = &students[0];
	asp[1] = &students[1];
	asp[2] = &students[2];
	struct person *(*pasp)[3] = &asp;
        cout << endl << (*asp)[0].age;
        cout << endl << (*asp)[0].salary;
	return 0;
}
