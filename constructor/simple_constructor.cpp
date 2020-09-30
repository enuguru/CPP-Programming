
#include <iostream>
using namespace std;

class child
{
public:
  int age;
  float weight;

child()
{
    age = 15;
    weight = 56.65;
}  

child(int x)
{
     age = x;
     weight = 45.35;
}

child(const child &m)
{
     age = m.age;
     weight = m.weight;
     cout << "Now we are in the copy constructor" << "\n";
}
   
};


int main()
{
   int p = 11;
   child BadriNarayanan;
   cout << "BadriNarayanan's age is" << BadriNarayanan.age << "\n";
   child karthik(p);
   cout << "Karthik's age is" << karthik.age << "\n";
   child chirag = karthik;
   cout << "Chirag's age is" << chirag.age << "\n";
   return 0;
} 
