#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool predicate(const string &s)
{
	return s.size()>5;
}

int main()
{
	auto v=vector<string>{"a","as","aasss","aaaaassaa","aaaaaabba","aaa"};
	auto pivot=partition(v.begin(), v.end(), predicate);

	for(auto it=v.begin();it!=pivot;it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}
