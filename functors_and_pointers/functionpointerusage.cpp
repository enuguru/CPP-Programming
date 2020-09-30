

#include <iostream>
using namespace std;

// 2.1 define a function pointer and initialize to NULL
int (*pt2Function)(float, char, char) = NULL;                    // C
int (TMyClass::*pt2Member)(float, char, char) = NULL;            // C++
int (TMyClass::*pt2ConstMember)(float, char, char) const = NULL; // C++


// 2.2 define the calling convention
void __cdecl DoIt(float a, char b, char c);                         // Borland and Microsoft
void         DoIt(float a, char b, char c) __attribute__((cdecl));  // GNU GCC

/ 2.3 assign an address to the function pointer
//     Note: Although you may ommit the address operator on most compilers
//     you should always use the correct way in order to write portable code.
// C

int DoIt  (float a, char b, char c){ printf("DoIt\n");   return a+b+c; }
int DoMore(float a, char b, char c)const{ printf("DoMore\n"); return a-b+c; }
pt2Function = DoIt;      // short form
pt2Function = &DoMore;   // correct assignment using address operator


// C++
class TMyClass
{
public:
int DoIt(float a, char b, char c){ cout << "TMyClass::DoIt"<< endl; return a+b+c;};
int DoMore(float a, char b, char c) const { cout << "TMyClass::DoMore" << endl; return a-b+c; };
/* more of TMyClass */
};

pt2ConstMember = &TMyClass::DoMore; // correct assignment using address operator
pt2Member = &TMyClass::DoIt; // note: <pt2Member> may also legally point to &DoMore

// 2.4 comparing function pointers
// C
if(pt2Function >0){                           // check if initialized
if(pt2Function == &DoIt)
printf("Pointer points to DoIt\n"); }
else
printf("Pointer not initialized!!\n");
// C++
if(pt2ConstMember == &TMyClass::DoMore)
cout << "Pointer points to TMyClass::DoMore" << endl;

// 2.5 calling a function using a function pointer
int result1 = pt2Function    (12, ’a’, ’b’);          // C short way
int result2 = (*pt2Function) (12, ’a’, ’b’);          // C
TMyClass instance1;
int result3 = (instance1.*pt2Member)(12, ’a’, ’b’);   // C++
int result4 = (*this.*pt2Member)(12, ’a’, ’b’);       // C++ if this-pointer can be used
TMyClass* instance2 = new TMyClass;
int result4 = (instance2->*pt2Member)(12, ’a’, ’b’);  // C++, instance2 is a pointer
delete instance2;
