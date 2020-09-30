
// char_traits::eq
#include <string>     // std::basic_string, std::char_traits
#include <cctype>     // std::tolower
#include <cstddef>    // std::size_t

#include <iostream>
#include <functional>
using namespace std;

template<
    typename T = int,
    typename Tr = std::char_traits<T>,
    typename Al = std::allocator<T>>
    class node{
    public:
      typedef std::basic_string<T, Tr, Al> string_type;
/* … */
};

/*template <typename T,
          template <typename ELEM,
                    typename = std::allocator<ELEM> >
                    class CONT = std::deque>

template <typename ELEM = int, typename = std:: allocator<ELEM> > 
class attCon;

*/
template<
    typename Ch = int,
    typename Tr = std::char_traits<Ch>,
    typename Al = std::allocator<Ch>,
          template <typename,
                    typename = std::allocator>
                    class CONT = std::deque>
    //template <typename ch = int, typename Tr = std::allocator<ch>> class attCon = vector> 
    class element : public node<Ch, Tr, Al>{
    //typedef typename attCon<attribute<Ch, Tr, Al>, Al::rebind<attribute<Ch, Tr, Al> >::other> attributeCon;
    //attributeCon attributes;
    /* … */
};


int main()
{
    return 0;
}
   
