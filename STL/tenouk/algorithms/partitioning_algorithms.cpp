
//C++ STL algorithm, partition() program example

// in this program the values greater than 3 come up first and the values lesser than 
// or equal to 3 come up next, see that is the predicate function great returns only 
// values which are greater than 3
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// user defined
bool great(int value) {
    return value > 3;
}


int main(void)
{
// container
    vector <int> vec1, vec2;
// iterator
    vector <int>::iterator Iter1, Iter2;
    int i;

// push data
    for(i = 0; i <= 10; i++)
        vec1.push_back(i);

// print data
    cout<<"vec1 vector data is: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"\nOperation: random_shuffle(vec1.begin(), vec1.end())"<<endl;
    random_shuffle(vec1.begin(), vec1.end());

    cout<<"vec1 vector data is: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

// partition the range with predicate great
    cout<<"\nOperation: partition(vec1.begin(), vec1.end(), great)"<<endl;
    partition(vec1.begin(), vec1.end(), great);
    cout<<"The partitioned set of elements in vec1 vector is: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;
    return 0;
}


/*
Output examples:

vec1 vector data is: 0 1 2 3 4 5 6 7 8 9 10

Operation: random_shuffle(vec1.begin(), vec1.end())

vec1 vector data is: 10 1 9 2 0 5 7 3 4 6 8

Operation: partition(vec1.begin(), vec1.end(), great)

The partitioned set of elements in vec1 vector is: 10 8 9 6 4 5 7 3 0 2 1

Press any key to continue . . .
*/
