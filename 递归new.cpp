#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*�ݹ�*/
//���ƺͻع�
//�����Լ������Լ�
//�ݹ�һ��Ҫ������������
//ÿ�εݹ�Խ��Խ�ӽ���������
//���»�С

/*����׳�*/
//int Fact(int x)
//{
//	if (x == 0)
//		return 1;
//	else
//		return x * Fact(x - 1);
//}//x����x-1��x-1�ٽ��뺯������ǰ����һ��x�����ϵ�������
//int main()
//{
//	int n;
//	cin >> n;
//	int r = Fact(n);
//	cout << r << endl;
//	return 0;
//}

/*��1+2+3+...+N*/
//int Sum(int x)
////�տ�ʼ����û�����������Ĵ���
//{
//	if(x>1)
//	return x + Sum(x - 1);
//	if (x == 1)
//		return 1;
//}//һ��Ҫ�м������
//int main()
//{
//	int n;
//	cin >> n;
//	int r = Sum(n);
//	cout << r << endl;
//	return 0;
//}

/*digit����*/
//int digit(int n, int k)
//{
//	int ret = 0;
//	while (k--)
//	{
//		ret = n % 10;
//		n /= 10;
//	}
//	return ret;
//}
//int digit(int n, int k)
//{
//	if (k == 1)
//		return n % 10;
//	else
//	return digit(n / 10, k - 1);
//}
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int r = digit(n, k);
//	cout << r << endl;
//	return 0;
//}

/*��f(x,n)*/
//#include<cmath>
//#include<cstdio>
//double f(double x, int n)
//{
//	if (n == 1)
//		return sqrt(1 + x);
//	if (n > 1)
//		return sqrt(n + f(x, n-1));
//}
//int main()
//{
//	int n;
//	double x;
//	cin >> x >> n;
//	double r = f(x, n);
//	printf("%.2lf", r);
//	return 0;
//}
//���磬���ȸ������������˶��ٴΣ������Ҫ��ָ�����������署��ӡ��������Ļ��������Լ����������˾ͣ�����ô�У����꣬�Լ�������������һ�飬˼��

//#include<cstdio>
//double f(double x, int n)
//{
//	if (n == 1)
//		return x / (1 + x);
//	else
//		return x / (n + f(x, n - 1));
//}
//int main()
//{
//	double x;
//	int n;
//	cin >> x >> n;
//	double r = f(x, n);
//	printf("%.2lf", r);
//	return 0;
//}

/*����ת��*/
string s = "0123456789ABCDEF";
void x_to_m(int x, int m)
{
	if (x >= m)
		x_to_m(x / m, m);
		cout << s[x % m];
}
int main()
{
	int x, m;
	cin >> x >> m;
	x_to_m(x, m);
	return 0;
 }