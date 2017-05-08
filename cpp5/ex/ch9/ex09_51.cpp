#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sum_for_int(const vector<string> &v)
{
	int sum = 0;
	for (auto i:v)
	{
		sum += stoi(i);
	}
	
	return sum;
}
double sum_for_float(const vector<string> &v)
{
	double sum = 0.0;
	for (auto i:v)
	{
		sum += stod(i);
	}
	
	return sum;
}
int main()
{

	vector<string> v = {"1", "2", "3", "4.5"};

	cout << "sum of int:" << sum_for_int(v) << endl;
	cout << "sum of float:" << sum_for_float(v) << endl;

	return 0;
}
