
// iterator, advance()
#include <iterator>
#include <list>
#include <iostream>
using namespace std;
int main()
{
    int i;
    list<int> lst;
    for(i = 1; i <= 10; ++i)
        lst.push_back(i);
    list<int>::iterator lstIter, lstpos = lst.begin();
    cout<<"The lst list data: ";
    for(lstIter = lst.begin(); lstIter != lst.end(); lstIter++)
        cout<<*lstIter<<" ";
    cout<<endl;
    cout<<"The the first element pointed by iterator lstpos is: "<<*lstpos<<endl;
    advance(lstpos, 5);
    cout<<"Advanced lstpos 5 steps forward pointing to the "<<*lstpos<<endl;
    advance(lstpos, -4);
    cout<<"Moved lstpos 4 steps backward pointing to the "<<*lstpos<<endl;
    advance(lstpos, 8);
    cout<<"Finally, the last element pointed by iterator lstpos is: "<<*lstpos<<endl;
    return 0;
}
