
template <typename T, typename U> 
class Gadget
{
    void fun(U a) { }
};


template <> 
class Gadget<char,int>
{
    void fun(int a);
};


// Error! Cannot specialize two template parameters of Gadget
// this is very interesting you can do partial specializatino or full specialization 
// with only one parameter 
// so template function specialization does not scale, this is what Andrei Alexandreu says in his
// book modern c++

template <>
void Gadget<char,int>::fun(int a)
{

}


int main() 
{
    return 0;
}
