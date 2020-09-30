

template <typename T> 
class Area
{
public:
   T a;

};


template <typename T>
class Rectangle : public Area <float>, public Area<double>
{

};


int main()
{
     Rectangle<int> obj;
     return 0;
}
