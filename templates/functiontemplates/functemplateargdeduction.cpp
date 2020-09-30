
template <typename T> 
inline T const& max (T const& a, T const& b)
{
    return  a < b ? b : a;
}


int main()
{
    max<double>(1.0, -3.0);  // explicitly specify template argument (no argument deduction)

    max(1.0, -3.0);          // template argument is implicitly deduced to be double (this is by argument
                             // deduction)

    max<int>(1.0, 3.0);      // the explicit <int> inhibits the deduction;
                             // hence the result has type int (here also no argument deduction)
}
