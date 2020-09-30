
#include <iostream>
using namespace std;


// members_of_class_templates1.cpp
// compile with: /c
template <typename T, int i> 
class TempClass {
   public:
   int MemberSet(T, int);
};

template <typename T, int i> 
int TempClass< T, i >::MemberSet( T a, int b ) {
   if( ( b >= 0 ) && (b < i) ) {
      return sizeof( a );
   }
   else
      return -1;
}

int main()
{
     int c,p; 
     p = 23; c = 20;
     TempClass<int,10>  obj;
     cout << endl << obj.MemberSet(c,p);
}
