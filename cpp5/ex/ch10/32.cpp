#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <numeric>
#include "../include/Sales_item.h"

using namespace std;

int main()
{
	istream_iterator<Sales_item> in_iter(cin),in_eof;
	ostream_iterator<Sales_item> out(cout,",\n");
	vector<Sales_item> vec;
	cout<<"time:"<<__DATE__<<__TIME__<<endl;
	cout<<"line:"<<__LINE__<<endl;;
#if 1
	while(in_iter!=in_eof)
	{
		vec.push_back(*in_iter++);
	}
#endif


//copy(in,eof,back_inserter(vec));
	sort(vec.begin(),vec.end(),[](Sales_item const &ls,Sales_item const &rs){
		return ls.isbn()<rs.isbn();
		});
//	copy(vec.begin(),vec.end(),out);

	for(auto beg=vec.begin(),end=beg; beg!=vec.end();beg=end){
		end = find_if(beg,vec.end(),[=](const Sales_item & item){
			return beg->isbn()!= item.isbn();
			});
		cout<<accumulate(beg,end,Sales_item(beg->isbn()))<<endl;
	}
//	unique_copy(vec.begin(),vec.end(),out);

	return 0;
}
