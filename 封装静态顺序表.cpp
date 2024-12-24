#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 50;

class SQList
{
	int n;
	int arr[N];
public:

	SQList()
	{
		n = 0;
	}
	//接下来对上边实现的顺序表的各种操作就写在public里
	//尾插
	void pushback(int x)
	{
			arr[++n] = x;
	}
	//打印
	void printlist()
	{
		for (int i = 1; i <= n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl << endl;
	}
};

int main()
{
	SQList s1, s2;
	int n;
	cin >> n;
	for (int i = 1; i <= 5; i++)
	{
		s1.pushback(i);
		s2.pushback(i * 2);
	}//这里是对数组进行改变
	s1.printlist();
	s2.printlist();

	return 0;
}
