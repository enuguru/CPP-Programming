

#include <iostream>
#include <typeinfo>
using namespace std;
 
template<class T, class U> 
class A {
public:
   int x;
};
 
template<class U> 
class A <int, U> {
public:
   short x;
};
 
template<template<class T, class U> class V> 
class B {
   V<int, char> i;
   V<char, char> j;
};
 
B<A> c;
 
int main() {
   cout << typeid(c.i.x).name() << endl;
   cout << typeid(c.j.x).name() << endl;
}
