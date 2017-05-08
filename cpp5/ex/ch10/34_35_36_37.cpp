#include<iostream>
#include<string>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>

using namespace std;

void print(vector<string> &v)
{
	for(auto s:v)
		cout<<s<<",";
	cout<<endl;
}
list<int>::iterator find_last0(list<int> &l)
{
	auto r_it =  find(l.rbegin(),l.rend(),0);
	auto it = r_it.base();

	return prev(it);

}
bool isBig(int &a, int &b)
{
	return a>b;
}
void vec2list_3_7_reverse(const std::vector<int>& v, std::list<int>& l)
{
	//copy(v.begin()+3,v.begin()+8,back_inserter(l));
	copy(v.begin()+3,v.begin()+8,front_inserter(l));
	//sort(l.begin(),l.end(),[](const int & l, const int &r){ return l > r;});
//	sort(l.begin(),l.end(),isBig);
//	copy(v.crbegin() + 3, v.crbegin() + 8, std::back_inserter(l));
}

int main()
{
	vector<string> v{"aaa","bbb","ccc"};
	print(v);
	//for34
	for_each(v.crbegin(),v.crend(),[](string const &s){cout<<s<<",";});

	cout<<endl;
//for 35 print with odinary
	for(auto it = prev(v.end());it!=prev(v.begin());it--)
		cout<<*it<<",";
	cout<<endl;

//for 36, find last val==0
	list<int> l{1,2,3,4,0,2,5,0,6};
	auto it0=find_last0(l);
	cout<<*it0<<endl;
//for37
	vector<int> v2{0,1,2,3,4,5,6,7,8,9,10};
	list<int> l2;
	vec2list_3_7_reverse(v2,l2);
//	sort(l2.begin(),l2.end(),[](int const &lv, int const &rv){return lv > rv;});
	l2.reverse();
//	reverse(l2.begin(),l2.end());
	for_each(l2.begin(),l2.end(),[](int v_l2){
		cout<<v_l2<<",";});
	return 0;
}
