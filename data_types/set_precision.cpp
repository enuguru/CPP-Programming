
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x=10.3445f;
    
    cout<<fixed<<setprecision(5)<<x<<endl;
    cout<<fixed<<setprecision(2)<<x<<endl;
    cout<<fixed<<setprecision(3)<<x<<endl;
    cout<<fixed<<setprecision(0)<<x<<endl;
    
    return 0;
}

