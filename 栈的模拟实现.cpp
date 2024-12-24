#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int stk[N], n;
//进栈
void push(int x)
{
	stk[++n] = x;
}
//出栈
void pop()
{
	n--;
}
//栈顶元素
int top()
{
	return stk[n];
}
//判断是否为空栈
bool empty()
{
	return n == 0;
}
//有效元素个数
int size()
{
	return n;
}

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		push(i);
	}
	while (!empty())
	{
		cout << top() << endl;
		pop();
	}
	return 0;
}
