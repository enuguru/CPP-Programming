
#include <iostream>
using namespace std;

int main() {
  void* ptr;
  float f = 2.3f;

  // assign float address to void pointer
  ptr = &f;

  cout << "The content of pointer is ";
  // use type casting to print pointer content
  cout << *(static_cast<float*>(ptr));

  return 0;
}
