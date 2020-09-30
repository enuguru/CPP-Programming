
// an iterator, a multimap container simple example
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // type of the collection
    multimap<int, string> mmp;
    // set container for int/string values insert some elements in arbitrary order
    // notice a value of key 1
    mmp.insert(make_pair(5,"learn"));
    mmp.insert(make_pair(2,"map"));
    mmp.insert(make_pair(1,"Testing"));
    mmp.insert(make_pair(7,"tagged"));
    mmp.insert(make_pair(4,"strings"));
    mmp.insert(make_pair(6,"iterator!"));
    mmp.insert(make_pair(1,"the"));
    mmp.insert(make_pair(3,"tagged"));
    // iterate over all elements and print, element member second is the value
    multimap<int, string>::iterator pos;
    for(pos = mmp.begin(); pos != mmp.end(); ++pos)
        cout<<pos->second<<' ';
    cout<<endl;
    return 0;
}
