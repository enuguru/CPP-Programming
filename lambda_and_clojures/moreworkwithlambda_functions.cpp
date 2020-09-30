
#include <iostream>
#include <vector>
#include <algorithm>

void foo() { std::cout << "foo()\n"; }
void bar() { std::cout << "bar()\n"; }

int main ()
{
	// 1st lambda function
	auto f  = []() {
		foo();
		bar();
	};
	// the lambda function does something here
	f();

        // 2nd lambda function
	std::vector<int> v(5, 99);  // this vector stores '99'  5 times
	std::for_each(v.begin(), v.end(), [](int i){std::cout << i << "\n";});

	return 0;
}
