#include <iostream>
#include <forward_list>
using namespace std;
void find_and_insert(forward_list<string> &list, string const& to_find, string const& to_add)      
{
	auto prev = list.before_begin();
	for (auto curr = list.begin(); curr != list.end();)
	{
		if (*curr == to_find){
			list.insert_after(curr,to_add);
			return;
		}
		prev = curr++;
	}
	list.insert_after(prev,to_add);
}
int main()
{
	forward_list<string> fls = {"hello","world","welcome", "to", "shenzhen"};
	auto prev = fls.before_begin();

	for(auto s: fls)
		cout << s <<"  ";
	cout << endl;
	string s1 = "to";
	string s2 = "hhh";
	find_and_insert(fls, s1, s2);

	for(auto s: fls)
		cout << s <<"  ";
	cout << endl;
	return 0;
}
