
//algoritm, adjacent_find()
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Returns whether second element is twice the first
bool twice(int elem1, int elem2)
{
    return (elem1 * 2 == elem2);
}

int main()
{
    list<int> lst;
    list<int>::iterator Iter;
    list<int>::iterator result1, result2;
    lst.push_back(14);
    lst.push_back(17);
    lst.push_back(31);
    lst.push_back(31);
    lst.push_back(10);
    lst.push_back(20);

    cout << "List lst data: ";
    for(Iter = lst.begin(); Iter != lst.end(); Iter++)
        cout<<*Iter<< " ";
    cout<<endl<<endl;

    result1 = adjacent_find(lst.begin(), lst.end());
    if(result1 == lst.end())
        cout<<"There are not two adjacent elements that are equal."<<endl;
    else
        cout<<"There are two adjacent elements that are equal."
            <<"\nThey have a value of "<<*(result1)<<endl;

    result2 = adjacent_find(lst.begin(), lst.end(), twice);
    if(result2 == lst.end())
        cout<<"\nThere are no two adjacent elements where the "
            <<"second is twice the first."<<endl;
    else
    {   cout<<"\nThere are two adjacent elements\nwhere "
            <<"the second is twice the first."
            <<"\nThey have values of "<<*(result2++);
        cout<<" & "<<*result2<<endl;
    }
    return 0;
}

------------------------------------------------------------------------------------------------

//algorithm, binary_search()
#include <list>
#include <vector>
#include <algorithm>
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
    list<int> lst;
    list<int>::iterator Iter;
    bool b1, b2;

    lst.push_back(13);
    lst.push_back(23);
    lst.push_back(10);
    lst.push_back(33);
    lst.push_back(35);
    lst.push_back(9);

    lst.sort();
    cout<<"List lst data: ";
    for(Iter = lst.begin(); Iter != lst.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;

    b1 = binary_search(lst.begin(), lst.end(), 10);
    if(b1)
        cout<<"\nThere is an element in list lst with\na value equal to 10."<<endl;
    else
        cout<<"\nThere is no element in list lst with\na value equal to 10."<<endl;

    b2 = binary_search(lst.begin(), lst.end(), 13, greater<int>());
    if(b2)
        cout<<"\nThere is an element in list lst with a\nvalue equivalent to 13 "
            <<"under greater than."<<endl;
    else
        cout<<"\nNo element in list lst with a\nvalue equivalent to 13 "
            <<"under greater than."<<endl;

//a binary_search under the user-defined binary predicate mod_lesser
    vector <int> vec;
    vector <int>::iterator Iter1;
    int i;
    for(i = -3; i <= 5; i++)
        vec.push_back(i);

    sort(vec.begin(), vec.end(), mod_lesser);

    cout<<"\nOrdered under mod_lesser, vector vec data:\n";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    bool b3 = binary_search(vec.begin(), vec.end(), -2, mod_lesser);
    if(b3)
        cout<<"\nThere is an element with a value\nequivalent to -2 "
            <<"under mod_lesser()."<<endl;
    else
        cout<<"\nThere is no element with a value\nequivalent to -2 "
            <<"under mod_lesser()."<<endl;
    return 0;
}

------------------------------------------------------------------------------------------------

//algoritm, copy()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec1, vec2;
    vector <int>::iterator Iter1, Iter2;

    int i;
    for(i = 0; i <= 5; i++)
        vec1.push_back(i);

    int j;
    for(j = 10; j <= 20; j++)
        vec2.push_back(j);

    cout<<"vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//To copy the first 4 elements of vec1 into the middle of vec2
    copy(vec1.begin(), vec1.begin() + 4, vec2.begin() + 5);

    cout<<"vec2 with vec1 insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//To shift the elements inserted into vec2 two positions
//to the left
    copy(vec2.begin()+4, vec2.begin() + 7, vec2.begin() + 2);

    cout<<"vec2 with shifted insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
    return 0;
}

-------------------------------------------------------------------------------------------------

