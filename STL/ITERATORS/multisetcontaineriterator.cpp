
// an iterator, a map container simple example
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // type of the collection
    map<int, string> mp;
    // set container for int/string values insert some elements in arbitrary order
    // notice a value with key 1...
    mp.insert(make_pair(5,"learn"));
    mp.insert(make_pair(2,"map"));
    mp.insert(make_pair(1,"Testing"));
    mp.insert(make_pair(7,"tagged"));
    mp.insert(make_pair(4,"strings"));
    mp.insert(make_pair(6,"iterator!"));
    mp.insert(make_pair(1,"the"));
    mp.insert(make_pair(3,"tagged"));
    // iterate over all elements and print, element member second is the value
    map<int, string>::iterator pos;
    for(pos = mp.begin(); pos != mp.end(); ++pos)
        cout<<pos->second<<' ';
    cout<<endl;
return 0;
}
