
//insert_iterator, operator++
//the increment...
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
int i;
vector<int> vec;
for(i = 10; i<=15; ++i) 
vec.push_back(i);

vector <int>::iterator veciter;
cout<<"The vector vec data: ";
//iterate all the elements and print...
for(veciter = vec.begin(); veciter != vec.end(); veciter++)
cout<<*veciter<<" ";
cout<<endl;

cout<<"\nOperation: j(vec, vec.begin()) then *j = 17 and j++...\n";
insert_iterator<vector<int> > j(vec, vec.begin());
*j = 17;
j++;
*j = 9;

cout<<"After the insertions, the vector vec data:\n";
for(veciter = vec.begin(); veciter != vec.end(); veciter++)
cout<<*veciter<<" ";
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//insert_iterator, operator=
//the assignment
#include <iterator>
#include <list>
#include <iostream>
using namespace std;

int main()
{
int i;
list<int>::iterator lstiter;

list<int> lst;
for(i = 10; i<=15; ++i) 
lst.push_back(i);

cout<<"The list lst data: ";
for(lstiter = lst.begin(); lstiter != lst.end(); lstiter++)
cout<<*lstiter<<" ";
cout<<endl;

insert_iterator< list < int> > Iter(lst, lst.begin());
*Iter = 12;
*Iter = 7;
*Iter = 33;
*Iter = 24;

cout<<"\nOperation: Iter(lst, lst.begin()) then *Iter = 12...\n";
cout<<"After the insertions, the list lst data:\n";
for(lstiter = lst.begin(); lstiter != lst.end(); lstiter++)
cout<<*lstiter<<" ";
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//istream_iterator, char_type and
//traits_type
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
typedef istream_iterator<int>::char_type chtype;
typedef istream_iterator<int>::traits_type tratype;

//Standard iterator interface for reading
//elements from the input stream...
cout<<"Enter integers separated by spaces & then\n"
<<" any character e.g.: '3 4 7 T': ";

//istream_iterator for reading int stream
istream_iterator<int, chtype, tratype> intread(cin);

//End-of-stream iterator
istream_iterator<int, chtype, tratype> EOFintread;

while(intread != EOFintread)
{
cout<<"Reading data:  "<<*intread<<endl;
++intread;
}
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//istream_iterator, istream_iterator
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
//Used in conjunction with copy algorithm
//to put elements into a vector read from cin
vector<int> vec(5);
vector<int>::iterator Iter;

cout<<"Enter 5 integers separated by spaces & then\n"
<<" a character e.g: '4 6 2 7 11 R': ";
istream_iterator<int> intvecread(cin);

//Default constructor will test equal to end of stream
//for delimiting source range of vector
copy(intvecread, istream_iterator<int>(), vec.begin());
cin.clear();

cout<<"vec data: ";
for(Iter = vec.begin(); Iter != vec.end(); Iter++)
cout<<*Iter<<" ";
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//istreambuf_iterator, char_type
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
typedef istreambuf_iterator<char>::char_type chatype;
typedef istreambuf_iterator<char>::traits_type tratype;

cout<<"Enter line of text, then press Return key to \n"
<<"insert into the output, & use a ctrl-Z Enter key\n"
<<"combination to exit: ";

//istreambuf_iterator for input stream
istreambuf_iterator< chatype, tratype> charInBuf(cin);
ostreambuf_iterator<char> charOut(cout);

//Used in conjunction with replace_copy algorithm
//to insert into output stream and replaces spaces
//with hash sign
replace_copy(charInBuf, istreambuf_iterator<char>(), charOut, ' ', '#');
return 0;
}

-----------------------------------------------------------------------------------------

//istreambuf_iterator, int_type
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
cout<<"Operation: int_type intype = 77\n";
istreambuf_iterator<char>::int_type intype = 77;
cout<<"The int_type type = "<<intype<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//istreambuf_iterator, equal
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
cout<<"\nOperation: bol = readchinpt1.equal(readchinpt2)\n";
cout<<"Enter a line of text then an Enter key to\n"
<<"insert into the output:\n";

istreambuf_iterator<char> readchinpt1(cin);
istreambuf_iterator<char> readchinpt2(cin);

bool bol = readchinpt1.equal(readchinpt2);
if(bol)
cout<<"The iterators are equal."<<endl;
else
cout<<"The iterators are not equal."<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//istreambuf_iterator, istreambuf_iterator
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
istreambuf_iterator<char>::istream_type &istrm = cin;
istreambuf_iterator<char>::streambuf_type *strmbf = cin.rdbuf();

