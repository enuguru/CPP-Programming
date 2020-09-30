
#include <iostream>

template<
    typename Ch,
    typename Tr = std::char_traits<Ch>,
    typename Al = std::allocator<Ch> >
    class node{
public:
    typedef std::basic_string<Ch, Tr, Al> string_type;
/* … */
};


template<
    typename Ch,
    typename Tr = std::char_traits<Ch>,
    typename Al = std::allocator<Ch> >
    class element : public node<Ch, Tr, Al>{/* … */};

template<
    typename Ch,
    typename Tr = std::char_traits<Ch>,
    typename Al = std::allocator<Ch> >
    class textnode : public node<Ch, Tr, Al>{/* … */};

template<
    typename Ch,
    typename Tr = std::char_traits<Ch>,
    typename Al = std::allocator<Ch> >
    class attribute : public node<Ch, Tr, Al>{/* … */};


int main()
{
   element<int> obj1;
   textnode<int> obj2;
   attribute<int> obj3;
   return 0;
}
