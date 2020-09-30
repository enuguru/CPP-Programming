
/*

public member function
<deque>
std::deque::begin


iterator begin();
const_iterator begin() const;

Return iterator to beginning
Returns an iterator pointing to the first element in the deque container.

Notice that, unlike member deque::front, which returns a reference to the first element, this function returns a random access iterator pointing to it.

If the container is empty, the returned iterator value shall not be dereferenced.

Parameters
none

Return Value
An iterator to the beginning of the sequence container.

If the deque object is const-qualified, the function returns a const_iterator. Otherwise, it returns an iterator.

Member types iterator and const_iterator are random access iterator types (pointing to an element and to a const element, respectively).

Example
*/

// deque::begin
#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> mydeque;

  for (int i=1; i<=5; i++) mydeque.push_back(i);

  std::cout << "mydeque contains:";

  std::deque<int>::iterator it = mydeque.begin();

  while (it != mydeque.end())
    std::cout << ' ' << *it++;

  std::cout << '\n';

  return 0;
}

/*
Output:

mydeque contains: 1 2 3 4 5


Complexity
Constant.

Iterator validity
No changes.

Data races
The container is accessed (neither the const nor the non-const versions modify the container).
No contained elements are accessed by the call, but the iterator returned can be used to access or modify elements. Concurrently accessing or modifying different elements is safe.

Exception safety
No-throw guarantee: this member function never throws exceptions.
The copy construction or assignment of the returned iterator is also guaranteed to never throw.
*/
