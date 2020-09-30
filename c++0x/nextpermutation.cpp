
#include <iostream>
using namespace std;

// generate all numbers with digits 1,1,3,4,7
#include <algorithm>
#include <iostream>
using namespace std;
int A[] = {1,1,3,4,7};
int main() {
do {
for (int i=0; i<5; ++i) cout << A[i];
cout << endl;
} while (next_permutation(A,A+5));
}
