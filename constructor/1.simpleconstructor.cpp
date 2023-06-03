
#include <iostream>
using namespace std;

class sampleclass
{
    public:

    sampleclass()
    {
       cout << "\n" << "this is the constructor";
    }

    ~sampleclass()
    {
       cout << "\n" << "this is the destructor";
    }

    sampleclass (sampleclass &)
    {
      cout << "\n" << "this is the copy constructor getting called";
    }

    sampleclass &operator=(sampleclass &)
    {
       cout << "\n" << "this is the copy assignment operator getting called" << "\n";
       return *this;
    }
};

int main()
{

  sampleclass s1,s4;
  sampleclass s2(s1);
  sampleclass s3 = s4;  
  s3 = s4;
  cout << endl;
  return 0;
}
