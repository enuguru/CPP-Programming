

#include <iostream>
#include <functional>
using namespace std;

int main()
{
    std::function< int(std::string const &) > f;
    f = [](std::string const & s) {
        return s.size();
    };
    int size = f("cierecloud.com/cppnow");
    cout << endl << "This is simple closure object a lambda function whose context is stored " << "the value is returned is " << size << endl ;
    return 0;
}
