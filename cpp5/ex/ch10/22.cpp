#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::placeholders;
bool predicate(const string &s)
{
	return s.size()>5;
}
bool predicate2(const string &s,int size)
{
	return s.size()>size;
}

int main()
{
	auto v=vector<string>{"a","as333","aasss","aaaaassaa","aaaaaabba","aaa"};
//	auto cnt=count_if(v.begin(),v.end(),[](const string s){return s.size()>4;});
	auto cnt=count_if(v.begin(),v.end(),bind(predicate2,_1,5));

	cout<<cnt;
	cout<<endl;

	return 0;
}
