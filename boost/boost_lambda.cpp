#include <vector>
#include <boost/lambda/lambda.hpp>
#include <algorithm>
#include <iostream>
#include <boost/phoenix/core.hpp>
#include <boost/phoenix/function.hpp>

using boost::phoenix::function;

using namespace std;

int main()
{
	vector<int> v;
	for(int i = 1; i <= 10; i++) v.push_back(i);
	for_each(v.begin(), v.end(), cout << phx::ref(total_elements) *= _1 );
	return 0;
}
