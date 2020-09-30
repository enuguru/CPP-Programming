
template <typename T, typename U> 
class Gadget
{
    void fun(U a) { }
};

template <typename U> 
class Gadget<char,U>
{
    void fun(U a);
};


// Error! Cannot partially specialize a member class of Gadget
template <typename U>
void Gadget<char,U>::fun(U a)
{

}

int main() 
{
      return 0;
}
