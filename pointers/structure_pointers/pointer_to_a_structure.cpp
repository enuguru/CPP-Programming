
#include <iostream>
using namespace std;

int main()
{
	struct person
	{

		int age;
		float salary;
	};
	person raju;
	raju.age = 20;
	raju.salary = 54546.45;
	struct person *ptr = &raju;
        cout << endl << raju.age;
	cout << endl << raju.salary << endl;
        cout << endl << ptr->age;
	cout << endl << ptr->salary;
	return 0;
}
