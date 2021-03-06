
//algorithm, push_heap()
//make_heap()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   int i;
   for(i = 1; i <= 10; i++)
     vec1.push_back(i);
   
   random_shuffle(vec1.begin(), vec1.end());

   cout<<"Given vector vec1 data: ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Make vec1 a heap with default less than ordering
   cout<<"\nmake_heap()..."<<endl;
   make_heap(vec1.begin(), vec1.end());
   cout<<"The default heaped version of vector vec1:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Add elements to the heap
   cout<<"\npush_back() some data...\n";
   vec1.push_back(11);
   vec1.push_back(12);
   cout<<"The new heap vec1 with data pushed back:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"\npush_heap()...."<<endl;
   push_heap(vec1.begin(), vec1.end());
   cout<<"The default reheaped vec1 with data added is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Make vec1 a heap with greater than ordering
   cout<<"\nmake_heap()..."<<endl;
   make_heap(vec1.begin(), vec1.end(), greater<int>());
   cout<<"The greater than heaped version of vec1 data:\n ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
   
   cout<<"\npush_back()..."<<endl;
   vec1.push_back(0);
   cout<<"The greater than heap vec1 with 13 pushed back is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
   
   cout<<"\npush_heap()...."<<endl;
   push_heap(vec1.begin(), vec1.end(), greater<int>());
   cout<<"The greater than reheaped vec1 with 13 added is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, random_shuffle()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   int i;
   for(i = 1; i <= 10; i++)
     vec1.push_back(i);
   cout<<"The original of vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;
   
   //random shuffle…
   random_shuffle(vec1.begin(), vec1.end());
   cout<<"The original of vector vec1 random shuffle data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Shuffled once
   random_shuffle(vec1.begin(), vec1.end());
   push_heap(vec1.begin(), vec1.end());
   cout<<"Vector vec1 after reshuffle is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Shuffled again
   random_shuffle(vec1.begin(), vec1.end());
   push_heap(vec1.begin(), vec1.end());
   cout<<"Vector vec1 after another reshuffle is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, remove()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1, new_end;

   int i;
   for(i = 1; i <= 10; i++)
   vec1.push_back(i);
   
   int j;
   for(j = 0; j <= 2; j++)
     vec1.push_back(8);

   cout<<"Vector vec1 original data: is\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   random_shuffle(vec1.begin(), vec1.end());
   cout<<"Vector vec1 random shuffle data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Remove elements with a value of 8
   new_end = remove(vec1.begin(), vec1.end(), 8);

   cout<<"Vector vec1 data with value 8 removed is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //using erase, to change the sequence size
   vec1.erase(new_end, vec1.end());

   cout<<"Vector vec1 resized data with value 8 removed is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, remove_copy()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1, vec2(10);
   vector <int>::iterator Iter1, Iter2, new_end;

   int i;
   for(i = 0; i <= 10; i++)
     vec1.push_back(i);
   
   int j;
   for(j = 0; j <= 2; j++)
     vec1.push_back(5);

   cout<<"The original vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   random_shuffle(vec1.begin(), vec1.end());
   cout<<"The original random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Remove elements with a value of 5
   new_end = remove_copy(vec1.begin(), vec1.end(), vec2.begin(), 5);

   cout<<"Vector vec1 is left unchanged as:\n"; 
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"Vector vec2 is a copy of vec1 with the value 5 removed:\n";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, remove_copy_if()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool greathan(int value)
{ return value >7;}

