#include <iostream>
#include <string>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> lt{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 45, 46};
	deque<int> odd, even;

	for(auto tmp : lt) {
		if(tmp &0x1) 
			odd.push_back(tmp);
		else 
			even.push_back(tmp);
	}

	cout << "odd deque:";
	for (auto tmp : odd)
		cout << tmp <<" ";
	cout << endl;
	cout << "even deque:";
	for (auto tmp : even)
		cout << tmp<< " ";
	cout << endl;
	
	return 0;
}
