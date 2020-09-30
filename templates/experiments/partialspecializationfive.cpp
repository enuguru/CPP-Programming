
template <typename T, typename U> 
class Gadget
{
    void fun(U a) { }
};


template <typename T> 
class Gadget<T,int>
{
    void fun(int a);
};


// Error! Cannot specialize two template parameters of Gadget
// here it is ok, but in the next file partialspecializationsix.cpp it is not ok
template <typename T>
void Gadget<T,int>::fun(int a)
{

}


int main() 
{
    return 0;
}
