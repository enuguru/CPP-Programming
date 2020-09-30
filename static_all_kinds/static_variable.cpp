
#include <iostream>
using namespace std;

class something
{
public:
    static int svalue;

};

int something::svalue = 1; // initializer

int main()
{
     // something a; // a.svalue = 1;

    cout << "\n" << something::svalue << "\n";

}
