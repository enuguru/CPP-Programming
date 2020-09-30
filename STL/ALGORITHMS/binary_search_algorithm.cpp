
// algorithm, binary_search()
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser(int elem1, int elem2)
{
   if(elem1 < 0)
      elem1 = - elem1;
   if(elem2 < 0)
      elem2 = - elem2;
   return (elem1 < elem2);
}


int main()
{
    list<int> lst;
    list<int>::iterator Iter;
    bool b1, b2;
    lst.push_back(13);
    lst.push_back(23);
    lst.push_back(10);
    lst.push_back(33);
    lst.push_back(35);
    lst.push_back(9);
    lst.sort();

    cout<<"List lst data: ";
    for(Iter = lst.begin(); Iter != lst.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;
    b1 = binary_search(lst.begin(), lst.end(), 10);
    if(b1)
        cout<<"\nThere is an element in list lst with\na value equal to 10."<<endl;
    else
        cout<<"\nThere is no element in list lst with\na value equal to 10."<<endl;
    b2 = binary_search(lst.begin(), lst.end(), 13, greater<int>());
    if(b2)
        cout<<"\nThere is an element in list lst with a\nvalue equivalent to 13 under greater than."<<endl;
    else
        cout<<"\nNo element in list lst with a\nvalue equivalent to 13 under greater than."<<endl;
    // a binary_search under the user-defined binary predicate mod_lesser
    vector <int> vec;
    vector <int>::iterator Iter1;
    int i;
    for(i = -3; i <= 5; i++)
        vec.push_back(i);
    sort(vec.begin(), vec.end(), mod_lesser);
    cout<<"\nOrdered under mod_lesser, vector vec data:\n";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;
    bool b3 = binary_search(vec.begin(), vec.end(), -2, mod_lesser);
    if(b3)
        cout<<"\nThere is an element with a value\nequivalent to -2 under mod_lesser()."<<endl;
    else
        cout<<"\nThere is no element with a value\nequivalent to -2 under mod_lesser()."<<endl;
    return 0;
}
