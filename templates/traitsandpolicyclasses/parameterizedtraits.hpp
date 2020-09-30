
#ifndef ACCUM_HPP
#define ACCUM_HPP

#include "valuetraitsasinlinememberfuncdecl.hpp"

template <typename T, typename AT = AccumulationTraits<T> >
class Accum 
{
  public:
    static typename AT::AccT accum (T const* beg, T const* end) 
    {
        typename AT::AccT total = AT::zero();
        while (beg != end) {
            total += *beg;
            ++beg;
        }
        return total;
    }
};

#endif // ACCUM_HPP
