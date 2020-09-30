

// array::rbegin/rend
#include <iostream>
#include <array>

int main ()
{
  std::array<int,4> myarray = {4, 26, 80, 14} ;

  std::cout << "myarray contains:";
  for ( auto rit=myarray.rbegin() ; rit < myarray.rend(); ++rit )
    std::cout << ' ' << *rit;

  std::cout << '\n';

  return 0;
}
