
#include "objectcounter.hpp"
#include <iostream>

template <typename CharT>
class MyString : public ObjectCounter<MyString<CharT> > {
  //...
};

int main()
{
    MyString<char> s1, s2;
    MyString<wchar_t> ws;

    std::cout << "number of MyString<char>:    " 
              << MyString<char>::live() << std::endl;
    std::cout << "number of MyString<wchar_t>: " 
              << ws.live() << std::endl;
}
