
/*

We commonly want to capture state or access values outside
our function objects.
With a function object we use the constructor to populate state.

*/
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


struct mod
{
    mod(int m_ ) : modulus( m_ ) {}
    int operator()(int v_) {
        return v_ % modulus;
    }
    int modulus;
};

int main()
{
    vector<int> in;
    vector<int> out;
    for (int i=1; i<=6; i++)
        in.push_back (i*10); 
    for (int i=1; i<=6; i++)
        out.push_back (i*0); 
    int my_mod = 8;
    transform( in.begin(), in.end(), out.begin(), mod(my_mod) );
    return 0;
}
