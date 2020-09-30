
template<class T, int I>  // primary template
struct A 
{
    void f(); // member declaration
};

 
template<class T, int I>
void A<T,I>::f() { } // primary template member definition

 
// partial specialization
template<class T>
struct A<T,2> 
{
    void f();
    void g();
    void h();
};

 
// member of partial specialization
template<class T>
void A<T,2>::g() { }


 
// explicit (full) specialization
// of a member of partial specialization
template<>
void A<char,2>::h() {}
 
int main() 
{
    A<char,0> a0;
    A<char,2> a2;
    a0.f(); // OK, uses primary template’s member definition
    a2.g(); // OK, uses partial specialization's member definition
    a2.h(); // OK, uses fully-specialized definition of
            // the member of a partial specialization
    // a2.f(); // error: no definition of f() in the partial
            // specialization A<T,2> (the primary template is not used)
    return 0;
}
