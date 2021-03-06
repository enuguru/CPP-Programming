
============================MODULE33=======================================
|                                                                         |
|  The program examples' source codes have been arranged in the same      |
|  order that appeared in the Tutorial. This is unedited and unverified   |
|  compilation. Published as is basis for educational, reacretional and   |
|  brain teaser purposes. All trademarks, copyrights and IPs, wherever    |
|  exist, are the sole property of their respective owner and/or          |
|  holder. Any damage or loss by using the materials presented in this    |
|  tutorial is USER responsibility. Part or full distribution,            |
|  reproduction and modification is granted to any body.                  |
|     Copyright 2003-2005 © Tenouk, Inc. All rights reserved.		  |
|          Distributed through http://www.tenouk.com			        |
|        		                                                        |
|									                    |
===========================================================================
Originally programs compiled using Borland C++. Examples compiled using
g++ are given at the end of every Module. For example if you want to
compile C++ codes using VC++/VC++ .Net, change the header file accordingly.
Just need some modification for the header files...:

-------------------------------------------------
#include <iostream.h>
//for system()
#include <stdlib.h>

...
{
C++ codes...
}
-------------------------------------------------
should be changed to:
-------------------------------------------------
#include <iostream>
//use C++ wrapper to call C functions from C++ programs...
#include <cstdlib>
using namespace std;

...
{
C++ codes...
}
-------------------------------------------------
In VC++/VC++ .Net the iostream.h (header with .h) is not valid anymore.
It should be C++ header, <iostream> so that it comply to the standard.
In older Borland C++ compiler this still works, but not proper any more...
and for standard C/C++ the portability should be no problem or better
you read Module23 at http://www.tenouk.com/Module23.html to get
the big picture...For C codes, they still C codes :o)
=========================================================================
============================HERE, ALL C++ codes==========================

//simple algorithm example
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
//declare a vector and the iterator
vector<int> vec;
vector<int>::iterator pos;

//insert elements from 1 to 6 in arbitrary order
vec.push_back(7);
vec.push_back(4);
vec.push_back(8);
vec.push_back(0);
vec.push_back(12);
vec.push_back(9);

//print the vector...
cout<<"The original vector: ";
for(pos = vec.begin(); pos != vec.end(); pos++)
cout<<*pos<< " ";
cout<<endl;

//find and print minimum and maximum elements
pos = min_element(vec.begin(), vec.end());
cout<<"\nThe minimum element's value: "<<*pos<<endl;

pos = max_element(vec.begin(), vec.end());
cout<<"\nThe maximum element's value: "<<*pos<<endl<<endl;

//sort algorithm, sort all elements
sort(vec.begin(), vec.end());

//print the vector...
cout<<"The sorted vector: ";
for(pos = vec.begin(); pos != vec.end(); pos++)
cout<<*pos<< " ";
cout<<endl<<endl;

cout<<"Find value of 8, then reverse the order: ";
//find algorithm, find the first element with value 8
pos = find(vec.begin(), vec.end(), 8); 

//reverse algorithm, reverse the order of the 
//found element with value 8 and all the following elements
reverse(pos, vec.end());

//print all elements
for(pos=vec.begin(); pos!=vec.end(); ++pos)
cout<<*pos<<' ';
cout << endl;
}

--------------------------------------------------------------------------------------

//algorithm, example
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
list<int> lst1;
list<int>::iterator pos;
vector<int> vec1;
vector<int>::iterator pos1;

//insert elements from 1 to 10
for(int i=1; i<=10; ++i)
lst1.push_back(i);

//display data
cout<<"The list lst1 data: ";
for(pos=lst1.begin(); pos!=lst1.end(); pos++)
cout<<*pos<<" ";
cout<<endl;

//resize destination to have enough
//room for the overwriting algorithm
vec1.resize(lst1.size());

//copy elements from first into second collection
//overwrites existing elements in destination
copy(lst1.begin(), lst1.end(), //source
vec1.begin()); //destination

cout<<"\nThe vector vec1 data: ";
for(pos1=vec1.begin(); pos1!=vec1.end(); pos1++)
cout<<*pos1<<" ";
cout<<endl;

//create third collection with enough allocation
//initial size is passed as parameter
deque<int> deq1(lst1.size());
deque<int>::iterator pos2;

//copy elements from first into third collection
copy(lst1.begin(), lst1.end(), //source
deq1.begin()); //destination

cout<<"\nThe deque deq1 data: ";
for(pos2=deq1.begin(); pos2!=deq1.end(); pos2++)
cout<<*pos2<<" ";
cout<<endl;
}

--------------------------------------------------------------------------------------

//Algorithm, simple example
#include <iostream>
#include <list>
#include <algorithm>
//for abs()
#include <cstdlib>
using namespace std;

//predicate, which returns whether an integer is a prime number
bool isPrimeNum(int number)
{
//ignore negative sign
number = abs(number);

//0 and 1 are prime numbers
if(number == 0 || number == 1)
{
return true;
}

//find divisor that divides without a remainder
int divisor;
for(divisor = (number/2); (number%divisor) != 0; --divisor)
{;}

//if no divisor greater than 1 is found, it is a prime number
return divisor == 1;
}

int main()
{
list<int> lst1;

//insert elements from 24 to 30
for(int i=10; i<=20; ++i)
lst1.push_back(i);

//search for prime number
list<int>::iterator pos;

cout<<"The list lst1 data:\n";
for(pos=lst1.begin(); pos!=lst1.end(); pos++)
cout<<*pos<<" ";
cout<<endl<<endl;

pos = find_if(lst1.begin(), lst1.end(), //range
isPrimeNum); //predicate

if(pos != lst1.end())
{
//found
cout<<*pos<<" is the first prime number found"<<endl;
}
else {
//not found
cout<<"no prime number found"<<endl;
}
}

----------------------------------------G++----------------------------------------------

//********algo.cpp*********
//algorithm, example
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
list<int> lst1;
list<int>::iterator pos;
vector<int> vec1;
vector<int>::iterator pos1;

//insert elements from 1 to 10
for(int i=1; i<=10; ++i)
lst1.push_back(i);

//display data
cout<<"The list lst1 data: ";
for(pos=lst1.begin(); pos!=lst1.end(); pos++)
cout<<*pos<<" ";
cout<<endl;

//resize destination to have enough
//room for the overwriting algorithm
vec1.resize(lst1.size());

//copy elements from first into second collection
//overwrites existing elements in destination
copy(lst1.begin(), lst1.end(), //source
vec1.begin()); //destination

cout<<"\nThe vector vec1 data: ";
for(pos1=vec1.begin(); pos1!=vec1.end(); pos1++)
cout<<*pos1<<" ";
cout<<endl;

//create third collection with enough allocation
//initial size is passed as parameter
deque<int> deq1(lst1.size());
deque<int>::iterator pos2;

//copy elements from first into third collection
copy(lst1.begin(), lst1.end(), //source
deq1.begin()); //destination

cout<<"\nThe deque deq1 data: ";
for(pos2=deq1.begin(); pos2!=deq1.end(); pos2++)
cout<<*pos2<<" ";
cout<<endl;
}

=====================================================================================