//algorithm, copy_backward()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec1, vec2;
    vector <int>::iterator Iter1, Iter2;

    int i;
    for(i = 10; i <= 15; i++)
        vec1.push_back(i);

    int j;
    for(j = 0; j <= 10; j++)
        vec2.push_back(j);

    cout<<"vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//To copy_backward the first 4 elements of vec1 into the middle of vec2
    copy_backward(vec1.begin(), vec1.begin() + 4, vec2.begin() + 8);

    cout<<"vec2 with vec1 insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//To shift the elements inserted into vec2 two positions
//to the right
    copy_backward(vec2.begin()+4, vec2.begin()+7, vec2.begin()+9);

    cout<<"vec2 with shifted insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
    return 0;
}

-----------------------------------------------------------------------------------------------

//algorithm, count()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int>::iterator Iter;

    vec.push_back(12);
    vec.push_back(22);
    vec.push_back(12);
    vec.push_back(31);
    vec.push_back(12);
    vec.push_back(33);

    cout<<"vec data: ";
    for(Iter = vec.begin(); Iter != vec.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;

    int result;
    cout<<"\nOperation: count(vec.begin(), vec.end(), 12)\n";
    result = count(vec.begin(), vec.end(), 12);
    cout<<"The number of 12s in vec is: "<<result<<endl;
    return 0;
}

-----------------------------------------------------------------------------------------------

//algorithm, count_if()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isgreat(int value)
{
    return value >8;
}

