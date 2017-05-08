#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string ,int> m;
	string word;
	while(cin >> word)
		++m[word];

	for(auto e:m)
		cout<<e.first<<":"<<e.second<<endl;
	return 0;
}
