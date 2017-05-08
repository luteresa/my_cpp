#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a=10;

	auto check_and_dec = [&](){return --a?false:true;};
	a=5;
	while(!check_and_dec())cout<<a<<endl;
	cout<<a;
	cout<<endl;

	return 0;
}
