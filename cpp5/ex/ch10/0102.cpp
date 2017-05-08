#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(void)
{

	vector<int>  v = {1,2,3,4,5,6,7,8,9,3,4,5,6,6,6,6};
	cout<<"vector<int>v:";
	for(auto c:v)
		cout << c;
	cout<<endl;
	cout << "6 appears:" << count(v.cbegin(),v.cend(),6)<<endl;

	list<string> l = {"abc","abcd","abc","ddd","abc"};
	cout<<"abc appears:"<<count(l.cbegin(),l.cend(),"abc")<<endl;
	return 0;
}

