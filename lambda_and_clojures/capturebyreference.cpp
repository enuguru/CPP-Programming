
#include <iostream>
#include <vector>
using namespace std;


template< typename T >
void fill( vector<int> & v, T done )
{
int i = 0;
while( !done() )
{
v.push_back( i++ );
}
}

int main()
{
vector<int> stuff;
fill( stuff, [&]{ return stuff.size() >= 8; } ); // this & captures the variable stuff by reference
return 0;
}
