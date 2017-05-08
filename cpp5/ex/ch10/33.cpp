#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std;

void print(int v)
{
	cout<<v<<endl;
}
int main(int argc, char **argv)
{
	ifstream  ifs(argv[1]);
	ofstream ofs_odd(argv[2]),ofs_even(argv[3]);
	ostream_iterator<int> out(cout,",\n");
	istream_iterator<int> in_ifs(ifs),eof;
	ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

	for_each(in_ifs,eof,[&](const int i){
		*(i&0x1?out_odd:out_even)=i;
		});

	return 0;
}
