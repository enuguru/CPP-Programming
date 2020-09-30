
// algorithm, count()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
    vector <int> vec;
    vector <int>::iterator Iter;
    vec.push_back(12);
    vec.push_back(22);
    vec.push_back(12);
    vec.push_back(31);
    vec.push_back(12);
    vec.push_back(33);
    cout<<"vec data: ";
    for(Iter = vec.begin(); Iter != vec.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;
    int result;
    cout<<"\nOperation: count(vec.begin(), vec.end(), 12)\n";
    result = count(vec.begin(), vec.end(), 12);
    cout<<"The number of 12s in vec is: "<<result<<endl;
    return 0;
}