int main()
{
    vector <int> vec;
    vector <int>::iterator Iter;
    vec.push_back(13);
    vec.push_back(21);
    vec.push_back(9);
    vec.push_back(31);
    vec.push_back(8);
    vec.push_back(10);

    cout<<"vec data: ";
    for(Iter = vec.begin(); Iter != vec.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;

    int result1;
    cout<<"\nOperation: count_if(vec.begin(), vec.end(), isgreat)\n";
    result1 = count_if(vec.begin(), vec.end(), isgreat);
    cout<<"The number of elements in vec greater than 8 is: "<<result1<<endl;
    return 0;
}

-----------------------------------------------------------------------------------------------

// countif()
//
// Functions:
//   count_if  - Count items in a range that satisfy a predicate.
//   begin     - Returns an iterator that points to the first element in
//               a sequence.
//   end       - Returns an iterator that points one past the end of a
//               sequence.
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>

using namespace std;

//Return true if string str starts with letter 'C'
int MatchFirstChar(const string& str)
{
    string s("C");
    return s == str.substr(0, 1);
}

int main()
{
    const int VECTOR_SIZE = 110;

    //Define a template class vector of strings
    typedef vector<string > StringVector;

    //Define an iterator for template class vector of strings
    typedef StringVector::iterator StringVectorIt;

    //vector containing names
    StringVector NamesVect(VECTOR_SIZE);

    StringVectorIt start, end, it;

    //stores count of elements that match value.
    ptrdiff_t result = 0;

    //Initialize vector NamesVect
    NamesVect[0] = "Learn";
    NamesVect[1] = "C";
    NamesVect[2] = "and";
    NamesVect[3] = "C++";
    NamesVect[4] = "also";
    NamesVect[5] = "Visual";
    NamesVect[6] = "C++";
    NamesVect[7] = "and";
    NamesVect[8] = "C++";
    NamesVect[9] = ".Net";

    //location of first element of NamesVect
    start = NamesVect.begin();

    //one past the location last element of NamesVect
    end = NamesVect.end();

    //print content of NamesVect
    cout<<"NamesVect: ";
    for(it = start; it != end; it++)
        cout<<*it<<" ";
    cout<<endl;

    //Count the number of elements in the range [first, last +1)
    //that start with letter 'C'
    result = count_if(start, end, MatchFirstChar);

    //print the count of elements that start with letter 'S'
    cout<<"Number of elements that start with letter \"C\" = "<<result<<endl;
}

-------------------------------------------------------------------------------------------------

//algorithm, equal()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice of the first
bool twice(int elem1, int elem2)
{
    return elem1 * 2 == elem2;
}

int main()
{
    vector <int> vec1, vec2, vec3;
    vector <int>::iterator Iter1, Iter2, Iter3;

    int i;
    for(i = 10; i <= 15; i++)
        vec1.push_back(i);

    int j;
    for(j = 0; j <= 5; j++)
        vec2.push_back(j);

    int k;
    for(k = 10; k <= 15; k++)
        vec3.push_back(k);

    cout<<"vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

    cout<<"vec3 data: ";
    for(Iter3 = vec3.begin(); Iter3 != vec3.end(); Iter3++)
        cout<<*Iter3<<" ";
    cout<<endl;

//Testing vec1 and vec2 for equality based on equality
    bool b;
    b = equal(vec1.begin(), vec1.end(), vec2.begin());

    if(b)
        cout<<"The vectors vec1 and vec2 are equal based on equality."<<endl;
    else
        cout<<"The vectors vec1 and vec2 are not equal based on equality."<<endl;

//Testing vec1 and vec3 for equality based on equality
    bool c;
    c = equal(vec1.begin(), vec1.end(), vec3.begin());

    if(c)
        cout<<"The vectors vec1 and vec3 are equal based on equality."<<endl;
    else
        cout<<"The vectors vec1 and vec3 are not equal based on equality."<<endl;

//Testing vec1 and vec3 for equality based on twice
    bool d;
    d = equal(vec1.begin(), vec1.end(), vec3.begin(), twice);

    if(d)
        cout<<"The vectors vec1 and vec3 are equal based on twice."<<endl;
    else
        cout<<"The vectors vec1 and vec3 are not equal based on twice."<<endl;
    return 0;
}

-----------------------------------------------------------------------------------------------

//algorithm, equal_range()
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
    vector <int>::iterator Iter1;
    pair < vector <int>::iterator, vector <int>::iterator > Result1, Result2, Result3;

//Constructing vectors vec1 with default less than ordering
    int i;
    for(i = -2; i <= 4; i++)
        vec1.push_back(i);

    int j;
    for(j =1; j <= 5; j++)
        vec1.push_back(j);

    sort(vec1.begin(), vec1.end());
    cout<<"vec1 data with range sorted by the binary predicate less than is:\n";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//Constructing vectors vec2 with range sorted by greater
    vector <int> vec2(vec1);
    vector <int>::iterator Iter2;
    sort(vec2.begin(), vec2.end(), greater<int>());

    cout<<"\nvec2 data with range sorted by the binary predicate greater than is:\n";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//Constructing vectors vec3 with range sorted by mod_lesser
    vector <int> vec3(vec1);
    vector <int>::iterator Iter3;
    sort(vec3.begin(), vec3.end(), mod_lesser);

    cout<<"\nvec3 data with range sorted by the binary predicate mod_lesser is:\n";
    for(Iter3 = vec3.begin(); Iter3 != vec3.end(); Iter3++)
        cout<<*Iter3<<" ";
    cout<<"\n\n";

//equal_range of 4 in vec1 with default binary predicate less <int>()
    Result1 = equal_range(vec1.begin(), vec1.end(), 4);
    cout<<"lower_bound in vec1 for the element with a value of 4 is: "<<*Result1.first<<endl;
    cout<<"upper_bound in vec1 for the element with a value of 4 is: "<<*Result1.second<<endl;
    cout<<"The equivalence class for the element with a value of 4 in \nvec1 includes the elements: ";
    for(Iter1 = Result1.first; Iter1 != Result1.second; Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl<<endl;

//equal_range of 4 in vec2 with the binary predicate greater <int>()
    Result2 = equal_range(vec2.begin(), vec2.end(), 4, greater <int>());
    cout<<"lower_bound in vec2 for the element with a value of 4 is: "<<*Result2.first<<endl;
    cout<<"upper_bound in vec2 for the element with a value of 4 is: "<<*Result2.second<<endl;
    cout<<"The equivalence class for the element with a value of 4 in"
        <<"\n vec2 includes the elements: ";
    for(Iter2 = Result2.first; Iter2 != Result2.second; Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl<<endl;

//equal_range of 4 in vec3 with the binary predicate mod_lesser
    Result3 = equal_range(vec3.begin(), vec3.end(), 4, mod_lesser);
    cout<<"lower_bound in vec3 for the element with a value of 4 is: "<<*Result3.first<<endl;
    cout<<"upper_bound in vec3 for the element with a value of 4 is: "<<*Result3.second<<endl;
    cout<<"equivalence class for the element with a value of 4 in \nvec3 includes the elements: ";
    for(Iter3 = Result3.first; Iter3 != Result3.second; Iter3++)
        cout<<*Iter3<<" ";
    cout<<endl<<endl;
    return 0;
}

--------------------------------------------------------------------------------------------------

//algoritm, fill()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int>::iterator Iter1;

    int i;
    for(i = 10; i <= 20; i++)
        vec.push_back(i);

    cout<<"Vector vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//Fill the last 4 positions with a value of 9
    cout<<"\nOperation: fill(vec.begin() + 4, vec.end(), 9)\n";
    fill(vec.begin() + 4, vec.end(), 9);
    cout<<"Modified vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;
    return 0;
}

----------------------------------------------------------------------------------------------

//algorithm, fill_n()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int>::iterator Iter1;

    int i;
    for(i = 10; i <= 20; i++)
        vec.push_back(i);

    cout<<"Vector vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//Fill the last 3 positions for 6 position with a value of 9
    cout<<"\nOperation: fill_n(vec.begin() + 3, 6, 9)\n";
    fill_n(vec.begin() + 3, 6, 9);
    cout<<"Modified vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;
    return 0;
}

