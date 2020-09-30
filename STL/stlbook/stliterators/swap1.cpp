
#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"
using namespace std;

int main()
{
    list<int> coll;

    // insert elements from 1 to 9
    for (int i=1; i<=9; ++i) {
        coll.push_back(i);
    }

    PRINT_ELEMENTS(coll);

    // swap first and second value
    iter_swap (coll.begin(), ++coll.begin());

    PRINT_ELEMENTS(coll);

    // swap first and last value
    iter_swap (coll.begin(), --coll.end());

    PRINT_ELEMENTS(coll);
}
