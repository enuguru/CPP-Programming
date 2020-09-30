
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<float> coll;    // deque container for floating-point elements

    // insert elements from 1.1 to 6.6 each at the front
    for (int i=1; i<=6; ++i) 
    {
        coll.push_front(i*1.1);      // insert at the front
    }

    // print all elements followed by a space
    for (int i=0; i<coll.size(); ++i) 
    {
        cout << coll[i] << ' ';
    }
    cout << endl;
}
