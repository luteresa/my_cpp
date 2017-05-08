#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
//	istream_iterator<int>  in(cin), eof;
//	cout<< accumulate(in,eof,0) <<endl;

	vector<int> v{1,2,3,4,5,6};
	ostream_iterator<int> out_iter(cout, ",");
//	for(auto e:v)
	//	*out_iter++ = e;
//		out_iter = e;
	copy(v.begin(),v.end(),out_iter);
	cout<<endl;

	return 0;
}