cout<<"Enter a line of text, then an Enter key to insert into\n"
<<"the output, (& use a ctrl-Z Enter key combination to exit):\n";

istreambuf_iterator<char> charReadIn(cin);
ostreambuf_iterator<char> charOut(cout);

//Used in conjunction with replace_copy algorithm
//to insert into output stream and replace spaces
//with hyphen-separators
replace_copy(charReadIn, istreambuf_iterator<char>(), charOut, ' ', '-');
return 0;
}

-----------------------------------------------------------------------------------------

//istreambuf_iterator, operator++
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
cout<<"Type a line of text & enter to output it, with stream\n"
<<"buffer iterators, repeat as many times as desired,\n"
<<"then keystroke ctrl-Z Enter to exit program: \n";

istreambuf_iterator<char> inpos(cin);
istreambuf_iterator<char> endpos;
ostreambuf_iterator<char> outpos(cout);

while(inpos != endpos)
{
*outpos = *inpos;
//Increment istreambuf_iterator
++inpos;
++outpos;
}
   return 0;
}

-----------------------------------------------------------------------------------------

//ostream_iterator, ostream_iterator
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
//ostream_iterator for stream cout
ostream_iterator<int> intOut(cout, "\n");
*intOut = 12;
intOut++;
*intOut = 33;
intOut++;

int i;
vector<int> vec;
for(i = 10; i<=15; ++i)
vec.push_back(i);

cout<<"Operation: with and without delimiter...\n";
//Write elements to standard output stream
cout<<"Elements output without delimiter: ";
copy(vec.begin(), vec.end(), ostream_iterator<int> (cout));
cout<<endl;

//Write elements with delimiter " " to output stream
cout<<"Elements output with delimiter: ";
copy(vec.begin(), vec.end(), ostream_iterator<int> (cout, " "));
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//ostream_iterator, operator=
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
//ostream_iterator for stream cout
//with new line delimiter
ostream_iterator<int> intOut(cout, "\n");

//Standard iterator interface for writing
//elements to the output stream
cout<<"Elements written to output stream:\n";
*intOut = 12;
*intOut = 21;
//No effect on iterator position
intOut++;
*intOut = 9;
*intOut = 7;
return 0;
}

-----------------------------------------------------------------------------------------

//ostreambuf_iterator, ostreambuf_iterator
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
// ostreambuf_iterator for stream cout
ostreambuf_iterator<char> charOut(cout);

*charOut = '7';
charOut ++;
*charOut  = 'T';
charOut ++;   
*charOut = 'W';
cout<<" are characters output."<<endl;

ostreambuf_iterator<char> strOut(cout);
string str = "These characters are being written to the output stream.\n ";
copy(str.begin(), str.end(), strOut);
return 0;
}

-----------------------------------------------------------------------------------------

//ostreambuf_iterator, failed()
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
//ostreambuf_iterator for stream cout
ostreambuf_iterator<char> charOut(cout);

*charOut = 'T';
charOut ++;
*charOut  = '7';
charOut ++;   
*charOut = 'R';
cout<<" are characters output"<<endl;

bool bol = charOut.failed();
if(bol) 
cout<<"At least one insertion failed."<<endl;
else
cout<<"No insertions failed."<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//reverse_iterator, operator[]
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
int i;

vector<int> vec;
for(i = 10; i<=17; ++i)
vec.push_back(i);

cout<<"Normal....\n";
vector <int>::iterator vIter;
cout<<"The vector vec data: ";
for(vIter = vec.begin(); vIter != vec.end(); vIter++)
cout<<*vIter<<" ";
cout<<endl;

cout<<"\nReverse....\n";
vector <int>::reverse_iterator rvIter;
cout<<"The vector vec reversed data: ";
for(rvIter = vec.rbegin(); rvIter != vec.rend(); rvIter++)
cout<<*rvIter<<" ";
cout<<endl;

cout<<"\nFinding data, 15....\n";
cout<<"Operation: pos = find(vec.begin(), vec.end(), 15)\n";
vector <int>::iterator pos;
pos = find(vec.begin(), vec.end(), 15);

cout<<"The iterator pos points to: "<<*pos<<endl;
reverse_iterator<vector<int>::iterator> rpos(pos);

//Declare a difference type for a parameter
reverse_iterator<vector<int>::iterator>::difference_type diff = 3;

