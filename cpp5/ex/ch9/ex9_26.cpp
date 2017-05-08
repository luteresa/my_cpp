#include <iostream>
#include <list>
#include <forward_list>
#include <vector>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 56, 89};
	vector<int> vec(ia, end(ia));
	list <int> lst(vec.begin(), vec.end());
	forward_list <int> flst(vec.begin(), vec.end());
	
	cout << "vector is:";
	for (auto iter:vec){
		cout << iter <<" ";
	}
	cout << endl;

	cout << "list is:";
	for (auto iter:lst){
		cout << iter <<" ";
	}
	cout << endl;
	cout << "forward list is:";
	for (auto iter:flst){
		cout << iter <<" ";
	}
	cout << endl;
	//remove odd from list
	for (auto iter = lst.begin();iter != lst.end();){
		if (*iter&0x1)
			iter = lst.erase(iter);
		else
			++iter;
	}
	//remove even from vector
	for (auto iter = vec.begin();iter != vec.end();){
		if ((*iter&0x1) == 0 )
			iter = vec.erase(iter);
		else
			++iter;
	}
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end()){
		if (*curr & 0x1)
			curr = flst.erase_after(prev);
		else {
			prev = curr;
			++curr;
		}
	}
	//====================================================
	cout << "after process:"<<endl;
	cout << "vector is:";
	for (auto iter:vec){
		cout << iter <<" ";
	}
	cout << endl;

	cout << "list is:";
	for (auto iter:lst){
		cout << iter <<" ";
	}
	cout << endl;
	cout << "forward list is:";
	for (auto iter:flst){
		cout << iter <<" ";
	}
	cout << endl;
	return 0;
}
