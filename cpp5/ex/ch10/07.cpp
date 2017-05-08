#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	vector<int> vec;
	list<int> lst;
	int i;

	while(cin >> i)
		lst.push_back(i);
	//vec.resize(lst.size());
	cout<<"lst.size()"<<lst.size()<<endl;
	cout<<"vec.size()"<<vec.size()<<endl;
//	copy(lst.cbegin(),lst.cend(),vec.begin());
	copy(lst.cbegin(),lst.cend(),back_inserter(vec));

	cout<<"vec.size()"<<vec.size()<<endl;
	
	for(auto val:vec){
		cout << val;
	}
	cout<<endl;

	vector <int> v2;
//	v2.reserve(10);
	v2.resize(10);
	fill_n(v2.begin(),10,0);
	v2.push_back(9);
	v2.push_back(3);
	cout<<"v2.size()"<<v2.size()<<endl;
	for(auto val:v2){
		cout << val;
	}
	cout<<endl;

	return 0;
}
