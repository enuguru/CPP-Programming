
#include <iostream>
using namespace std;

int main()
{
    int i=1, j=2, k=3;
    auto f =
        [i,&j,&k]() mutable
    {
        auto m =
        [&i,j,&k]() mutable
        {
            i=4;
            j=5;
            k=6;
        };
        m();
        cout << endl << i << j << k;
    };
    f();
    cout << " : " << i << j << k << endl;
    return 0;
}
