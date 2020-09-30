
#include <iostream>
using namespace std;

class TFunctor
{
  public:
	// two possible functions to call member function. virtual cause derived
	// classes will use a pointer to an object and a pointer to a member                
        // function to make the function call

	virtual void operator()(const char* string)=0; // call using operator
	virtual void Call(const char* string)=0; // call using function
};


// derived template class

template <class TClass> class TSpecificFunctor : public TFunctor
{
   private:
	void (TClass::*fpt)(const char*); // pointer to member function
	TClass* pt2Object; // pointer to object
   public:
	// constructor - takes pointer to an object and pointer to a member and 		
        //  stores them in two private variables

	TSpecificFunctor(TClass* _pt2Object, void(TClass::*_fpt)(const char*))
		{ pt2Object = _pt2Object; fpt=_fpt; };
	// override operator "()"
	virtual void operator()(const char* string)
		{ (*pt2Object.*fpt)(string);}; // execute member function
	// override function "Call"

	virtual void Call(const char* string)
		{ (*pt2Object.*fpt)(string);}; // execute member function
};

// dummy class A

class TClassA
{
   public:
	TClassA(){};
	void Display(const char* text) { cout << text << endl; };
	/* more of TClassA */
};


// dummy class B

class TClassB
{
   public:
	TClassB(){};
	void Display(const char* text) { cout << text << endl; };
	/* more of TClassB */
};

// main program

int main(int argc, char* argv[])
{
	// 1. instantiate objects of TClassA and TClassB

	TClassA objA;
	TClassB objB;

	// 2. instantiate TSpecificFunctor objects ...
	//a)functor which encapsulates pointer to object and to member of TClassA

	TSpecificFunctor<TClassA> specFuncA(&objA, &TClassA::Display);

	// b) functor which encapsulates pointer to object and to member of TClassB

	TSpecificFunctor<TClassB> specFuncB(&objB, &TClassB::Display);

	// 3. make array with pointers to TFunctor,the base class and initialize it

	TFunctor* vTable[] = { &specFuncA, &specFuncB };

	// 4. use array to call member functions without the need of an object

	vTable[0]->Call("TClassA::Display called!"); // via function "Call"
	(*vTable[1]) ("TClassB::Display called!"); // via operator "()"
	cout << endl << "Hit Enter to terminate!" << endl;
	cin.get();
	return 0;
}
