
#ifndef ACCUM_HPP
#define ACCUM_HPP

template <typename T>
inline T accum (T const* beg, T const* end)
{
    T total = T();  // assume T() actually creates a zero value
    while (beg != end) {
        total += *beg;
        ++beg;
    }
    return total;
}

#endif // ACCUM_HPP
