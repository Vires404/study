//¼òµ¥¼ÆËãÆ÷
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cout << "please enter 2 numbers and symbol just like a calculator" << '\n';
	double a, b;
	double answer = 0;
	string simple;
	cin >> a >> b >> simple;
	if (simple == "+")
	{
		answer = a + b;
		cout << answer << '\n';
	}
	else if (simple == "-")
	{
		answer = a - b;
		cout << answer;
	}
	else if (simple == "*")
	{
		answer = a * b;
		cout << answer << '\n';
	}
	else if (simple == "/")
	{
		answer = a / b;
		cout << answer;
	}
	else
		cout << "error" << '\n';
}
