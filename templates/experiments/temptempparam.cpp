
#include <iostream>
using namespace std;

// template_specifications3.cpp

template <class T> 
struct str1
{
    T t;
};


template <template<typename A> class Templatetype> 
struct str2
{
    Templatetype<int> t;
};


int main()
{
    str2<str1> mystr2;
    mystr2.t.t = 5;
    cout << endl << mystr2.t.t << endl;
}
