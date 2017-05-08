#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void print(forward_list<string> &list)
{
	for (auto iter :list)
		cout << iter << " ";
	cout << endl;
}
void find_and_insert(forward_list<string> &list, string const & to_find, string const&to_add)
{
	auto prev = list.before_begin();
	for(auto curr = list.begin(); curr != list.end();)
	{
		if (*curr == to_find)
		{
			list.insert_after(curr, to_add);
			return;
		}
		prev = curr++;
	}
	list.insert_after(prev, to_add);
}
int main()
{
	forward_list<string> flst = {"hello", "world","Leon", "Zoe"};
	print(flst);
	find_and_insert(flst, "Leon", "and");
	print(flst);
	return 0;
}
