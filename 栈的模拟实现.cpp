#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int stk[N], n;
//��ջ
void push(int x)
{
	stk[++n] = x;
}
//��ջ
void pop()
{
	n--;
}
//ջ��Ԫ��
int top()
{
	return stk[n];
}
//�ж��Ƿ�Ϊ��ջ
bool empty()
{
	return n == 0;
}
//��ЧԪ�ظ���
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
