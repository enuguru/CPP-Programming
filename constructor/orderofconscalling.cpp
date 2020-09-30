
#include <iostream>
//using namespace std;

class A
{
    public:
    A() {  std::cout << "This is A constructor" << std::endl ; }
    ~A(){  std::cout << "This is A destructor" << std::endl  ; }
};


class B : public A
{
    public:
    B(){  std::cout << "This is B constructor" << std::endl ; }
    ~B(){  std::cout << "This is B destructor" << std::endl ; }
};
 
   
class C: public B
{
    public:
    C() {  std::cout << "This is C constructor" << std::endl ; }
    ~C(){  std::cout << "This is C destructor" << std::endl ; }
};

int main()
{
      C obj;
      return 0;
}
