

#include "accum8.hpp"
#include <iostream>

template<typename T1, typename T2>
class MultPolicy {
  public:
    static void accumulate (T1& total, T2 const& value) {
        total *= value;
    }
};

int main()
{
    // create array of 5 integer values
    int num[] = { 1, 2, 3, 4, 5 };

    // print average value
    std::cout << "the average value of the integer values is "
              << Accum<int>::accum(&num[0], &num[5]) / 5
              << '\n';

    // print product of all values
    std::cout << "the product of the integer values is "
              << Accum<int,MultPolicy>::accum(&num[0], &num[5])
              << '\n';

    // create array of character values
    char name[] = "templates";
    int length = sizeof(name)-1;

    // (try to) print average character value
    std::cout << "the average value of the characters in \""
              << name << "\" is "
              << Accum<char>::accum(&name[0], &name[length]) / length
              << '\n';
}
