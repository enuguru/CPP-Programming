
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
	struct person (*pas)[3] = &students;
        cout << endl << (*pas)[0].age;
        cout << endl << (*pas)[0].salary;
	return 0;
}
