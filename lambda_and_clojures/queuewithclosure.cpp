
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

struct machine
{
    template< typename T >
    void add( T f )
    {
        to_do.push_back(f);
    }

    int run( int v )
    {
        std::for_each( to_do.begin(), to_do.end(),
                       [&v]( std::function<int(int)> f )
        {
            v = f(v);
        } );
        return v;
    }
    std::vector< std::function<int(int)> > to_do;
};


int foo(int i) 
{
    return i+4;
}


int main()
{
    machine m;
    m.add( [](int i) 
    {
        return i*3;
    });

    m.add( foo );
    m.add( [](int i) 
    {
        return i/5;
    });

    std::cout << "run(7) : " << m.run(7) << std::endl;

    return 0;
}
