
//function_objects_stl.cpp
//Illustrates several STL built-in function objects.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;

int main()
{
    cout << "\nThis program illustrates several STL function objects.";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    multiplies<int> f;
    cout << "\nThe product of 25 and 6 is " << f(25, 6) << ".";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    //The above is a short form for the following:
    cout << "\nThe product of 12 and 8 is "
         << multiplies<int>().operator()(12, 8) << ".";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    multiplies<double> g;
    cout << "\nThe product of 3.14 and 2.71 is " << g(3.14, 2.71) << ".";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    less<string> h;
    cout << "\nThe expression (\"Hello\" < \"Good-bye\") is "
         << boolalpha << h("Hello", "Good-bye") << ".";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    int a[] = {1, 2, 3, 4, 5};
    vector<int> v(a, a+5);
    cout << "\nHere are the contents of an integer vector:\n";
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');
    cout << "\nNow we negate all the values and re-display to confirm:\n";
    transform(v.begin(), v.end(), v.begin(), negate<int>());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');
}
