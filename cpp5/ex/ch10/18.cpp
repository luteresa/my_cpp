#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void print(const vector<string> &v)
{
	for(auto word:v)
		cout<<word<<" ";
	cout<<endl;
}
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique);

}
bool isShorter(string &s1, string &s2)
{
		return s1.size() < s2.size();
	}
void biggest_partition(vector<string> &v, size_t sz)
{
	print(v);
	elimDups(v);
	print(v);
	//! sort by size, but maintain alphabetical order for same size.
	stable_sort(v.begin(),v.end(),
			[](string const &l,string const &r) {
				return l.size()<r.size();
				});

	print(v);
//	auto wc = find_if(v.begin(),v.end(),[sz](string const &s){ return s.size()>=sz;});
	auto wc = partition(v.begin(),v.end(),[sz](string const &s){return s.size() < sz;});

	for_each(wc,v.end(),
			[](string const &s){cout<<s<<endl;});


}
#if 1
void biggest_stable_partition(vector<string> &v, size_t sz)
{
	print(v);
	elimDups(v);
	cout<<"after sort and elimDups"<<endl;
	print(v);
	//! sort by size, but maintain alphabetical order for same size.
	auto wc =stable_partition(v.begin(),v.end(),
			[sz](string const &s) {
				return s.size()>=sz;
				});


	for_each(v.begin(),wc,
			[](string const &s){cout<<s<<endl;});


}
#endif
int main()
{
	auto v=vector<string>{"1234","as","12345","hello","123456","12345a","12345bba","12345aaa"};

//	biggest_partition(v,5);
	biggest_stable_partition(v,4);

	cout<<endl;

	return 0;
}
