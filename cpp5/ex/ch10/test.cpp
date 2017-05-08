#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int a = 50;
	auto f = [a]()mutable{return ++a;};
	auto b=f();
	cout << b<<"," <<a<<endl;

	return 0;
}
