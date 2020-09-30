

template <class T> 
class Widget
{
public:
int fun(T) 
{ 

}
};

// OK: specialization of a member function of Widget
template <> 
int Widget<char>::fun(char)
{

}


/*
typename<typename T>
class Widget
{

};

 
template <typename T, typename U> 
class SmartPtr 
{

 
};

template <class U> 
class SmartPtr<Widget<int>, U> 
{ 

};

*/

int main() 
{
      Widget<int>obj;      
/*    SmartPtr<int, float> obj;   
      SmartPtr<float>newobj;
*/

    return 0;
}
