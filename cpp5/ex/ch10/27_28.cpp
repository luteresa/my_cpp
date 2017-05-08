#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
using namespace std::placeholders;
void print(const list<string> &v)
{
	for(auto word:v)
		cout<<word<<" ";
	cout<<endl;
}
int main()
{
	auto v=vector<string>{"1234","as","as","12345","12345","h5aaa"};
//	list<string> lst{"hello","world"};
	list<string> lst;

	unique_copy(v.begin(),v.end(),back_inserter(lst));
//	unique_copy(v.begin(),v.end(),front_inserter(lst));
//	unique_copy(v.begin(),v.end(),inserter(lst,lst.begin()));
//	unique_copy(v.begin(),v.end(),inserter(lst,lst.end()));

	print(lst);


	cout<<endl;

	return 0;
}
