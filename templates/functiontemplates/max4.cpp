
// maximum of two values of any type
template <typename T>
inline T const& max (T const& a, T const& b)
{
    return  a < b ? b : a;
}

// maximum of three values of any type
template <typename T>
inline T const& max (T const& a, T const& b, T const& c)
{
    return max (max(a,b), c);  // uses the template version even for ints
}                              // because the following declaration comes
                               // too late:
// maximum of two int values
inline int const& max (int const& a, int const& b) 
{
    return  a < b ? b : a;
}

int main()
{


return 0;
}
