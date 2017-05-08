#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	istream_iterator<int> in(cin),eof;
	ostream_iterator<int> out(cout,",");
	vector<int> vec;
#if 1
	while(in!=eof)
	{
		vec.push_back(*in++);
	}
#endif


//copy(in,eof,back_inserter(vec));
	sort(vec.begin(),vec.end());
//	copy(vec.begin(),vec.end(),out);
	unique_copy(vec.begin(),vec.end(),out);

	return 0;
}
