

// C++ STL algorithm, merge()
#include <vector>
#include <algorithm>
// for greater<int>()
#include <functional>
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



int main(void)
{

// containers

    vector <int> vec1a, vec1b, vec1(12);
// iterators
    vector <int>::iterator Iter1a, Iter1b, Iter1;
    int i, j;

// constructing vector vec1a and vec1b with default less than ordering
// pushing data
    for(i = 0; i <= 5; i++)
        vec1a.push_back(i);

    for(j =-5; j <= 0; j++)

        vec1b.push_back(j);



// printing data

    cout<<"vec1a vector data with range sorted by the binary predicate less than is: ";

    for(Iter1a = vec1a.begin(); Iter1a != vec1a.end(); Iter1a++)

        cout<<*Iter1a<<" ";

    cout<<endl;

    cout<<"vec1b vector data with range sorted by the binary predicate less than is: ";

    for(Iter1b = vec1b.begin(); Iter1b != vec1b.end(); Iter1b++)

        cout<<*Iter1b<<" ";

    cout<<endl;

// constructing vector vec2 with ranges sorted by greater

    vector <int> vec2a(vec1a), vec2b(vec1b), vec2(vec1);

    vector <int>::iterator Iter2a, Iter2b, Iter2;

    sort(vec2a.begin(), vec2a.end(), greater<int>());

    sort(vec2b.begin(), vec2b.end(), greater<int>());

    cout<<"vec2a vector data with range sorted by the binary predicate greater is: ";

    for(Iter2a = vec2a.begin(); Iter2a != vec2a.end(); Iter2a++)

        cout<<*Iter2a<<" ";

    cout<<endl;

    cout<<"vec2b vector data with range sorted by the binary predicate greater is: ";

    for(Iter2b = vec2b.begin(); Iter2b != vec2b.end(); Iter2b++)

        cout<<*Iter2b<<" ";

    cout<<endl;

// constructing vector vec3 with ranges sorted by mod_lesser

    vector <int> vec3a(vec1a), vec3b(vec1b), vec3(vec1);

    vector <int>::iterator Iter3a, Iter3b, Iter3;

    sort(vec3a.begin(), vec3a.end(), mod_lesser);

    sort(vec3b.begin(), vec3b.end(), mod_lesser);

    cout<<"vec3a vector data with range sorted by the binary predicate mod_lesser is: ";

    for(Iter3a = vec3a.begin(); Iter3a != vec3a.end(); Iter3a++)

        cout<<*Iter3a<<" ";

    cout<<endl;

    cout<<"vec3b vector data with range sorted by the binary predicate mod_lesser is: ";

    for(Iter3b = vec3b.begin(); Iter3b != vec3b.end(); Iter3b++)

        cout<<*Iter3b<<" ";

    cout<<endl;
// to merge in ascending order with default binary predicate less <int>()
    cout<<"\nOperation: merge(vec1a.begin(),vec1a.end(),vec1b.begin(),vec1b.end(),vec1.begin())"<<endl;
    merge(vec1a.begin(), vec1a.end(), vec1b.begin(), vec1b.end(), vec1.begin());
    cout<<"vec1merg vector data, merged with default order: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;
// to merge in descending order, specify binary predicate greater<int>()
    cout<<"\nOperation: merge(vec2a.begin(),vec2a.end(),vec2b.begin(),vec2b.end(),vec2.begin(),greater<int>())"<<endl;
    merge(vec2a.begin(), vec2a.end(), vec2b.begin(), vec2b.end(), vec2.begin(), greater<int>());
    cout<<"vec2merg vector data, merged with binary predicate greater() is: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
// applying a user-defined binary predicate mod_lesser
    cout<<"\nOperation: merge(vec3a.begin(),vec3a.end(), vec3b.begin(),vec3b.end(),vec3.begin(),mod_lesser)"<<endl;
    merge(vec3a.begin(), vec3a.end(), vec3b.begin(), vec3b.end(), vec3.begin(), mod_lesser);
    cout<<"vec3merg vector data, merged with binary predicate mod_lesser() is: ";
    for(Iter3 = vec3.begin(); Iter3 != vec3.end(); Iter3++)
        cout<<*Iter3<<" ";
    cout<<endl;
    return 0;
}
