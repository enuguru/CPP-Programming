
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
    // capture t by value
    auto m1 = [=]() {  // since we are using a objet t of class trace, there is a copy constructor
        int i=t.i;     // called while creating this lambda function
    };
    cout << "-- make copy --" << endl;
    auto m2 = m1;
    return 0;
}
