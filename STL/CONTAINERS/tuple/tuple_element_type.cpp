

// this is a beautiful construct where you can access a particular
// tuple element's type

// the name of the construct is "std::tuple_element"

// tuple_element
#include <iostream>     // std::cout
#include <tuple>        // std::tuple, std::make_tuple, std::tuple_element, std::get

int main ()
{
  auto mytuple = std::make_tuple (10,'a');

  std::tuple_element<0,decltype(mytuple)>::type first = std::get<0>(mytuple);
  // this is like saying type first;  where first is of the type "tuple_element........"
  std::tuple_element<1,decltype(mytuple)>::type second = std::get<1>(mytuple);

  std::cout << "mytuple contains: " << first << " and " << second << '\n';

  return 0;
}
