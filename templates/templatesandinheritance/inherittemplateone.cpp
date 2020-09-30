

#include <iostream>
using namespace std;

template<typename T>
class clsTemplate
{
public:
    T value;
    clsTemplate(T i)
    {
        this->value = i;
    }
    void test()
    {
        cout << value << endl;
    }
};


class clsChild : public clsTemplate<char>
{
public:
    clsChild(/* no parameters */): clsTemplate<char>( 0 )  // default char is NUL
    {
        ;
    }

    clsChild(char c): clsTemplate<char>( c )
    {
        ;
    }
    void test2()
    {
        test();
    }
};


int main()
{
    clsTemplate <int> a( 42 );
    clsChild b( 'A' );

    a.test();   // should print "42"
    b.test();   // should print "A"
    b.test2();  // should print "A"

    return 0;
}
