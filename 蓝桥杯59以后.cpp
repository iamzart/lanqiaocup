#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;
//int main()
//{
//	int n;
//	double sum1 = 0, sum2 = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (int j = 2; j <= n; j += 2)
//	{
//		sum2 += 1.0 / j;
//	}
//	double result = sum1 - sum2;
//	cout << fixed << setprecision(4) << result << endl;
//	return 0;
//}


//int main()
//{
//	int h = 0;
//	scanf("%d", &h);
//	double sum = h, tmp;
//	int count = 0;
//	do
//	{
//		h /= 2*1.0;
//		sum += h;
//		count++;
//		if (count == 10)
//			tmp = h;
//	} while (count <= 10);
//	printf("%lf %lf", sum, tmp);
//
//	return 0;
//}





//int main()
//{
//	int a, b, f;
//	char c;
//	cin >> a >> b >> c >> f;//输入
//	//先输入第一行，循环
//	//第二行，外循环多少行，内循环输入字符和空格
//	for (int i = 0; i < b; i++)
//	{
//		cout << c;//第一行
//	}
//	if (f == 0)
//	{
//		for (int m = 1; m <= b; m++)
//		{
//			cout << c;
//			for (int i = 0; i < b-2; i++)//输入空心
//			{
//				for (int j = 1; j <= b - 2; j++)
//				{
//					cout << " ";
//				}
//				cout << c << endl;
//			}
//		}
//	}
//	else
//	{
//		for (int m = 0; m < a - 2; m++)
//		{
//			for (int i = 0; i < b; i++)
//			{
//				cout << c << endl;
//			}
//		}printf("\n");
//	}
//	for (int i = 0; i < b; i++)
//	{
//		cout << c;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, f;
//	char c;
//	cin >> a >> b >> c >> f;
//	//循环打印，先打印行再打印列
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			if (i == 1 || i == a || j == 1 || j == b)
//			{
//				cout << c;
//			}
//			else
//			{
//				if (f == 0)
//					cout << " ";
//				else
//					cout << c;
//			}
//		}cout << endl;
//		//为什么在这里换行，因为a行b列，打印b的时候就是在一行里一个一个的向右打印
//	}
//	
//
//	return 0;
//}



/*找第n个素数*/
//先用循环，i遍历，如果是素数，就计数器+1，当记够n个，就OK了
//因为不知道一共循环多少次，就用while让他一直循环，知道n为止
//或许我觉得用for，i=30000，然后找到n后break
//int main()
//{
//	int n = 0, count = 0;
//	int i = 2;
//	cin >> n;
//	while (1)
//	{
//		//判断i是否是素数
//		int flag = 1;//假设是素数
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			int b = sqrt(i);
//			if (i % j == 0)//能整除，不是素数
//			{
//				flag = 0;
//				break;
//			}
//		}//得再循环之外判断是否是素数，因为得等他遍历完了，如果if和else是并列的，判断出一个偶然就会定型，不完整
//		if (flag == 1)//整个循环中都没能被整除
//			count++;
//		//如果是，count++
//		if (count == n)
//			break;
//		i++;
//	}
//	cout << i << endl;
//	return 0;
//}



//
/*水仙花数*/
//先分离三位数，用循环遍历，当满足，就输出

//int main()
//{
//	int a;
//	int num1, num2, num3;
//	for (int i = 100; i <= 999; i++)
//	{
//		a = i;
//		num1 = a % 10;//个位
//		a /= 10;
//		num2 = a % 10;//十位
//		a /= 10;
//		num3 = a % 10;//百位
//		if (num1 * num1 * num1 + num2 * num2 * num2 + num3 *  num3 * num3 == i)
//			cout << i << endl;
//	}
//	return 0;
//}