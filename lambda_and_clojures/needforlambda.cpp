
/* lambda.cpp */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// assign a value to each element of a vector
void assign(int& v)
{
    static int n = 1;
    v = n++;
}

// print out each element
void print(int v)
{
    cout << v << " ";
}

int main()
{
    vector<int> vec(10);
    // output initial value of each element
    for_each(vec.begin(), vec.end(), print);
    cout << endl;
    // assign a value to each element of a vector
    for_each(vec.begin(), vec.end(), assign);
    // output updated value of each element
    for_each(vec.begin(), vec.end(), print);
    return 0;
}
