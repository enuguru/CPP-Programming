

#include <iostream>
using namespace std;

int main()
{

int i = 10;
auto two_i = [=](){ i *= 2; return i; };
cout << "2i:" << two_i() << " i:" << i << endl;
    return 0;
}
