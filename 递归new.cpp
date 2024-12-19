#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*递归*/
//递推和回归
//函数自己调用自己
//递归一定要存在限制条件
//每次递归越来越接近限制条件
//大事化小

/*计算阶乘*/
//int Fact(int x)
//{
//	if (x == 0)
//		return 1;
//	else
//		return x * Fact(x - 1);
//}//x乘上x-1，x-1再进入函数，最前边有一个x，不断地攒攒攒
//int main()
//{
//	int n;
//	cin >> n;
//	int r = Fact(n);
//	cout << r << endl;
//	return 0;
//}

/*求1+2+3+...+N*/
//int Sum(int x)
////刚开始犯了没有限制条件的错误
//{
//	if(x>1)
//	return x + Sum(x - 1);
//	if (x == 1)
//		return 1;
//}//一定要有极限情况
//int main()
//{
//	int n;
//	cin >> n;
//	int r = Sum(n);
//	cout << r << endl;
//	return 0;
//}

/*digit函数*/
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

/*求f(x,n)*/
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
//额大哥，我先给你算算你马虎了多少次，如果你要是指望着听完鹏哥讲的印象来做题的话，那你自己不动脑子了就，这怎么行，听完，自己在脑子里在想一遍，思考

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

/*进制转换*/
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