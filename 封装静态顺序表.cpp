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
	//���������ϱ�ʵ�ֵ�˳���ĸ��ֲ�����д��public��
	//β��
	void pushback(int x)
	{
			arr[++n] = x;
	}
	//��ӡ
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
	}//�����Ƕ�������иı�
	s1.printlist();
	s2.printlist();

	return 0;
}
