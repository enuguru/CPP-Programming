
#ifndef ACCUM_HPP
#define ACCUM_HPP

#include "valuetraitsasinlinememberfuncdecl.hpp"
#include "sumpolicy1.hpp"

template <typename T,
          typename Policy = SumPolicy,
          typename Traits = AccumulationTraits<T> >
class Accum 
{
  public:
    typedef typename Traits::AccT AccT;
    static AccT accum (T const* beg, T const* end) 
    {
        AccT total = Traits::zero();
        while (beg != end) {
            Policy::accumulate(total, *beg);
            ++beg;
        }
        return total;
    }
};

#endif // ACCUM_HPP
