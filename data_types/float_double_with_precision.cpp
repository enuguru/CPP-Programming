
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Setting precision to 11 for double
    cout << "Double Type Number = " << setprecision(11) << a << endl;

    // Setting precision to 7 for float
    cout << "Float Type Number  = " << setprecision(7) << b << endl;

    return 0;
}
