
#include <iostream>
using namespace std;

void funcone();
void functwo();            /*  Prototypes */
void functhree();

/* array with three functions */
void (*functptr[])() = { funcone, functwo, functhree } ;

int main()
{
   (*functptr[0])();    /*  Call first function  */
   (*functptr[1])();    /*  Call second function */
   (*functptr[2])();    /*  Call third function  */
   return 0;
}

void funcone()
{
   cout << "hello from funcone" << "\n";
}

void functwo()
{
   cout << "hello from functwo" << "\n";
}

void functhree()
{
   cout << "hello from functhree" << "\n";
}
