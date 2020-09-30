
#include <algorithm>
using namespace std;

/* function that compares two pointers by comparing the values to which they point
 */
bool int_ptr_less (int* a, int* b)
{
    return *a < *b;
}

int main()
{
    int x = 17;
    int y = 42;
    int* px = &x;
    int* py = &y;
    int* pmax;

    // call max() with special comparison function
    pmax = max (px, py, int_ptr_less);
    //...
}
