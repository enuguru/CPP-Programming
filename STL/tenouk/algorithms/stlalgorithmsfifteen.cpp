
//algorithm, set_symmetric_difference()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>      
#include <iostream>
using namespace std;

//Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser(int elem1, int elem2)
{
   if(elem1 < 0) 
      elem1 = - elem1;
   if(elem2 < 0) 
      elem2 = - elem2;
   return (elem1 < elem2);
}

int main()
{
   vector <int> vec1a, vec1b, vec1(12);
   vector <int>::iterator Iter1a, Iter1b, Iter1, Result1;

   //Constructing vectors vec1a & vec1b with default less-than ordering
   int i;
   for(i = -4; i <= 4; i++)
     vec1a.push_back(i);
   
   int j;
   for(j =-3; j <= 3; j++)
     vec1b.push_back(j);
   
   cout<<"Original vector vec1a with range sorted by the\n"
	   <<"binary predicate less than is: ";
   for(Iter1a = vec1a.begin(); Iter1a != vec1a.end(); Iter1a++)
      cout<<*Iter1a<<" ";
   cout<<endl;

   cout<<"\nOriginal vector vec1b with range sorted by the\n"
	   <<"binary predicate less than is: ";
   for(Iter1b = vec1b.begin(); Iter1b != vec1b.end(); Iter1b++)
      cout<<*Iter1b<<" ";
   cout<<endl;
   
   //Constructing vectors vec2a & vec2b with ranges sorted by greater
   vector <int>vec2a(vec1a), vec2b(vec1b), vec2(vec1);
   vector <int>::iterator Iter2a, Iter2b, Iter2, Result2;
   sort(vec2a.begin(), vec2a.end(), greater<int>());
   sort(vec2b.begin(), vec2b.end(), greater<int>());

   cout<<"\nOriginal vector vec2a with range sorted by the\n"
	   <<"binary predicate greater is: ";
   for(Iter2a = vec2a.begin(); Iter2a != vec2a.end(); Iter2a++)
      cout<<*Iter2a<<" ";
   cout<<endl;

   cout<<"\nOriginal vector vec2b with range sorted by the\n"
	   <<"binary predicate greater is: ";
   for(Iter2b = vec2b.begin(); Iter2b != vec2b.end(); Iter2b++)
      cout<<*Iter2b<<" ";
   cout<<endl;

   //Constructing vectors vec3a & vec3b with ranges sorted by mod_lesser()
   vector<int>vec3a(vec1a), vec3b(vec1b), vec3(vec1);
   vector<int>::iterator Iter3a, Iter3b, Iter3, Result3;
   sort(vec3a.begin(), vec3a.end(), mod_lesser);
   sort(vec3b.begin(), vec3b.end(), mod_lesser);

   cout<<"\nOriginal vector vec3a with range sorted by the\n"
	   <<"binary predicate mod_lesser() is: ";
   for(Iter3a = vec3a.begin(); Iter3a != vec3a.end(); Iter3a++)
      cout<<*Iter3a<<" ";
   cout<<endl;

   cout<<"\nOriginal vector vec3b with range sorted by the\n"
	   << "binary predicate mod_lesser() is: ";
   for(Iter3b = vec3b.begin(); Iter3b != vec3b.end(); Iter3b++)
      cout<<*Iter3b<<" ";
   cout<<endl;

   //To combine into a symmetric difference in ascending
   //order with the default binary predicate less <int>()
   Result1 = set_symmetric_difference(vec1a.begin(), vec1a.end(),
      vec1b.begin(), vec1b.end(), vec1.begin());
   cout<<"\nset_symmetric_difference() of source ranges with default order,"
	   <<"\nvector vec1mod: ";
   for(Iter1 = vec1.begin(); Iter1 != Result1; Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To combine into a symmetric difference in descending
   //order, specify binary predicate greater<int>()
   Result2 = set_symmetric_difference(vec2a.begin(), vec2a.end(),
      vec2b.begin(), vec2b.end(), vec2.begin(), greater<int>());
   cout<<"\nset_symmetric_difference() of source ranges with binary "
	   <<"predicate\ngreater specified, vector vec2mod: ";
   for(Iter2 = vec2.begin(); Iter2 != Result2; Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   //To combine into a symmetric difference applying a user
   //defined binary predicate mod_lesser
   Result3 = set_symmetric_difference(vec3a.begin(), vec3a.end(),
      vec3b.begin(), vec3b.end(), vec3.begin(), mod_lesser);
   cout<<"\nset_symmetric_difference() of source ranges with binary "
	   <<"predicate\nmod_lesser() specified, vector vec3mod: ";
   for(Iter3 = vec3.begin(); Iter3 != Result3; Iter3++)
      cout<<*Iter3<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, set_union()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>
#include <iostream>
using namespace std;

//Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser(int elem1, int elem2)
{
   if(elem1 < 0) 
      elem1 = - elem1;
   if(elem2 < 0) 
      elem2 = - elem2;
   return (elem1 < elem2);
}

int main()
{
   vector<int> vec1a, vec1b, vec1(12);
   vector<int>::iterator Iter1a, Iter1b, Iter1, Result1;

   //Constructing vectors vec1a & vec1b with default less than ordering
   int i;
   for(i = -3; i <= 3; i++)
     vec1a.push_back(i);
   
   int j;
   for(j =-3; j <= 3; j++)
     vec1b.push_back(j);
   
   cout<<"Original vector vec1a with range sorted by the\n"
	   <<"binary predicate less than is: ";
   for(Iter1a = vec1a.begin(); Iter1a != vec1a.end(); Iter1a++)
      cout<<*Iter1a<<" ";
   cout<<endl;

   cout<<"\nOriginal vector vec1b with range sorted by the\n"
	   <<"binary predicate less than is: ";
   for(Iter1b = vec1b.begin(); Iter1b != vec1b.end(); Iter1b++)
      cout<<*Iter1b<<" ";
   cout<<endl;
   
   //Constructing vectors vec2a & vec2b with ranges sorted by greater
   vector <int>vec2a(vec1a), vec2b(vec1b), vec2(vec1);
   vector <int>::iterator Iter2a, Iter2b, Iter2, Result2;
   sort(vec2a.begin(), vec2a.end(), greater<int>());
   sort(vec2b.begin(), vec2b.end(), greater<int>());

   cout<<"\nOriginal vector vec2a with range sorted by the\n"
	   <<"binary predicate greater is: ";
   for(Iter2a = vec2a.begin(); Iter2a != vec2a.end(); Iter2a++)
      cout<<*Iter2a<<" ";
   cout<<endl;

   cout<<"\nOriginal vector vec2b with range sorted by the\n"
	   <<"binary predicate greater is: ";
   for(Iter2b = vec2b.begin(); Iter2b != vec2b.end(); Iter2b++)
      cout<<*Iter2b<<" ";
   cout<<endl;

   //Constructing vectors vec3a & vec3b with ranges sorted by mod_lesser()
   vector <int>vec3a(vec1a), vec3b(vec1b), vec3(vec1);
   vector <int>::iterator Iter3a, Iter3b, Iter3, Result3;
   sort(vec3a.begin(), vec3a.end(), mod_lesser);
   sort(vec3b.begin(), vec3b.end(), mod_lesser);

   cout<<"\nOriginal vector vec3a with range sorted by the\n"
	   <<"binary predicate mod_lesser() is: ";
   for(Iter3a = vec3a.begin(); Iter3a != vec3a.end(); Iter3a++)
      cout<<*Iter3a<<" ";
   cout<<endl;

   cout<<"\nOriginal vector vec3b with range sorted by the\n"
	   <<"binary predicate mod_lesser() is: ";
   for(Iter3b = vec3b.begin(); Iter3b != vec3b.end(); Iter3b++)
      cout<<*Iter3b<<" ";
   cout<<endl;

   //To combine into a union in ascending order with the default 
   //binary predicate less <int>()
   Result1 = set_union(vec1a.begin(), vec1a.end(),
      vec1b.begin(), vec1b.end(), vec1.begin());
   cout<<"\nset_union() of source ranges with default order,"
	   <<"\nvector vec1mod: ";
   for(Iter1 = vec1.begin(); Iter1 != Result1; Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To combine into a union in descending order, specify binary 
   //predicate greater<int>()
   Result2 = set_union(vec2a.begin(), vec2a.end(),
      vec2b.begin(), vec2b.end(), vec2.begin(), greater<int>());
   cout<<"\nset_union() of source ranges with binary predicate greater\n"
	   <<"specified, vector vec2mod: ";
   for(Iter2 = vec2.begin(); Iter2 != Result2; Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   //To combine into a union applying a user-defined
   //binary predicate mod_lesser
   Result3 = set_union(vec3a.begin(), vec3a.end(),
      vec3b.begin(), vec3b.end(), vec3.begin(), mod_lesser);
   cout<<"\nset_union() of source ranges with binary predicate\n"
	   <<"mod_lesser() specified, vector vec3mod: ";
   for(Iter3 = vec3.begin(); Iter3 != Result3; Iter3++)
      cout<<*Iter3<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, sort()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>      
#include <iostream>
using namespace std;

//Return whether first element is greater than the second
bool userdefgreater(int elem1, int elem2)
{return elem1 > elem2;}

int main()
{
   vector <int> vec1;  //container
   vector <int>::iterator Iter1;  //iterator

   int k;
   for(k = 0; k <= 15; k++)
      vec1.push_back(k);

   random_shuffle(vec1.begin(), vec1.end());

   cout<<"Original random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   sort(vec1.begin(), vec1.end());
   cout<<"\nSorted vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To sort in descending order, specify binary predicate
   sort(vec1.begin(), vec1.end(), greater<int>());
   cout<<"\nRe sorted (greater) vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //A user-defined binary predicate can also be used
   sort(vec1.begin(), vec1.end(), userdefgreater);
   cout<<"\nUser defined re sorted vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, sort_heap()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1, vec2;
   vector <int>::iterator Iter1, Iter2;

   int i;
   for(i = 1; i <= 10; i++)
    vec1.push_back(i);
   
   random_shuffle(vec1.begin(), vec1.end());

   cout<<"Random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Sort heap vec1 with default less-than ordering
   sort_heap(vec1.begin(), vec1.end());
   cout<<"\nThe sorted heap vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Make vec1 a heap with greater than ordering
   make_heap(vec1.begin(), vec1.end(), greater<int>());
   cout<<"\nThe greater than heaped version of vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   sort_heap(vec1.begin(), vec1.end(), greater<int>());
   cout<<"\nThe greater than sorted heap vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, stable_partition()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool greaterthan(int value )
{ return value > 5;}

int main() 
{
   vector <int> vec1, vec2;
   vector <int>::iterator Iter1, Iter2, result;

   int i;
   for(i = 0; i <= 10; i++)
     vec1.push_back(i);
   
   int j;
   for(j = 0; j <= 4; j++)
     vec1.push_back(3);
   
   random_shuffle(vec1.begin(), vec1.end());

   cout<<"Random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Partition the range with predicate greater than 5...
   result = stable_partition (vec1.begin(), vec1.end(), greaterthan);
   cout<<"\nThe partitioned set of elements in vec1 is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"\nThe first element in vec1 fail to satisfy the"
       <<"\npredicate greaterthan is:\n "<<*result<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, stable_sort()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>
#include <iostream>
using namespace std;

//Return whether first element is greater than the second
bool userdefgreater(int elem1, int elem2)
{ return elem1 > elem2;}

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   for (int i=10; i<=20; i++)
	   vec1.push_back(i);

   random_shuffle(vec1.begin(), vec1.end());
   cout<<"Random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   sort(vec1.begin(), vec1.end());
   cout<<"\nDefault sorted vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To sort in descending order, specify binary predicate
   sort(vec1.begin(), vec1.end(), greater<int>());
   cout<<"\nRe-sorted (greater) vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //A user-defined binary predicate can also be used
   sort(vec1.begin(), vec1.end(), userdefgreater);
   cout<<"\nUser defined re-sorted vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, swap()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool greaterthan(int value)
{return value > 5;}

int main() 
{
   vector <int> vec1, vec2;
   vector <int>::iterator Iter1, Iter2, result;

   int i;
   for(i = 10; i<= 20; i++)
     vec1.push_back(i);
   
   int j;
   for(j = 10; j <= 15; j++)
     vec2.push_back(j);
   
   cout<<"Vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"\nVector vec2 data is:\n";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   swap(vec1, vec2);

   cout<<"\nNow, vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"\nThen, vector vec2 data is:\n";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, swap_ranges()
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main() 
{
   vector <int> vec1;
   deque <int> deq1;
   vector <int>::iterator vec1Iter1;
   deque<int>::iterator deq1Iter;

   int i;
   for(i = 10; i <= 15; i++)
     vec1.push_back(i);
   
   int j;
   for(j =24; j <= 29; j++)
     deq1.push_back(j);
   
   cout<<"Vector vec1 data:\n";
   for(vec1Iter1 = vec1.begin(); vec1Iter1 != vec1.end(); vec1Iter1++)
      cout<<*vec1Iter1<<" ";
   cout<<endl;

   cout<<"\nDeque deq1 data:\n";
   for(deq1Iter = deq1.begin(); deq1Iter != deq1.end(); deq1Iter++)
      cout<<*deq1Iter<<" ";
   cout<<endl;

   swap_ranges(vec1.begin(), vec1.end(), deq1.begin());

   cout<<"\nAfter the swap_range(), vector vec1 data:\n";
   for(vec1Iter1 = vec1.begin(); vec1Iter1 != vec1.end(); vec1Iter1++)
      cout<<*vec1Iter1<<" ";
   cout<<endl;

   cout<<"\nAfter the swap_range() deque deq1 data:\n";
   for(deq1Iter = deq1.begin(); deq1Iter != deq1.end(); deq1Iter++)
      cout<<*deq1Iter<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, transform()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

//The function object multiplies an element by a Factor
template <class Type>
class MultValue
{
   private:
      //The value to multiply by
      Type Factor;
   public:
      //Constructor initializes the value to multiply by
      MultValue(const Type& _Val) : Factor(_Val) {}

      //The function call for the element to be multiplied
      int operator()(Type& elem) const 
      {return (elem * Factor);}
};

int main()
{
   vector <int> vec1, vec2(7), vec3(7);
   vector <int>::iterator Iter1, Iter2, Iter3;

   //Constructing vector vec1
   for(int i = -4; i <= 2; i++)
     vec1.push_back(i);
   
   cout<<"Original vector vec1 data: ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Modifying the vector vec1 in place
   transform(vec1.begin(), vec1.end(), vec1.begin(), MultValue<int>(2));
   cout<<"\nThe elements of the vector vec1 multiplied by 2 in place gives:"
	   <<"\nvec1mod data: ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Using transform() to multiply each element by a factor of 5
   transform(vec1.begin(), vec1.end(), vec2.begin(), MultValue<int>(5));
   
   cout<<"\nMultiplying the elements of the vector vec1mod\n"
	   <<"by the factor 5 & copying to vec2 gives:\nvec2 data: ";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   //The second version of transform used to multiply the 
   //elements of the vectors vec1mod & vec2 pairwise
   transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(), 
      multiplies<int>());
   
   cout<<"\nMultiplying elements of the vectors vec1mod and vec2 pairwise "
	   <<"gives:\nvec3 data: ";
   for(Iter3 = vec3.begin(); Iter3 != vec3.end(); Iter3++)
      cout<<*Iter3<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, unique()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

//Return whether modulus of elem1 is equal to modulus of elem2
bool mod_equal(int elem1, int elem2)
{
   if(elem1 < 0) 
      elem1 = - elem1;
   if(elem2 < 0) 
      elem2 = - elem2;
   return (elem1 == elem2);
};

int main()
{
   vector <int> vec1;
   vector <int>::iterator vec1_Iter1, vec1_Iter2, vec1_Iter3,
         vec1_NewEnd1, vec1_NewEnd2, vec1_NewEnd3;

   int i;
   for(i = 0; i <= 3; i++)
   {
      vec1.push_back(4);
      vec1.push_back(-4);
   }

   int j;
   for(j = 1; j <= 4; j++)
     vec1.push_back(8);
   
   vec1.push_back(9);
   vec1.push_back(9);
   
   cout<<"Vector vec1 data:\n";
   for(vec1_Iter1 = vec1.begin(); vec1_Iter1 != vec1.end(); vec1_Iter1++)
      cout<<*vec1_Iter1<<" ";
   cout<<endl;

   //Remove consecutive duplicates
   vec1_NewEnd1 = unique(vec1.begin(), vec1.end());

   cout<<"\nRemoving adjacent duplicates from vector vec1 gives:\n";
   for(vec1_Iter1 = vec1.begin(); vec1_Iter1 != vec1_NewEnd1; vec1_Iter1++)
      cout<<*vec1_Iter1<<" ";
   cout<<endl;

   //Remove consecutive duplicates under the binary predicate mod_equal()
   vec1_NewEnd2 = unique(vec1.begin(), vec1_NewEnd1, mod_equal);

   cout<<"\nRemoving adjacent duplicates from vector vec1 under\nthe"
	   <<"binary predicate mod_equal() gives:\n";
   for(vec1_Iter2 = vec1.begin(); vec1_Iter2 != vec1_NewEnd2; vec1_Iter2++)
      cout<<*vec1_Iter2<<" ";
   cout<<endl;

   //Remove elements if preceded by an element that was greater
   vec1_NewEnd3 = unique(vec1.begin(), vec1_NewEnd2, greater<int>());

   cout<<"\nRemoving adjacent elements satisfying the binary\n"
	   <<"predicate mod_equal() from vector vec1 gives:\n";
   for(vec1_Iter3 = vec1.begin(); vec1_Iter3 != vec1_NewEnd3; vec1_Iter3++)
      cout<<*vec1_Iter3<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, unique_copy()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

//Return whether modulus of elem1 is equal to modulus of elem2
bool mod_equal(int elem1, int elem2)
{
   if(elem1 < 0) 
      elem1 = - elem1;
   if(elem2 < 0) 
      elem2 = - elem2;
   return (elem1 == elem2);
};

int main()
{
   vector <int> vec1;
   vector <int>::iterator vec1_Iter1, vec1_Iter2,
         vec1_NewEnd1, vec1_NewEnd2;

   int i;
   for(i = 0; i <= 1; i++)
   {
      vec1.push_back(8);
      vec1.push_back(-8);
   }

   int j;
   for(j = 0; j <= 2; j++)
     vec1.push_back(5);
     
	vec1.push_back(9);
	vec1.push_back(9);

   int k;
   for(k = 0; k <= 5; k++)
     vec1.push_back(12);
      
   cout<<"Vector vec1 data is:\n";
   for(vec1_Iter1 = vec1.begin(); vec1_Iter1 != vec1.end(); vec1_Iter1++)
      cout<<*vec1_Iter1<<" ";
   cout<<endl;

   //Copy first half to second, removing consecutive duplicates
   vec1_NewEnd1 = unique_copy(vec1.begin(), vec1.begin() + 8, vec1.begin() + 8);

   cout<<"\nCopying the first half of the vector to the second half\n"
	   <<"while removing adjacent duplicates gives:\n";
   for(vec1_Iter1 = vec1.begin(); vec1_Iter1 != vec1_NewEnd1; vec1_Iter1++)
      cout<<*vec1_Iter1<<" ";
   cout<<endl;

   for(int l = 0; l <= 7; l++)
     vec1.push_back(10);
   
   //Remove consecutive duplicates under the binary predicate mod_equals
   vec1_NewEnd2 = unique_copy(vec1.begin(), vec1.begin() + 14, vec1.begin() + 14, mod_equal);

   cout<<"\nCopying the first half of the vector to the second half\n"
       <<"removing adjacent duplicates under mod_equal() gives\n";
   for(vec1_Iter2 = vec1.begin(); vec1_Iter2 != vec1_NewEnd2; vec1_Iter2++)
      cout<<*vec1_Iter2<<" ";
   cout<<endl;
}

------------------------------------------------------------------------------------------------

//algorithm, upper_bound()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>
#include <iostream>
using namespace std;

//Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser(int elem1, int elem2)
{
   if(elem1 < 0) 
      elem1 = - elem1;
   if(elem2 < 0) 
      elem2 = - elem2;
   return (elem1 < elem2);
}

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1, Result1;

   //Constructing vectors vec1a & vec1b with default less-than ordering
    for(int i = -2; i <= 4; i++)
     vec1.push_back(i);
   
   for(int j = -3; j <= 0; j++)
     vec1.push_back(j);
   
   sort(vec1.begin(), vec1.end());
   cout<<"Original vector vec1 data with range\nsorted by the"
	   <<" binary predicate less than is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
   
   //Constructing vectors vec2 with range sorted by greater
   vector <int> vec2(vec1);
   vector <int>::iterator Iter2, Result2;
   sort(vec2.begin(), vec2.end(), greater<int>());
   
   cout<<"\nOriginal vector vec2 data with range\nsorted by the"
	   <<" binary predicate greater is:\n";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   //Constructing vectors vec3 with range sorted by mod_lesser
   vector <int>vec3(vec1);
   vector <int>::iterator Iter3, Result3;
   sort(vec3.begin(), vec3.end(), mod_lesser);

   cout<<"\nOriginal vector vec3 data with range\nsorted by the"
	   <<" binary predicate mod_lesser is:\n";
   for(Iter3 = vec3.begin(); Iter3 != vec3.end(); Iter3++)
      cout<<*Iter3<<" ";
   cout<<endl;

   //upper_bound of -3 in vec1 with default binary predicate less <int>()
   Result1 = upper_bound(vec1.begin(), vec1.end(), -3);
   cout<<"\nThe upper_bound in vec1 for the element with a value of -3 is: "
       <<*Result1<<endl;

   //upper_bound of 2 in vec2 with the binary predicate greater <int>()
   Result2 = upper_bound(vec2.begin(), vec2.end(), 2, greater<int>());
   cout<<"\nThe upper_bound in vec2 for the element with a value of 2 is: "
       <<*Result2<<endl;

   //upper_bound of 3 in vec3 with the binary predicate mod_lesser
   Result3 = upper_bound(vec3.begin(), vec3.end(), 3, mod_lesser);
   cout<<"\nThe upper_bound in vec3 for the element with a value of 3 is: "
       <<*Result3<<endl;
}

-------------------------------------G++ on Linux/Fedora----------------------------------------------

//******algosort.cpp*********
//algorithm, sort()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>      
#include <iostream>
using namespace std;

//Return whether first element is greater than the second
bool userdefgreater(int elem1, int elem2)
{return elem1 > elem2;}

int main()
{
   vector <int> vec1;  //container
   vector <int>::iterator Iter1;  //iterator

   int k;
   for(k = 0; k <= 15; k++)
      vec1.push_back(k);

   random_shuffle(vec1.begin(), vec1.end());

   cout<<"Original random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   sort(vec1.begin(), vec1.end());
   cout<<"\nSorted vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To sort in descending order, specify binary predicate
   sort(vec1.begin(), vec1.end(), greater<int>());
   cout<<"\nRe sorted (greater) vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //A user-defined binary predicate can also be used
   sort(vec1.begin(), vec1.end(), userdefgreater);
   cout<<"\nUser defined re sorted vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}
