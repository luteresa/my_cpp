#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include "ex7_26.h"

using namespace std;

inline bool compareIsbn(const Sales_data& sd1, const Sales_data&sd2)
{
	return  sd1.isbn().size() < sd2.isbn().size();
}

int main()
{
	Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	std::vector<Sales_data> v{d1, d2, d3, d4, d5};
	sort(v.begin(),v.end(),compareIsbn);

	for(auto element:v){
			cout<< element.isbn()<<"   ";
		}
		cout <<endl;

	return 0;
}
