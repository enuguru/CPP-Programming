

#include <iostream>
#include <functional>
using namespace std;

int main()
{
    std::function<int(int)> f2;
    std::function<int(int)> f1 =
        [&](int i)
    {
        cout << i << " ";
        return f2(++i);
    };

    f2 = [&](int i)
    {
        cout << i << " ";
        if(i>5) {
            return f1(i-2);
        }
    };

    f1(6);
    return 0;
}

// output 6 7 5 6 4 5