---------------------------------------------------------------------------------------------------

//algorithm, find()
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    list <int> lst;
    list <int>::iterator Iter;
    list <int>::iterator result;
    lst.push_back(9);
    lst.push_back(21);
    lst.push_back(14);
    lst.push_back(10);
    lst.push_back(16);
    lst.push_back(31);

    cout<<"List lst data: ";
    for(Iter = lst.begin(); Iter != lst.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;

    cout<<"\nOperation: find(lst.begin(), lst.end(), 14)\n";
    result = find(lst.begin(), lst.end(), 14);
    if(result == lst.end())
        cout<<"There is no 14 in list lst."<<endl;
    else
        result++;
    cout<<"There is a 14 in list lst and it is"<<" followed by a "<<*(result)<<endl;
    return 0;
}

----------------------------------------------------------------------------------------------------

//algorithm, find_end()
//some type conversion warning
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice the first
bool twice(int elem1, int elem2)
{
    return 2 * elem1 == elem2;
}

int main()
{
    vector <int> vec1, vec2;
    list <int> lst;
    vector <int>::iterator Iter1, Iter2;
    list <int>::iterator lst_Iter, lst_inIter;

    int i;
    for(i = 10; i <= 15; i++)
        vec1.push_back(i);

    int j;
    for(j = 11; j <= 14; j++)
        lst.push_back(j);

    int k;
    for(k = 12; k <= 14; k++)
        vec2.push_back(2*k);

    cout<<"Vector vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"List lst data: ";
    for(lst_Iter = lst.begin(); lst_Iter != lst.end(); lst_Iter++)
        cout<<*lst_Iter<<" ";
    cout<<endl;

    cout<<"Vector vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl<<endl;

//Searching vec1 for a match to lst under identity
    vector <int>::iterator result1;
    result1 = find_end(vec1.begin(), vec1.end(), lst.begin(), lst.end());

    if(result1 == vec1.end())
        cout<<"There is no match of lst in vec1."<<endl;
    else
        cout<<"There is a match of lst in vec1 that begins at "
            <<"position "<<result1 - vec1.begin()<<endl;

//Searching vec1 for a match to lst under the binary predicate twice
    vector <int>::iterator result2;
    result2 = find_end(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), twice);

    if(result2 == vec1.end())
        cout<<"\nThere is no match of lst in vec1."<<endl;
    else
        cout<<"\nThere is a sequence of elements in vec1 that "
            <<"are\nequivalent to those in vec2 under the binary "
            <<"predicate\ntwice and that begins at position "
            <<result2 - vec1.begin()<<endl;
    return 0;
}

--------------------------------------------------------------------------------------------------

//algorithm, find_first_of()
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice the first
bool twice(int elem1, int elem2)
{
    return (2 * elem1 == elem2);
}

