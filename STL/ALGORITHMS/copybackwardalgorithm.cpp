
// algorithm, copy_backward()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
    vector <int> vec1, vec2;
    vector <int>::iterator Iter1, Iter2;
    int i;
    for(i = 10; i <= 15; i++)
        vec1.push_back(i);
    int j;
    for(j = 0; j <= 10; j++)
        vec2.push_back(j);
    cout<<"vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;
    cout<<"vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
    // to copy_backward the first 4 elements of vec1 into the middle of vec2
    copy_backward(vec1.begin(), vec1.begin() + 5, vec2.begin() + 5);
    cout<<"vec2 with vec1 insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
    // to shift the elements inserted into vec2 two positions to the right
    copy_backward(vec2.begin()+2, vec2.begin()+6, vec2.begin()+9);
    cout<<"vec2 with shifted insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
    return 0;
}
