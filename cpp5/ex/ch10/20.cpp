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
	auto v=vector<string>{"a","as333","aasss","aaaaassaa","aaaaaabba","aaa"};
//	auto pivot=partition(v.begin(), v.end(), predicate);
	auto cnt=count_if(v.begin(),v.end(),[](const string s){return s.size()>4;});

	cout<<cnt;
	cout<<endl;

	return 0;
}
