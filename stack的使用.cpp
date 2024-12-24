#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>st;
	for (int i = 1; i <= 10; i++)
	{
		st.push(i);
	}
	while (st.size())
	{
		cout << st.top() << endl;;
		st.pop();
	}



}