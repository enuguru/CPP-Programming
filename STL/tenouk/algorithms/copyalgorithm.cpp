
// algorithm, example
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    list<int> lst1;
    list<int>::iterator pos;
    vector<int> vec1;
    vector<int>::iterator pos1;
    // insert elements from 1 to 10
    for(int i=1; i<=10; ++i)
        lst1.push_back(i);
    // display data
    cout<<"The list lst1 data: ";
    for(pos=lst1.begin(); pos!=lst1.end(); pos++)
        cout<<*pos<<" ";
    cout<<endl;
    //resize destination to have enough room for the overwriting algorithm
    vec1.resize(lst1.size());
    // copy elements from first into second collection overwrites existing elements in destination
    copy(lst1.begin(), lst1.end(), // source
         vec1.begin()); //destination
    cout<<"\nThe vector vec1 data: ";
    for(pos1=vec1.begin(); pos1!=vec1.end(); pos1++)
        cout<<*pos1<<" ";
    cout<<endl;
    // create third collection with enough allocation initial size is passed as parameter
    deque<int> deq1(lst1.size());
    deque<int>::iterator pos2;
    // copy elements from first into third collection
    copy(lst1.begin(), lst1.end(), //source
         deq1.begin()); //destination
    cout<<"\nThe deque deq1 data: ";
    for(pos2=deq1.begin(); pos2!=deq1.end(); pos2++)
        cout<<*pos2<<" ";
    cout<<endl;
}