int main()
{
    vector <int> vec1, vec2;
    list <int> lst;
    vector <int>::iterator Iter1, Iter2;
    list <int>::iterator lst_Iter, lst_inIter;

    int i;
    for(i = 0; i <= 5; i++)
        vec1.push_back(5*i);

    int j;
    for(j = 3; j <= 4; j++)
        lst.push_back(5*j);

    int k;
    for(k = 2; k <= 4; k++)
        vec2.push_back(10*k);

    cout<<"Vector vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"List lst data: ";
    for(lst_Iter = lst.begin(); lst_Iter!= lst.end(); lst_Iter++)
        cout<<*lst_Iter<<" ";
    cout<<endl;

    cout<<"Vector vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//Searching vec1 for first match to lst under identity
    vector <int>::iterator result1;
    result1 = find_first_of(vec1.begin(), vec1.end(), lst.begin(), lst.end());

    if(result1 == vec1.end())
        cout<<"\nThere is no match of lst in vec1."<<endl;
    else
        cout<<"\nThere is at least one match of lst in vec1"
            <<"\nand the first one begins at "
            <<"position "<<result1 - vec1.begin()<<endl;

//Searching vec1 for a match to lst under the binary predicate twice
    vector <int>::iterator result2;
    result2 = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), twice);

    if(result2 == vec1.end())
        cout<<"\nThere is no match of lst in vec1."<<endl;
    else
        cout<<"\nThere is a sequence of elements in vec1 that "
            <<"are\nequivalent to those in vec2 under the binary\n"
            <<"predicate twice and the first one begins at position "
            <<result2 - vec1.begin()<<endl;
    return 0;
}

------------------------------------------------------------------------------------------------

//algoritm, find_if()
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

bool great(int value)
{
    return value>13;
}

int main()
{
    list <int> lst;
    list <int>::iterator Iter;
    list <int>::iterator result;

    lst.push_back(13);
    lst.push_back(9);
    lst.push_back(10);
    lst.push_back(22);
    lst.push_back(31);
    lst.push_back(17);

    cout<<"List lst data: ";
    for(Iter = lst.begin(); Iter != lst.end(); Iter++)
        cout<<*Iter<<" ";
    cout<<endl;

    cout<<"\nOperation: find_if(lst.begin(), lst.end(), great)\n";
    result = find_if(lst.begin(), lst.end(), great);
    if(result == lst.end())
        cout<<"There is no element greater than 13 in list lst."<<endl;
    else
        result++;
    cout<<"There is an element greater than 13\nin list lst,"
        <<" and it is followed by a "
        <<*(result)<<endl;
    return 0;
}

-------------------------------------------------------------------------------------------------

//algorithm, for_each()
#include <vector>
#include <algorithm>
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
    void operator()(Type& elem) const
    {
        elem *= Factor;
    }
};

//The function object to determine the average
class Average
{
private:
//The number of elements
    long num;
//The sum of the elements
    long sum;
public:
//Constructor initializes the value to multiply by
    Average() : num(0), sum(0) {}

//The function call to process the next elment
    void operator()( int elem ) \
    {
//Increment the element count
        num++;
//Add the value to the partial sum
        sum += elem;
    }
//return Average
    operator double()
    {
        return  (static_cast <double> (sum))/(static_cast <double> (num));
    }
};

int main()
{
    vector <int> vec;
    vector <int>::iterator Iter1;

//Constructing vector vec
    int i;
    for(i = -3; i <= 4; i++)
        vec.push_back(i);

    cout<<"vector vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//Using for_each to multiply each element by a Factor
    for_each(vec.begin(), vec.end(), MultValue<int>(-2));

    cout<<"\nMultiplying the elements of the vector vec\n"
        <<"by the factor -2 gives:\nvecmult1 data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//The function object is templatized and so can be
//used again on the elements with a different Factor
    for_each(vec.begin(), vec.end(), MultValue<int>(5));

    cout<<"\nMultiplying the elements of the vector vecmult1\n"
        <<"by the factor 5 gives:\nvecmult2 data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//The local state of a function object can accumulate
//information about a sequence of actions that the
//return value can make available, here the Average
    double avemod2 = for_each(vec.begin(), vec.end(), Average());
    cout<<"\nThe average of the elements of vec is:\nAverage(vecmult2) = "<<avemod2<<endl;
    return 0;
}

