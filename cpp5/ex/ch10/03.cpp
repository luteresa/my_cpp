#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5,6};
	cout << "vec int sum:" << accumulate(v.cbegin(),v.cend(),0)<<endl;

	vector<double> d = {1.1,2.2,3.3};
	cout << "vec double sum:" << accumulate(d.cbegin(),d.cend(),0.0)<<endl;
	return 0;
}
