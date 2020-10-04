

#include <iostream>
using namespace std;

enum State {WORKING = 0, FAILED, FREEZED}; 
enum State currState = 2; 

enum State FindState() { 
	return currState; 
} 

int main() { 
(FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING"); 
return 0; 
} 
