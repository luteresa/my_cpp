#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
void print(const list<string> &v)
{
	for(auto word:v)
		cout<<word<<" ";
	cout<<endl;
}
void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
	print(words);
}
int main()
{
	auto v=list<string>{"aaa","aaa","aaa4","aaa","bbb","bbb","bbb3","bbb2"};
	elimDups(v);

	cout<<endl;

	return 0;
}
