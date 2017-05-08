#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

void print(vector<string> vec)
{
	for (auto w:vec)
		cout<< w <<" ";
	cout << endl;
}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}


int main()
{
	string str("the quick red fox jumps over the slow red turtle"); 
	string word;
	istringstream record(str);
	vector<string> vec;
	while(record >> word){
		cout << word <<" ";
		vec.push_back(word);
	}
	cout<<endl;

	print(vec)	;

	elimDups(vec);
	print(vec)	;
	stable_sort(vec.begin(), vec.end(),isShorter);
	print(vec)	;


	return 0;
}
