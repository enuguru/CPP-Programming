
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

struct my_struct
{
    public:
    my_struct( std::string const & s) : s_(s) {}
    int size() const {
        return s_.size();
    }
    string s_;
};

int main()
{

    my_struct mine("cierecloud.com/cppnow");
    function< int() > f;
    f = std::bind( &my_struct::size, std::ref(mine) );
    int size = f();
    cout << " the return value is  " << size << endl;
    return 0;
}
