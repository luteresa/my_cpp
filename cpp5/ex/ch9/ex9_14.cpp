#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char*>  l{"Moonphy","zoe","leon"};
	vector<string> v;

	v.assign(l.cbegin(),l.cend());

	cout<<"size:"<<v.size()<<" max_size:"<< v.max_size() << " empty:" <<v.empty()<<endl;
	for(const auto&ch:v)
		cout << ch << endl;

	return 0;
}
