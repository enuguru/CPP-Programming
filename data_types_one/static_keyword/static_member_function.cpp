
#include <iostream>
using namespace std;

class Something
{
private:
    static int s_value;
public:
    static int getValue() { return s_value; } // static member function
};
 
int Something::s_value{ 23 }; // initializer
 
int main()
{
    std::cout << Something::getValue() << '\n';
}