cout<<"\nOperation: rpos(pos)\n";
cout<<"The iterator rpos points to: "<<*rpos<<endl;

//Declare a reference return type & use operator[]
cout<<"\nOperation: refrpos = rpos[diff], where diff = 3\n";
reverse_iterator<vector<int>::iterator>::reference refrpos = rpos[diff];
cout<<"The iterator rpos now points to: "<<refrpos<<endl;   
return 0;
}

-----------------------------------------------------------------------------------------

//reverse_iterator, pointer
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

int main()
{

typedef vector<pair<int, int> > pVector;
pVector vec;
vec.push_back(pVector::value_type(1, 2));
vec.push_back(pVector::value_type(3, 4));
vec.push_back(pVector::value_type(5, 6));

pVector::iterator pvIter;
cout<<"Operation: pvIter->first and pvIter->second\n";
cout<<"The vector vec of integer pairs is: \n";
for(pvIter = vec.begin(); pvIter != vec.end(); pvIter++)
cout<<pvIter->first<<", "<<pvIter->second<<endl;

pVector::reverse_iterator rpvIter;
cout<<"\nOperation: reverse rpvIter->first and rpvIter->second";
cout<<"\nThe vector vec reversed is: \n";
for(rpvIter = vec.rbegin(); rpvIter != vec.rend(); rpvIter++)
cout<<rpvIter->first<< ", " <<rpvIter->second<<endl;

cout<<"\nOperation: pos = vec.begin() then pos++...";
pVector::iterator pos = vec.begin();
pos++;
cout<<"\nThe iterator pos points to:\n"<<pos->first<< ", " <<pos->second<<endl;

cout<<"\nOperation: reverse, rpos(pos)";
pVector::reverse_iterator rpos(pos);
cout<<"\nThe iterator rpos points to:\n"<<rpos->first<< ", " <<rpos->second<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//reverse_iterator, base()
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
int i;

vector<int> vec;
for(i = 10; i<=15; ++i)  
vec.push_back(i);

vector <int>::iterator vIter;
cout<<"The vector vec data: ";
for(vIter = vec.begin(); vIter != vec.end(); vIter++)
cout<<*vIter<<" ";
cout<<endl;

vector<int>::reverse_iterator rvIter;
cout<<"The vector vec reversed data: ";
for(rvIter = vec.rbegin(); rvIter != vec.rend(); rvIter++)
cout<<*rvIter<<" ";
cout<<endl;

cout<<"\nFinding data...";
cout<<"\nOperation: pos = find(vec.begin(), vec.end(), 13)\n";
vector <int>::iterator pos, bpos;
pos = find(vec.begin(), vec.end(), 13);
cout<<"The iterator pos points to: "<<*pos<<endl;

typedef reverse_iterator<vector<int>::iterator>::iterator_type it_vec_int_type;
cout<<"\nFinding data, reverse...\n";
cout<<"Operation: rpos(pos)\n";

reverse_iterator<it_vec_int_type> rpos(pos);
cout<<"The reverse_iterator rpos points to: "<<*rpos<<endl;
bpos = rpos.base();
cout<<"The iterator underlying rpos is bpos & it points to: "<<*bpos<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//Inserter iterator
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
list<int> lst;
list <int>::iterator lstIter;
//insert elements from 1 to 10 into the lst list
for(int i=1; i<=10; ++i)
lst.push_back(i);

cout<<"Operation: lst.push_back(i)\n";
cout<<"lst data: ";
for(lstIter = lst.begin(); lstIter != lst.end(); lstIter++)
cout<<*lstIter<<' ';
cout<<endl;

//copy the elements of lst list into vec vector by appending them
vector<int> vec;
vector <int>::iterator Iter;
//from source to destination...
copy(lst.begin(), lst.end(), back_inserter(vec));

cout<<"\nOperation: copy(lst.begin(), lst.end(), back_inserter(vec))\n";
cout<<"vec data: ";
for(Iter = vec.begin(); Iter != vec.end(); Iter++)
cout<<*Iter<<" ";
cout<<endl;

//copy the elements of lst list into 
//deq deque by inserting them at the front
//and reverses the order of the elements
deque<int> deq;
deque <int>::iterator deqIter;
copy(lst.begin(), lst.end(), front_inserter(deq));

cout<<"\nOperation: copy(lst.begin(), lst.end(), front_inserter(deq))\n";
cout<<"deq data: ";
for(deqIter = deq.begin(); deqIter != deq.end(); deqIter++)
cout<<*deqIter<<" ";
cout<<endl;

//copy elements of lst list into st set
//only inserter that works for associative collections
set<int> st;
set<int>::iterator stIter;
copy(lst.begin(), lst.end(), inserter(st, st.begin()));

cout<<"\nOperation: copy(lst.begin(), lst.end(), inserter(st, st.begin()))\n";
cout<<"set data: ";
for(stIter = st.begin(); stIter != st.end(); stIter++)
cout<<*stIter<<" ";
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//stream iterator
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
vector<string> strvec;
vector <string>::iterator Iter;
//read from the standard input until EOF/error
//the EOF is platform dependent...
//then copy (inserting) to strvec vector...
//copy from begin to end of source, to destination

copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(strvec));

