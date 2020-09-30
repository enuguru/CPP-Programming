
// C++ STL inserter iterators: back_inserter(), front_inserter() and inserter() program example
// C++ STL inserter iterator


#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;

int main(void)
{
// list container
    list<int> lst;
// list iterator
    list <int>::iterator lstIter;
// constructing a list, insert elements from 1 to 10 into the lst list
    for(int i=1; i<=10; ++i)
        lst.push_back(i);

// do some operation and print the list
    cout<<"Operation: lst.push_back(i)"<<endl;
    cout<<"lst list data: ";
    for(lstIter = lst.begin(); lstIter != lst.end(); lstIter++)
        cout<<*lstIter<<' ';
    cout<<endl;
// copy the elements of lst list into vec vector by appending them
//
// vector container
    vector<int> vec;
// vector iterator
    vector <int>::iterator Iter;

// copy() operation, from source to destination...

    copy(lst.begin(), lst.end(), back_inserter(vec)); // see this is the back inserter iterator
    cout<<"\nOperation: copy(lst.begin(), lst.end(), back_inserter(vec))"<<endl;

// print the result

    cout<<"vec vector data: ";
    for(Iter = vec.begin(); Iter != vec.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;

// copy the elements of lst list into deq deque by inserting them at the front and reverses the order 
// of the elements
// deque container
    deque<int> deq;

// deque iterator
    deque <int>::iterator deqIter;

// copy() operation
    copy(lst.begin(), lst.end(), front_inserter(deq)); // see this is the front inserter iterator
    cout<<"\nOperation: copy(lst.begin(), lst.end(), front_inserter(deq))"<<endl;

// print the data
    cout<<"deq deque data: ";
    for(deqIter = deq.begin(); deqIter != deq.end(); deqIter++)
        cout<<*deqIter<<" ";
    cout<<endl;

// copy elements of lst list into st set, only inserter that works for associative collections
// set container
    set<int> st;

// set iterator
    set<int>::iterator stIter;

// copy operation
    copy(lst.begin(), lst.end(), inserter(st, st.begin()));
    cout<<"\nOperation: copy(lst.begin(), lst.end(), inserter(st, st.begin()))"<<endl;

// print the data
    cout<<"st set data: ";
    for(stIter = st.begin(); stIter != st.end(); stIter++)
        cout<<*stIter<<" ";
    cout<<endl;
    return 0;
}

/*

Output examples:

Operation: lst.push_back(i)

lst list data: 1 2 3 4 5 6 7 8 9 10

Operation: copy(lst.begin(), lst.end(), back_inserter(vec))

vec vector data: 1 2 3 4 5 6 7 8 9 10

Operation: copy(lst.begin(), lst.end(), front_inserter(deq))

deq deque data: 10 9 8 7 6 5 4 3 2 1

Operation: copy(lst.begin(), lst.end(), inserter(st, st.begin()))

st set data: 1 2 3 4 5 6 7 8 9 10

*/
