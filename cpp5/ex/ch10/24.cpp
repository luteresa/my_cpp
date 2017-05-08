#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::placeholders;
bool big(const string &s,int sz)
{
	return s.size()<sz;
}
vector<int>::const_iterator find_first(vector<int> &ve, const string &str)
{
	return find_if(ve.begin(),ve.end(),bind(big,str,_1));
}

int main()
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7,8,9,10};
	string s("hello");
	auto it = find_first(v,s);
	if (*it)
		cout<<*it;
	else
		cout<<"not found";
	cout<<endl;

	return 0;
}
