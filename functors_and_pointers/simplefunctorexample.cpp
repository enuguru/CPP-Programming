
#include <iostream>
using namespace std;

class myFunctorClass
{
    public:
        myFunctorClass (int x) : _x( x ) { std::cout << "now we are in myFunctorClass constructor" << endl;}
        int operator() (int y) 
        { 
          std::cout << endl << "now we are in overloaded function call operator" << endl; 

           return _x + y; 
        }
    private:
        int _x;
};

 
int main()
{
    myFunctorClass addFive( 5 ); // in this case only the constructor is called
    int p = addFive( 6 );   // here the function call operator is called
    int m = addFive( p );   // here the function call operator is called
    std::cout << endl << m << endl;
 
    return 0;
}
