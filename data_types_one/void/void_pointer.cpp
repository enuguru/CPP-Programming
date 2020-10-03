#include <iostream>
using namespace std;

int main() {
    void* ptr;
    float f = 2.3f;

    // assign float address to void
    ptr = &f;

    cout << &f << endl;
    cout << ptr << endl;

    return 0;
}