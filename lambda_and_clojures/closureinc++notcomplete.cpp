
#include <functional>
#include <iostream>
using namespace std;

void some_function( int x ) { }

void function( int value ) {
    struct closure {
         std::function< void() > operator()( int value )
             { return [=](){ some_function( value ); }; }
    };

    auto a = closure()( value );
    auto b = closure()( 5 );

    cout << a();
    cout << b();
    cout << b();
}

void main()
{
    function(5);
}