-------------------------------------------------------------------------------------------------

//algorithm, generate()
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
//Assigning random values to vector integer elements
    vector <int> vec(5);
    vector <int>::iterator Iter1;
    deque <int> deq(5);
    deque <int>::iterator deqIter;

    cout<<"\nOperation: generate(vec.begin(), vec.end(), rand)\n";
    generate(vec.begin(), vec.end(), rand);
    cout<<"Vector vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//Assigning random values to deque integer elements
    cout<<"\nOperation: generate(deq.begin(), deq.end(), rand)\n";
    generate(deq.begin(), deq.end(), rand);
    cout<<"Deque deq data: ";
    for(deqIter = deq.begin(); deqIter != deq.end(); deqIter++)
        cout<<*deqIter<<" ";
    cout<<endl;
    return 0;
}

--------------------------------------------------------------------------------------------------------

//algorithm, generate_n()
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
//Assigning random values to vector integer elements
    vector <int> vec(7);
    vector <int>::iterator Iter1;
    deque <int> deq(7);
    deque <int>::iterator deqIter;

    cout<<"\nOperation: generate_n(vec.begin(), 7, rand)\n";
    generate_n(vec.begin(), 7, rand);
    cout<<"Vector vec data: ";
    for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

//Assigning random values to deque integer elements
    cout<<"\nOperation: generate_n(deq.begin(), 4, rand)\n";
    generate_n(deq.begin(), 4, rand);
    cout<<"Deque deq data: ";
    for(deqIter = deq.begin(); deqIter != deq.end(); deqIter++)
        cout<<*deqIter<<" ";
    cout<<endl;
    return 0;
}

----------------------------------------------------------------------------------------------------------

//algorithm, includes()
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
    vector <int> vec1, vec2;
    vector <int>::iterator Iter1, Iter2;

//Constructing vectors vec1 & vec2 with default less-than ordering
    int i;
    for(i = -2; i <= 4; i++)
        vec1.push_back(i);

    int j;
    for(j =-2; j <= 3; j++)
        vec2.push_back(j);

    cout<<"vector vec1 data with range sorted by the "
        <<"binary predicate\nless than is: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"\nvector vec2 data with range sorted by the "
        <<"binary predicate\nless than is: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//Constructing vectors vec3 & vec4 with ranges sorted by greater
    vector <int> vec3(vec1), vec4(vec2);
    vector <int>::iterator Iter3, Iter4;
    sort(vec3.begin(), vec3.end(), greater<int>());
    sort(vec4.begin(), vec4.end(), greater<int>());
    vec3.pop_back();

    cout<<"\nvector vec3 data with range sorted by the "
        <<"binary predicate\ngreater is: ";
    for(Iter3 = vec3.begin(); Iter3 != vec3.end(); Iter3++)
        cout<<*Iter3<<" ";
    cout<<endl;

    cout<<"\nvector vec4 data with range sorted by the "
        <<"binary predicate\ngreater is: ";
    for(Iter4 = vec4.begin(); Iter4 != vec4.end(); Iter4++)
        cout<<*Iter4<<" ";
    cout<<endl;

//Constructing vectors vec5 & vec6 with ranges sorted by mod_lesser
    vector <int> vec5(vec1), vec6(vec2);
    vector <int>::iterator Iter5, Iter6;
    reverse(vec5.begin(), vec5.end());
    vec5.pop_back();
    vec5.pop_back();
    sort(vec5.begin(), vec5.end(), mod_lesser);
    sort(vec6.begin(), vec6.end(), mod_lesser);

    cout<<"\nvector vec5 data with range sorted by the "
        <<"binary predicate\nmod_lesser is: ";
    for(Iter5 = vec5.begin(); Iter5 != vec5.end(); Iter5++)
        cout<<*Iter5<<" ";
    cout<<endl;

    cout<<"\nvector vec6 data with range sorted by the "
        <<"binary predicate\nmod_lesser is: ";
    for(Iter6 = vec6.begin(); Iter6 != vec6.end(); Iter6++)
        cout<<*Iter6<<" ";
    cout<<endl;

