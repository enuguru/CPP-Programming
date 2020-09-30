
#include <string>

// note: nonreference parameters
template <typename T>
inline T max (T a, T b)
{
    return  a < b  ?  b : a;
}

int main()
{
    std::string s;

    ::max("apple","peach");   // OK: same type
    ::max("apple","tomato");  // OK: decays to same type
//    ::max("apple",s);         // ERROR: different types
}
