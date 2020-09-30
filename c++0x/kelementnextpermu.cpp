

#include <algorithm>
#include <iostream>
using namespace std;
int A[] = {0,0,0,1,1,1,1};
int main() {
do {
for (int i=0; i<7; ++i) if (A[i]) cout << i;
cout << endl;
} while (next_permutation(A,A+7));
}
