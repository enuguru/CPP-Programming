

   //function_object.cpp
   //Illustrates a "function object", which is just an object of
   //a class that overloads the "function operator" operator().
   //In other words, it's a class object that behaves like a function.
   //The term "functor" is also used to mean "function object".

   #include <iostream>
   using namespace std;

  class DoubleClass
  {
  public:
      int operator()(int i)
      {
          return 2*i;
      }
  };

  int main()
  {
      cout << "\nThis program illustrates a very simple function object, "
              "or \"functor\". You need\nto study the source code to see "
              "how the values shown below are produced.";
      cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

     DoubleClass f;

      cout << endl;
      cout << f(6)  << endl;
      cout << f(-5) << endl;

      //Actually the above syntax is shorthand for:
      cout << f.operator()(6) << endl;
      cout << f.operator()(-5) << endl;
      cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
  }
