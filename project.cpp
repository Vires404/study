#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    double number;
	vector<double>numbers;
	for (double number; cin >> number;)
		{
            numbers.push_back(number);
        }
	sort(numbers.begin(), numbers.end());
    for(int i=0;i<numbers.size();i++)
    cout<<numbers[i]<<endl;
	cout << "media number is" << numbers[numbers.size()/2] << '\n';
    system("pause");
    return 0;
}