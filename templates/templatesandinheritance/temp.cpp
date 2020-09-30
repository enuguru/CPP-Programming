
template <typename T1, typename T2>
class Area
{
public:
   T1 a;
   T2 b;

};


template <typename T1, typename T2>
class Rectangle : public Area<T1,T2>
{

};


int main()
{
     Rectangle<int,float>  obj;
     return 0;
}
