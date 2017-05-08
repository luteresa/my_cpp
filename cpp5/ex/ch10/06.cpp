#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
	fill_n(vec.begin(),vec.size(),1);

	for(auto val:vec){
		cout << val;
	}
	cout<<endl;

	return 0;
}
