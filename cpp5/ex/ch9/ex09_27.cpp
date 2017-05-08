#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list<int> flt = {0,1,2,3,4,5,6,7,8,9,10,11,21,23,22};

	for(auto prev = flt.before_begin(), curr = flt.begin();curr != flt.end();){
		if (*curr & 0x1) {
			curr = flt.erase_after(prev);
		}else {
			prev = curr;
			curr++;
		}

	}

	for (auto i : flt){
		cout << i<<"  ";
	}
	cout << endl;


	return 0;
}
