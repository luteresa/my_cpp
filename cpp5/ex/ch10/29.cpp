#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;
int main()
{
	ifstream ifs("../data/book.txt");
	istream_iterator<string>  in(ifs),eof;
	vector<string> vec;
#if 0
	while(in!=eof)
	{
		vec.push_back(*in++);
	}
#endif


	copy(in,eof,back_inserter(vec));
	for(auto s:vec)
		cout<<s<<endl;
	cout<<endl;
	ostream_iterator<string> out(cout,",\n");
	copy(vec.begin(),vec.end(),out);

	return 0;
}
