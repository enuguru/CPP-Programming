
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double num = 3.25;

// ex = 325 X (10 ^ 25)
    double ex = 325E25;
// using scientific format
    cout << scientific << num << endl;
    cout << scientific << ex << endl;
    return 0;
}