//To test for inclusion under an asscending order
//with the default binary predicate less <int>()
    bool Result1;
    Result1 = includes(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
    if(Result1)
        cout<<"\nAll the elements in vector vec2 are contained in vector vec1."<<endl;
    else
        cout<<"\nAt least one of the elements in vector vec2 is not contained in vector vec1."<<endl;

//To test for inclusion under descending
//order specifies binary predicate greater<int>()
    bool Result2;
    Result2 = includes(vec3.begin(), vec3.end(), vec4.begin(), vec4.end(), greater<int>());
    if(Result2)
        cout<<"\nAll the elements in vector vec4 are contained\nin vector vec3."<<endl;
    else
        cout<<"\nAt least one of the elements in vector vec4\nis not contained in vector vec3."<<endl;

//To test for inclusion under a user
//defined binary predicate mod_lesser
    bool Result3;
    Result3 = includes(vec5.begin(), vec5.end(), vec6.begin(), vec6.end(), mod_lesser);
    if(Result3)
        cout<<"\nAll the elements in vector vec6 are contained under\nmod_lesser in vector vec5."<<endl;
    else
        cout<<"\nAt least one of the elements in vector vec6 is not\ncontained under mod_lesser in vector vec5."<<endl;
    return 0;
}

---------------------------------------------------G++-----------------------------------------------------------

//******algocopy.cpp********
//algoritm, copy()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec1, vec2;
    vector <int>::iterator Iter1, Iter2;

    int i;
    for(i = 0; i <= 5; i++)
        vec1.push_back(i);

    int j;
    for(j = 10; j <= 20; j++)
        vec2.push_back(j);

    cout<<"vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//To copy the first 4 elements of vec1 into the middle of vec2
    copy(vec1.begin(), vec1.begin() + 4, vec2.begin() + 5);

    cout<<"vec2 with vec1 insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//To shift the elements inserted into vec2 two positions
//to the left
    copy(vec2.begin()+4, vec2.begin() + 7, vec2.begin() + 2);

    cout<<"vec2 with shifted insert data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;
    return 0;
}

----------------------------------------------------------------------------------------

//******algofindfirstof.cpp********
//algorithm, find_first_of()
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

//Return whether second element is twice the first
bool twice(int elem1, int elem2)
{
    return (2 * elem1 == elem2);
}

int main()
{
    vector <int> vec1, vec2;
    list <int> lst;
    vector <int>::iterator Iter1, Iter2;
    list <int>::iterator lst_Iter, lst_inIter;

    int i;
    for(i = 0; i <= 5; i++)
        vec1.push_back(5*i);

    int j;
    for(j = 3; j <= 4; j++)
        lst.push_back(5*j);

    int k;
    for(k = 2; k <= 4; k++)
        vec2.push_back(10*k);

    cout<<"Vector vec1 data: ";
    for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
        cout<<*Iter1<<" ";
    cout<<endl;

    cout<<"List lst data: ";
    for(lst_Iter = lst.begin(); lst_Iter!= lst.end(); lst_Iter++)
        cout<<*lst_Iter<<" ";
    cout<<endl;

    cout<<"Vector vec2 data: ";
    for(Iter2 = vec2.begin(); Iter2 != vec2.end(); Iter2++)
        cout<<*Iter2<<" ";
    cout<<endl;

//Searching vec1 for first match to lst under identity
    vector <int>::iterator result1;
    result1 = find_first_of(vec1.begin(), vec1.end(), lst.begin(), lst.end());

    if(result1 == vec1.end())
        cout<<"\nThere is no match of lst in vec1."<<endl;
    else
        cout<<"\nThere is at least one match of lst in vec1"
            <<"\nand the first one begins at "
            <<"position "<<result1 - vec1.begin()<<endl;

//Searching vec1 for a match to lst under the binary predicate twice
    vector <int>::iterator result2;
    result2 = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), twice);

    if(result2 == vec1.end())
        cout<<"\nThere is no match of lst in vec1."<<endl;
    else
        cout<<"\nThere is a sequence of elements in vec1 that "
            <<"are\nequivalent to those in vec2 under the binary\n"
            <<"predicate twice and the first one begins at position "
            <<result2 - vec1.begin()<<endl;
    return 0;
}
