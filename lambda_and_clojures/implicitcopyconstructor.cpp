
#include <iostream>
using namespace std;


struct trace
{
    trace() : i(0) {
        cout << "construct\n";
    }
    trace(trace const &) {
        cout << "copy construct\n";
    }
    ~trace() {
        cout << "destroy\n";
    }
    trace& operator=(trace&) {
        cout << "assign\n";
        return *this;
    }
    int i;
};

int main()
{
    trace t;
    int i = 8;
    // t not used so not captured
    auto m1 = [=]() {
        return i/2;
    };
    return 0;
}
