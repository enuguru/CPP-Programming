
// algorithm, adjacent_find()
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

// returns whether second element is twice the first
bool twice(int elem1, int elem2)
{    
    return (elem1 * 2 == elem2);    
}
 

int main()
{
    list<int> lst;
    list<int>::iterator Iter;
    list<int>::iterator result1, result2;
    // construct a list container
    lst.push_back(14);
    lst.push_back(17);
    lst.push_back(31);
    lst.push_back(31);
    lst.push_back(10);
    lst.push_back(20);
    cout << "List lst data: ";
    for(Iter = lst.begin(); Iter != lst.end(); Iter++)
        cout<<*Iter<< " ";
    cout<<endl<<endl;
    result1 = adjacent_find(lst.begin(), lst.end());
    if(result1 == lst.end())
        cout<<"There are not two adjacent elements that are equal."<<endl;
    else
        cout<<"There are two adjacent elements that are equal.\nThey have a value of "<<*(result1)<<endl;
    result2 = adjacent_find(lst.begin(), lst.end(), twice);
    if(result2 == lst.end())
        cout<<"\nThere are no two adjacent elements where the second is twice the first."<<endl;
    else
    {
        cout<<"\nThere are two adjacent elements\nwhere the second is twice the first.\nThey have values of "<<*(result2++);
        cout<<" & "<<*result2<<endl;
    }
    return 0;
}
