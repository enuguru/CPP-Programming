
// an iterator, a multiset container example
#include <iostream>
#include <set>
using namespace std;

int main()
{
    // multiset container of int data type
    multiset<int> tst;
    // insert elements
    tst.insert(12);
    tst.insert(21);
    tst.insert(32);
    tst.insert(31);
    tst.insert(9);
    tst.insert(14);
    tst.insert(21);
    tst.insert(31);
    tst.insert(7);
    // iterate over all elements and print, separated by space
    multiset<int>::const_iterator pos;
    // pre-increment and pre-decrement are faster than post-increment and post-decrement...
    for(pos = tst.begin(); pos != tst.end(); ++pos)
        cout<<*pos<<' ';
    cout<<endl;
    return 0;
}
