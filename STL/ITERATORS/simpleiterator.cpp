
 // an iterator, a list container simple example
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // lst, list container for character elements
    list<char> lst;
    // append elements from 'A' to 'Z' to the list lst container
    for(char chs='A'; chs<='Z'; ++chs)
        lst.push_back(chs);
    // iterate over all elements and print, separated by space
    list<char>::const_iterator pos;
    for(pos = lst.begin(); pos != lst.end(); ++pos)
        cout<<*pos<<' ';
    cout<<endl;
    return 0;
}
