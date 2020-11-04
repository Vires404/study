//sortÅÅĞò
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	double number;
	vector<double>numbers;
	for (double number; cin >> number;)
		numbers.push_back(number);
	sort(numbers.begin(), numbers.end());
	cout << "media number is" << numbers[numbers.size()/2] << '\n';

}