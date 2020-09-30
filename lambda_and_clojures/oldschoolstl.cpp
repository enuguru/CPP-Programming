
#include <iostream>
#include <vector>
//using namespace std;

int main()
{
    std::vector<int> myvector;
    for (int i=1; i<=5; i++) myvector.push_back(i);
    std::vector<int>::const_iterator iter = myvector.begin();
    std::vector<int>::const_iterator iter_end = myvector.end();
    int total_elements = 1;
    while( iter != iter_end )
    {
        total_elements *= *iter;
        ++iter;
    }
    std::cout << std::endl << "the value of total elements is  " << total_elements <<  std::endl;
    return 0;
}