int main()
{
   vector <int> vec1, vec2(14);
   vector <int>::iterator Iter1, Iter2, new_end;

   int i;
   for(i = 0; i <= 10; i++)
    vec1.push_back(i);
   
   int j;
   for(j = 0; j <= 2; j++)
    vec1.push_back(5);
   
   cout<<"The original vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   random_shuffle(vec1.begin(), vec1.end());
   cout<<"The original random shuffle vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Remove elements with a value greater than 7
   new_end = remove_copy_if(vec1.begin(), vec1.end(), 
      vec2.begin(), greathan);

   cout<<"After the remove_copy_if() the vector,\n"
        <<" vec1 is left unchanged as ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"Vector vec2 is a copy of vec1 with values greater "
        <<"than 7 removed:\n";
   for(Iter2 = vec2.begin(); Iter2 != new_end; Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, remove_if()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool greathan(int value)
{return value >5;}

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1, new_end;

   int i;
   for(i = 0; i <= 9; i++)
     vec1.push_back(i);
   
   int j;
   for(j = 0; j <= 2; j++)
     vec1.push_back(4);

   cout<<"Original vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
   
   random_shuffle(vec1.begin(), vec1.end());
   cout<<"Random shuffle vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Remove elements satisfying predicate greater than
   new_end = remove_if(vec1.begin(), vec1.end(), greathan);

   cout<<"Vector vec1 with elements greater than 5 removed is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //using erase, to change the sequence size,
   vec1.erase(new_end, vec1.end());

   cout<<"Vector vec1 resized elements greater than 5 removed is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, replace()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   int i;
   for(i = 0; i <= 9; i++)
   vec1.push_back(i);
   
   int j;
   for(j = 0; j <= 2; j++)
   vec1.push_back(5);
      
   random_shuffle(vec1.begin(), vec1.end());
   cout<<"The original random shuffle vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Replace elements with other values…
   replace (vec1.begin( ), vec1.end( ), 3, 23);
   replace (vec1.begin( ), vec1.end( ), 7, 77);
   replace (vec1.begin( ), vec1.end( ), 0, 21);

   cout<<"The vector vec1 data with values replacement of 0, 3, 7 is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, replace_copy()
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   list <int> lst1 (15);
   vector <int>::iterator Iter1;
   list <int>::iterator lstIter;

   int i;
   for (i = 0; i <= 9; i++)
     vec1.push_back(i);
   
   int j;
   for (j = 0; j <= 3; j++)
     vec1.push_back(7);
     
   cout<<"The original vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   random_shuffle(vec1.begin(), vec1.end());
   int k;
   for (k = 0; k <= 15; k++)
     vec1.push_back(1);
   
   cout<<"The original random shuffle vector vec1 with appended data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Replace elements in one part of a vector with a value of 7
   //with a value of 70 and copy into another part of the vector
   replace_copy(vec1.begin(), vec1.begin() + 14, vec1.end( )-15, 7, 70);

   cout<<"The vector vec1 data with a replacement value of 7 is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Replace elements in a vector of a value 70
   //with a value of 1 and copy into a list
   replace_copy(vec1.begin(), vec1.begin() + 14, lst1.begin(), 70, 1);

   cout<<"The list copy lst1 of vec1 with the value 0 replacing the 7 is:\n";
   for(lstIter = lst1.begin(); lstIter != lst1.end(); lstIter++)
      cout<<*lstIter<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, replace_copy_if()
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

bool greaterthan(int value)
{return value > 5;}

int main()
{
   vector <int> vec1;
   list <int> lst1 (13);
   vector <int>::iterator Iter1;
   list <int>::iterator lstIter1;

   int i;
   for (i = 0; i <= 9; i++)
     vec1.push_back(i);
      int j;
   for (j = 0; j <= 3; j++)
     vec1.push_back(7);
   
   cout<<"The original vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   random_shuffle(vec1.begin(), vec1.end());

   int k;
   for(k = 0; k <= 13; k++)
     vec1.push_back(3);

   cout<<"The original random shuffle vector vec1 data with appended data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Replace elements with a value of 7 in the 1st half of a vector
   //with a value of 72 and copy it into the 2nd half of the vector
   replace_copy_if(vec1.begin(), vec1.begin() + 14, vec1.end() -14, greaterthan, 72);

   cout<<"The vector vec1 with values of 72 replacing those greater"
       <<"\n than 5 in the 1st half & copied into the 2nd half is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Replace elements in a vector with a value of 72
   //with a value of -8 and copy into a list
   replace_copy_if(vec1.begin(), vec1.begin() + 13, lst1.begin(), greaterthan, -8);

   cout<<"A list copy of vector vec1 with the value -8\n replacing "
        <<"those greater than 5 is:\n";
   for(lstIter1 = lst1.begin(); lstIter1 != lst1.end(); lstIter1++)
      cout<<*lstIter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, replace_if()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool greaterthan(int value)
{return value > 4;}

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   int i;
   for (i = 1; i <= 10; i++)
     vec1.push_back(i);
   
   int j;
   for (j = 0; j <= 2; j++)
      vec1.push_back(8);
      
   random_shuffle(vec1.begin(), vec1.end());
   cout<<"The original random shuffle vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Replace elements satisfying the predicate greaterthan
   //with a value of 21
   replace_if(vec1.begin(), vec1.end(), greaterthan, 21);

   cout<<"The vector vec1 with a value 21 replacing those\n "
       <<"elements satisfying the greater than 4 predicate is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, reverse()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   int i;
   for(i = 11; i <= 20; i++)
      vec1.push_back(i);
   
   cout<<"The original vector vec1 is:\n ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Reverse the elements in the vector 
   reverse(vec1.begin(), vec1.end());

   cout<<"The vector vec1 data with values reversed is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, reverse_copy()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1, vec2(11);
   vector <int>::iterator Iter1, Iter2;

   int i;
   for(i = 10; i <= 20; i++)
      vec1.push_back(i);
   
   cout<<"The original vector vec1 data is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Reverse the elements in the vector 
   reverse_copy(vec1.begin(), vec1.end(), vec2.begin());

   cout<<"The copy vec2 data of the reversed vector vec1 is:\n";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   cout<<"The original vector vec1 unmodified as:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, rotate()
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
   deque<int>::iterator deq1Iter1;

   int i;
   for(i = -4; i <= 4; i++)
      vec1.push_back(i);
   
   int j;
   for(j = -3; j <= 3; j++)
     deq1.push_back(j);
   
   cout<<"Vector vec1 data is: ";
   for(vec1Iter1 = vec1.begin(); vec1Iter1 != vec1.end(); vec1Iter1++)
      cout<<*vec1Iter1 <<" ";
   cout<<endl;

   //Let rotates...
   rotate(vec1.begin(), vec1.begin() + 3, vec1.end());
   cout<<"After rotating, vector vec1 data is: ";
   for(vec1Iter1 = vec1.begin(); vec1Iter1 != vec1.end(); vec1Iter1++)
      cout<<*vec1Iter1<<" ";
   cout<<endl;

   cout<<"\nThe original deque deq1 is: ";
   for(deq1Iter1 = deq1.begin(); deq1Iter1 != deq1.end(); deq1Iter1++)
      cout<<*deq1Iter1<<" ";
   cout<<endl;

   //Let rotates…
   int k = 1;
   while(k <= deq1.end() - deq1.begin())
   {
      rotate(deq1.begin(), deq1.begin() + 1, deq1.end());
	  cout<<"Rotation of a single deque element to the back,\n deq1 is: ";
      for(deq1Iter1 = deq1.begin(); deq1Iter1 != deq1.end(); deq1Iter1++)
         cout<<*deq1Iter1<<" ";
      cout<<endl;
      k++;
   }
}

-----------------------------------------------------------------------------------

//algorithm, rotate_copy()
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1, vec2(9);
   deque <int> deq1, deq2(6);
   vector <int>::iterator vec1Iter, vec2Iter;
   deque<int>::iterator deq1Iter, deq2Iter;

   int i;
   for(i = -3; i <= 5; i++)
     vec1.push_back(i);
   
   int j;
   for(j =0; j <= 5; j++)
     deq1.push_back(j);
   
   cout<<"Vector vec1 data is: ";
   for(vec1Iter = vec1.begin(); vec1Iter != vec1.end(); vec1Iter++)
      cout<<*vec1Iter<<" ";
   cout<<endl;

   rotate_copy(vec1.begin(), vec1.begin() + 3, vec1.end(), vec2.begin());
   cout<<"\nAfter rotating, the vector vec1 data remains unchanged as:\n";
   for(vec1Iter = vec1.begin(); vec1Iter != vec1.end(); vec1Iter++)
      cout<<*vec1Iter<<" ";
   cout<<endl;

   cout<<"\nAfter rotating, the copy of vector vec1 in vec2 is,\n vec2:";
   for(vec2Iter = vec2.begin(); vec2Iter != vec2.end(); vec2Iter++)
      cout<<*vec2Iter<<" ";
   cout<<endl;

   cout<<"\nThe original deque deq1 is: ";
   for(deq1Iter = deq1.begin(); deq1Iter != deq1.end(); deq1Iter++)
      cout<<*deq1Iter<<" ";
   cout<<endl;

   int k = 1;
   while(k <= deq1.end() - deq1.begin())
   {
      rotate_copy(deq1.begin(), deq1.begin() + 1, deq1.end(), deq2.begin());
	  cout<<"Rotation of a single deque element to the back,\n a deque copy, deq2 is: ";
      for(deq2Iter = deq2.begin(); deq2Iter != deq2.end(); deq2Iter++)
         cout<<*deq2Iter<<" ";
      cout<<endl;
      k++;
   }
}

-----------------------------------------------------------------------------------

//algorithm, search()
//compiled with some type conversion
//warning…
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice the first
bool twice(int elem1, int elem2)
{return (2 * elem1 == elem2);}

int main()
{
   vector <int> vec1, vec2;
   list <int> lst1;
   vector <int>::iterator Iter1, Iter2;
   list <int>::iterator lst1_Iter, lst1_inIter;

   int i;
   for(i = 0; i <= 5; i++)
      vec1.push_back(5*i);
   
   for(i = 0; i <= 5; i++)
      vec1.push_back(5*i);
  
   int j;
   for(j = 4; j <= 5; j++)
      lst1.push_back(5*j);
   
   int k;
   for(k = 2; k <= 4; k++)
      vec2.push_back(10*k);
   
   cout<<"Vector vec1 data: ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   cout<<"List lst1 data: ";
   for(lst1_Iter = lst1.begin(); lst1_Iter!= lst1.end(); lst1_Iter++)
      cout<<*lst1_Iter<<" ";
   cout<<endl;

   cout<<"Vector vec2 data: ";
   for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
      cout<<*Iter2<<" ";
      cout<<endl<<endl;

   //Searching vec1 for first match to lst1 under identity
   vector <int>::iterator result1;
   result1 = search (vec1.begin(), vec1.end(), lst1.begin(), lst1.end());

   if(result1 == vec1.end())
      cout<<"There is no match of lst1 in vec1."<<endl;
   else
      cout<<"There is at least one match of lst1 in vec1"
           <<"\nand the first one begins at "
           <<"position "<< result1 - vec1.begin( )<<endl;

   //Searching vec1 for a match to lst1 under the binary predicate twice
   vector <int>::iterator result2;
   result2 = search(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), twice);

   if(result2 == vec1.end())
      cout<<"\nThere is no match of lst1 in vec1."<<endl;
   else
      cout<<"\nThere is a sequence of elements in vec1 that "
          <<"are equivalent\nto those in vec2 under the binary "
          <<"predicate twice\nand the first one begins at position "
          <<result2 - vec1.begin()<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, search_n()
//some type conversion warning
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice the first
bool twice(int elem1, int elem2)
{return 2 * elem1 == elem2;}

int main() 
{
   vector <int> vec1, vec2;
   vector <int>::iterator Iter1;

   int i;
   for(i = 0; i <= 5; i++)
     vec1.push_back(5*i);
   
   for(i = 0; i <= 2; i++)
     vec1.push_back(5);
   
   for(i = 0; i <= 5; i++)
     vec1.push_back(5*i);
   

   for(i = 0; i <= 2; i++)
     vec1.push_back(5);
   
   cout<<"Vector vec1 data: ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Searching vec1 for first match to (5 5 5) under identity
   vector <int>::iterator result1;
   result1 = search_n(vec1.begin(), vec1.end(), 3, 5);

   if(result1 == vec1.end())
      cout<<"\nThere is no match for a sequence (5 5 5) in vec1."<<endl;
   else
      cout<<"\nThere is at least one match of a sequence (5 5 5)"
          <<"\nin vec1 and the first one begins at "
          <<"position "<<result1 - vec1.begin()<<endl;

   //Searching vec1 for first match to (5 5 5) under twice
   vector <int>::iterator result2;
   result2 = search_n(vec1.begin(), vec1.end(), 3, 5);

   if(result2 == vec1.end())
      cout<<"\nThere is no match for a sequence (5 5 5) in vec1"
          <<" under the equivalence predicate twice."<<endl;
   else
      cout<<"\nThere is a match of a sequence (5 5 5) "
          <<"under the equivalence\npredicate twice"
          <<" in vec1 and the first one begins at "
          <<"position "<<result1 - vec1.begin()<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, set_difference()
#include <vector>
#include <algorithm>
//For greater<int>()
#include <functional>
#include <iostream>
using namespace std;

//Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser(int elem1, int elem2)
{
   if (elem1 < 0) 
      elem1 = - elem1;
   if (elem2 < 0) 
      elem2 = - elem2;
   return (elem1 < elem2);
}

int main()
{
   vector <int> vec1a, vec1b, vec1(12);
   vector <int>::iterator Iter1a, Iter1b, Iter1, Result1;

   //Constructing vectors vec1a & vec1b with default less-than ordering
   int i;
   for(i = -2; i <= 3; i++)
      vec1a.push_back(i);
   
   int j;
   for(j =-2; j <= 1; j++)
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
   vector <int> vec2a(vec1a), vec2b(vec1b), vec2(vec1);
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

   //Constructing vectors vec3a & vec3b with ranges sorted by mod_lesser
   vector <int> vec3a(vec1a), vec3b(vec1b), vec3(vec1);
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

   //To combine into a difference in asscending
   //order with the default binary predicate less <int>()
   Result1 = set_difference(vec1a.begin(), vec1a.end(),
      vec1b.begin(), vec1b.end(), vec1.begin());
   cout<<"\nset_difference() of source ranges with default order,"
       <<"\nvector vec1mod = ";
   for(Iter1 = vec1.begin(); Iter1 != Result1; Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To combine into a difference in descending
   //order specify binary predicate greater<int>()
   Result2 = set_difference(vec2a.begin(), vec2a.end(),
      vec2b.begin(), vec2b.end(), vec2.begin(), greater <int>());
   cout<<"\nset_difference() of source ranges with binary"
	   <<" predicate\ngreater specified, vector vec2mod: ";
   for(Iter2 = vec2.begin(); Iter2 != Result2; Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   //To combine into a difference applying a user
   //defined binary predicate mod_lesser()
   Result3 = set_difference(vec3a.begin(), vec3a.end(),
      vec3b.begin(), vec3b.end(), vec3.begin(), mod_lesser);
   cout<<"\nset_difference() of source ranges with binary "
	   <<"predicate\nmod_lesser() specified, vector vec3mod: ";
   for(Iter3 = vec3.begin(); Iter3 != Result3; Iter3++)
      cout<<*Iter3<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//algorithm, set_intersection()
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

   //Constructing vectors vec1a & vec1b with default less than ordering
   int i;
   for(i = -2; i <= 2; i++)
     vec1a.push_back(i);
   
   int j;
   for(j = -4; j <= 0; j++)
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
   vector <int> vec2a(vec1a), vec2b(vec1b), vec2(vec1);
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

   //Constructing vectors vec3a & vec3b with ranges sorted by mod_lesser
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
	   <<"binary predicate mod_lesser() is: ";
   for(Iter3b = vec3b.begin(); Iter3b != vec3b.end(); Iter3b++)
      cout<<*Iter3b<<" ";
   cout<<endl;

   //To combine into an intersection in asscending order with the default 
   //binary predicate less <int>()
   Result1 = set_intersection(vec1a.begin(), vec1a.end(),
      vec1b.begin(), vec1b.end(), vec1.begin());
   cout<<"\nset_intersection() of source ranges with default order,\nvector vec1mod: ";
   for(Iter1 = vec1.begin(); Iter1 != Result1; Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //To combine into an intersection in descending order, specify binary 
   //predicate greater<int>()
   Result2 = set_intersection(vec2a.begin(), vec2a.end(),
      vec2b.begin(), vec2b.end(), vec2.begin(), greater<int>());
   cout<<"\nset_intersection() of source ranges with binary predicate\ngreater "
	   <<"specified, vector vec2mod: ";
   for(Iter2 = vec2.begin(); Iter2 != Result2; Iter2++)
      cout<<*Iter2<<" ";
   cout<<endl;

   //To combine into an intersection applying a user-defined
   //binary predicate mod_lesser
   Result3 = set_intersection(vec3a.begin(), vec3a.end(),
      vec3b.begin(), vec3b.end(), vec3.begin(), mod_lesser);
   cout<<"\nset_intersection() of source ranges with binary predicate\n"
	   <<"mod_lesser() specified, vector vec3mod: ";
   for(Iter3 = vec3.begin(); Iter3 != Result3; Iter3++)
      cout<<*Iter3<<" ";
   cout<<endl;
}

-------------------------------------G++ on Fedora/Linux----------------------------------------------

//******algorandshuffle.cpp********
//algorithm, random_shuffle()
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
   vector <int> vec1;
   vector <int>::iterator Iter1;

   int i;
   for(i = 1; i <= 10; i++)
     vec1.push_back(i);
   cout<<"The original of vector vec1 data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;
   
   //random shuffle…
   random_shuffle(vec1.begin(), vec1.end());
   cout<<"The original of vector vec1 random shuffle data:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Shuffled once
   random_shuffle(vec1.begin(), vec1.end());
   push_heap(vec1.begin(), vec1.end());
   cout<<"Vector vec1 after reshuffle is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;

   //Shuffled again
   random_shuffle(vec1.begin(), vec1.end());
   push_heap(vec1.begin(), vec1.end());
   cout<<"Vector vec1 after another reshuffle is:\n";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
   cout<<*Iter1<<" ";
   cout<<endl;
}

-----------------------------------------------------------------------------------

//*******algosearchn.cpp*********
//algorithm, search_n()
//some type conversion warning
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice the first
bool twice(int elem1, int elem2)
{return 2 * elem1 == elem2;}

int main() 
{
   vector <int> vec1, vec2;
   vector <int>::iterator Iter1;

   int i;
   for(i = 0; i <= 5; i++)
     vec1.push_back(5*i);
   
   for(i = 0; i <= 2; i++)
     vec1.push_back(5);
   
   for(i = 0; i <= 5; i++)
     vec1.push_back(5*i);
   

   for(i = 0; i <= 2; i++)
     vec1.push_back(5);
   
   cout<<"Vector vec1 data: ";
   for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
      cout<<*Iter1<<" ";
   cout<<endl;

   //Searching vec1 for first match to (5 5 5) under identity
   vector <int>::iterator result1;
   result1 = search_n(vec1.begin(), vec1.end(), 3, 5);

   if(result1 == vec1.end())
      cout<<"\nThere is no match for a sequence (5 5 5) in vec1."<<endl;
   else
      cout<<"\nThere is at least one match of a sequence (5 5 5)"
          <<"\nin vec1 and the first one begins at "
          <<"position "<<result1 - vec1.begin()<<endl;

   //Searching vec1 for first match to (5 5 5) under twice
   vector <int>::iterator result2;
   result2 = search_n(vec1.begin(), vec1.end(), 3, 5);

   if(result2 == vec1.end())
      cout<<"\nThere is no match for a sequence (5 5 5) in vec1"
          <<" under the equivalence predicate twice."<<endl;
   else
      cout<<"\nThere is a match of a sequence (5 5 5) "
          <<"under the equivalence\npredicate twice"
          <<" in vec1 and the first one begins at "
          <<"position "<<result1 - vec1.begin()<<endl;
}
