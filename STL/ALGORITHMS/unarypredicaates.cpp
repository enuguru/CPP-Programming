 
// algorithm, a simple example, finding prime numbers
#include <iostream>
#include <list>
#include <algorithm>
// for abs()
#include <cstdlib>
using namespace std;

// a predicate, which returns whether an integer is a prime number
bool isPrimeNum(int number)
{
    // ignore negative sign
    number = abs(number);
    // 0 and 1 are prime numbers
    if(number == 0 || number == 1)
    {
return true;
    }
    // find divisor that divides without a remainder
    int divisor;
    for(divisor = (number/2); (number%divisor) != 0; --divisor)
    {;}
    
    // if no divisor greater than 1 is found, it is a prime number
    return divisor == 1;
}

 

int main()
{
    list<int> lst1;
    // insert elements from 24 to 30
    for(int i=10; i<=20; ++i)
    lst1.push_back(i);
    // search for prime number
    list<int>::iterator pos;
    cout<<"The list lst1 data:\n";
    for(pos=lst1.begin(); pos!=lst1.end(); pos++)
        cout<<*pos<<" ";
    cout<<endl<<endl;
    pos = find_if(lst1.begin(), lst1.end(), //range
    isPrimeNum); //predicate
    if(pos != lst1.end())
    {
        // found
        cout<<*pos<<" is the first prime number found"<<endl;
    }
    else {
    // not found
    cout<<"no prime number found"<<endl;
}

} 
