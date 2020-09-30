
// a simple algorithm example

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // declare a vector and the iterator
    vector<int> vec;
    vector<int>::iterator pos;
    // insert elements from 1 to 6 in arbitrary order
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(0);
    vec.push_back(12);
    vec.push_back(9);
    // print the vector...
    cout<<"The original vector: ";
    for(pos = vec.begin(); pos != vec.end(); pos++)
        cout<<*pos<< " ";
    cout<<endl;
    // find and print minimum and maximum elements
    pos = min_element(vec.begin(), vec.end());
    cout<<"\nThe minimum element's value: "<<*pos<<endl;
    pos = max_element(vec.begin(), vec.end());
    cout<<"\nThe maximum element's value: "<<*pos<<endl<<endl;
    // sort algorithm, sort all elements
    sort(vec.begin(), vec.end());
    // print the vector...
    cout<<"The sorted vector: ";
    for(pos = vec.begin(); pos != vec.end(); pos++)
        cout<<*pos<< " ";
    cout<<endl<<endl;
    cout<<"Find value of 8, then reverse the order: ";
    // find algorithm, find the first element with value 8
    pos = find(vec.begin(), vec.end(), 8);
    // reverse algorithm, reverse the order of the found element with value 8 and all the following elements
    reverse(pos, vec.end());
    // print all elements
    for(pos=vec.begin(); pos!=vec.end(); ++pos)
        cout<<*pos<<' ';
    cout << endl;
}

 
