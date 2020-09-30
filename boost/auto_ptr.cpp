
/*
The auto_ptr has unusual characters: copying it whether via copy constructor or copy assignment operator sets it to null, and the copying pointer assumes ownership of the resource as we see in the example below:

*/

#include <iostream>
#include <memory>

using namespace std;
class A{};

int main()
{
	auto_ptr<A> pA(new A);

	cout << pA.get() << endl;

	auto_ptr<A> pB(pA);

	cout << pA.get() << endl;
	cout << pB.get() << endl;

	return 0;
}



/*

In the example, the get() method returns a pointer to the object pointed by the auto_ptr object, if any, or zero if it does not point to any object.

Note that the second output is null. So, in the copy constructor, pA transferred the ownership of A object to pB.

This behavior and the underlying requirement that resources managed by auto_ptrs must never have more than one auto_ptr pointing to them, means that auto_ptrs aren't the best way to handle resources which are dynamically allocated.

So, as an alternative to auto_ptr, we have a referencing-counting smart pointer. It keeps track of how many objects point to a particular resource and deletes the resource automatically when nothing is pointing to it.

By replacing auto_ptr with share_ptr, with an almost same code below, it produces the output we want to:

*/
