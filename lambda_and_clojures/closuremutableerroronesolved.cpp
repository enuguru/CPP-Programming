
#include <iostream>
using namespace std;

int main()
{
int i = 8;
auto f =
[i]() mutable
{
int j = 2;
auto m = [&i,j]()mutable{ i /= j; };
m();
cout << endl;
cout << "inner: " << i << endl;
};
f();
cout << "outer: " << i << endl;    
    return 0;
}
