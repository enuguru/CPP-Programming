
#include <iostream>
#include <functional>
using namespace std;

int my_free_function(std::string s)
{
    cout << endl << " my free function is called via closure " << endl ;
    return s.size();
}

int main()
{

    std::function< int(std::string) > f;
    f = my_free_function;
    int size = f("cierecloud.com/cppnow");
    cout << " the return value is  "  << size << endl;
    return 0;
}
