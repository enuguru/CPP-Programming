
#include <iostream>
using namespace std;

class Something
{
public:
    static int s_value;
};
 
int Something::s_value { 1 };
 
int main()
{
    Something first;
    Something second;
 
    first.s_value = 2;
 
    std::cout << first.s_value << '\n';
    std::cout << second.s_value << '\n';
    return 0;
}
