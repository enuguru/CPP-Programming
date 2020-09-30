
#include <boost/smart_ptr/shared_ptr.hpp>
#include <iostream>
#include <memory>

class A{};

int main()
{
	boost::shared_ptr<A> pA(new A);

	std::cout << pA.get() << std::endl;

	boost::shared_ptr<A> pB(pA);

	std::cout << pA.get() << std::endl;
	std::cout << pB.get() << std::endl;

	return 0;
}
