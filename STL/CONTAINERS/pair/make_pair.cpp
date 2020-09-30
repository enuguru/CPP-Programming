
/*
function template

std::make_pair


template <class T1, class T2>
  pair<T1,T2> make_pair (T1 x, T2 y);

Construct pair object

Constructs a pair object with its first element set to x and its second element set to y.

The template types can be implicitly deduced from the arguments passed to make_pair.

pair objects can be constructed from other pair objects containing different types, 
if the respective types are implicitly convertible.


The behavior of this function template is the same as if defined as:

template <class T1,class T2>
pair<T1,T2> make_pair (T1 x, T2 y)
{
  return ( pair<T1,T2>(x,y) );
}

	


Parameters

x, y
    Values for the members first and second, respectively, of the pair object being constructed.


Return value
A pair object whose elements first and second are set to x and y respectivelly.
The template parameters can be implicitly deduced.

*/	

// make_pair example
#include <utility>      // std::pair
#include <iostream>     // std::cout

int main () {
  std::pair <int,int> foo;
  std::pair <int,int> bar;

  foo = std::make_pair (10,20);
  bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

  return 0;
}

	
/*
Output:


foo: 10, 20
bar: 10, 65


Data races
If either (or both) T1 or T2 is an rvalue reference type of a type supporting move semantics, its corresponding argument is modified.

Exception safety
The function provides the same level of guarantees to each object as provided by the corresponding element constructor.

See also

pair::pair
    Construct pair (public member function )

*/