cout<<"\nstrvec data: ";
for(Iter = strvec.begin(); Iter != strvec.end(); Iter++)
cout<<*Iter<<" ";
cout<<endl;

//do some sorting
sort(strvec.begin(), strvec.end());

cout<<"\nstrvec data: ";
for(Iter = strvec.begin(); Iter != strvec.end(); Iter++)
cout<<*Iter<<" ";
cout<<"\n\n";

//print all elements without duplicates to standard output
unique_copy(strvec.begin(), strvec.end(), ostream_iterator<string> (cout, "\n"));
return 0;
}

-----------------------------------------------------------------------------------------

//reverse iterator using
//rbegin() and rend()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
vector<int> vec;
//insert elements from 1 to 10
for(int i=1; i<=10; ++i)
vec.push_back(i);

//print all element in reverse order
copy(vec.rbegin(), vec.rend(), ostream_iterator<int> (cout," "));
cout<<endl;
return 0;
}

---------------------------------------G++--------------------------------------------------
//******ostreamiterator.cpp********
//ostream_iterator, ostream_iterator
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
//ostream_iterator for stream cout
ostream_iterator<int> intOut(cout, "\n");
*intOut = 12;
intOut++;
*intOut = 33;
intOut++;

int i;
vector<int> vec;
for(i = 10; i<=15; ++i)
vec.push_back(i);

cout<<"Operation: with and without delimiter...\n";
//Write elements to standard output stream
cout<<"Elements output without delimiter: ";
copy(vec.begin(), vec.end(), ostream_iterator<int> (cout));
cout<<endl;

//Write elements with delimiter " " to output stream
cout<<"Elements output with delimiter: ";
copy(vec.begin(), vec.end(), ostream_iterator<int> (cout, " "));
cout<<endl;
return 0;
}

-----------------------------------------------------------------------------------------

//*****insertiter.cpp******
//Inserter iterator
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
list<int> lst;
list <int>::iterator lstIter;
//insert elements from 1 to 10 into the lst list
for(int i=1; i<=10; ++i)
lst.push_back(i);

cout<<"Operation: lst.push_back(i)\n";
cout<<"lst data: ";
for(lstIter = lst.begin(); lstIter != lst.end(); lstIter++)
cout<<*lstIter<<' ';
cout<<endl;

//copy the elements of lst list into vec vector by appending them
vector<int> vec;
vector <int>::iterator Iter;
//from source to destination...
copy(lst.begin(), lst.end(), back_inserter(vec));

cout<<"\nOperation: copy(lst.begin(), lst.end(), back_inserter(vec))\n";
cout<<"vec data: ";
for(Iter = vec.begin(); Iter != vec.end(); Iter++)
cout<<*Iter<<" ";
cout<<endl;

//copy the elements of lst list into 
//deq deque by inserting them at the front
//and reverses the order of the elements
deque<int> deq;
deque <int>::iterator deqIter;
copy(lst.begin(), lst.end(), front_inserter(deq));

cout<<"\nOperation: copy(lst.begin(), lst.end(), front_inserter(deq))\n";
cout<<"deq data: ";
for(deqIter = deq.begin(); deqIter != deq.end(); deqIter++)
cout<<*deqIter<<" ";
cout<<endl;

//copy elements of lst list into st set
//only inserter that works for associative collections
set<int> st;
set<int>::iterator stIter;
copy(lst.begin(), lst.end(), inserter(st, st.begin()));

cout<<"\nOperation: copy(lst.begin(), lst.end(), inserter(st, st.begin()))\n";
cout<<"set data: ";
for(stIter = st.begin(); stIter != st.end(); stIter++)
cout<<*stIter<<" ";
cout<<endl;
return 0;
}
