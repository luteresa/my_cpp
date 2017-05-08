#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	vector<string> roster1 = {"Mooophy", "pezy", "Queequeg"};
	list<string> roster2 = {"Mooophy", "pezy", "Queequeg", "shbling","evan617"};
	cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());

	return 0;
}
