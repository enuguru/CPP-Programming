
#include <iostream>

template <int n>
struct Factorial 
{
    enum { value = n * Factorial<n - 1>::value };
};
 
template <>
struct Factorial<0> 
{
    enum { value = 1 };
};
 
int main()
{
	std::cout << "Factorial<5>::value = " << Factorial<5>::value << std::endl;	
}
