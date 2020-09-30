

/*

The major problem being solved using share_ptr is to know the correct time to delete a resource that is shared. The following example has two classes, A and B. The classes are sharing an instance of int, and store a shared_ptr<int>. When we create the instances of each class, the shared_ptr pTemp is passed to the constructors. In other words, all three shared_ptrs, are now referring to the same instance of an int. If we had used pointers to achieve such sharing of an int, each class would have had a hard time figuring out when it should be deleted. In the example, until the end of main(), the reference count is 3. If all of the pointers go out of scope, the reference count reaches 0, allowing the shared instance of int to be deleted.

shared_ptr holds an internal pointer to a resource such as a dynamically allocated object that may be shared with other objects in the program. We can have any number of shared_ptrs to the same resource. shared_ptr really does share the resource, if we change the resource with one shared_ptr, the changes also will be seen by the other shared_ptrs. The internal pointer is deleted once the last shared_ptr to the resource is destroyed. shared_ptr uses reference counting to determine how many shared_ptrs point to the resource. Each time a new shared_ptr to the resource is created, the reference count increases, and each time one is destroyed, the reference count decreases. When the reference count reaches zero, the internal pointer is deleted and the memory is released.

*/

#include <boost/smart_ptr/shared_ptr.hpp>
#include <iostream>
#include <memory>

class classA
{
	boost::shared_ptr<int> ptA;
public:
	classA(boost::shared_ptr<int> p) : ptA(p) {}
	void setValue(int n) {
		*ptA = n;
	}
};

class classB
{
	boost::shared_ptr<int> ptB;
public:
	classB(boost::shared_ptr<int> p) : ptB(p) {}
	int getValue() const {
		return *ptB;
	}
};

int main()
{
	boost::shared_ptr<int> pTemp(new int(2013));
	classA a(pTemp);
	classB b(pTemp);

	a.setValue(2014);
	std::cout << "b.getValue() = " << b.getValue() << std::endl;

	return 0;
}
