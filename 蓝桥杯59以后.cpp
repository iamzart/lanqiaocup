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
//	cin >> a >> b >> c >> f;//����
//	//�������һ�У�ѭ��
//	//�ڶ��У���ѭ�������У���ѭ�������ַ��Ϳո�
//	for (int i = 0; i < b; i++)
//	{
//		cout << c;//��һ��
//	}
//	if (f == 0)
//	{
//		for (int m = 1; m <= b; m++)
//		{
//			cout << c;
//			for (int i = 0; i < b-2; i++)//�������
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
//	//ѭ����ӡ���ȴ�ӡ���ٴ�ӡ��
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
//		//Ϊʲô�����ﻻ�У���Ϊa��b�У���ӡb��ʱ�������һ����һ��һ�������Ҵ�ӡ
//	}
//	
//
//	return 0;
//}



/*�ҵ�n������*/
//����ѭ����i������������������ͼ�����+1�����ǹ�n������OK��
//��Ϊ��֪��һ��ѭ�����ٴΣ�����while����һֱѭ����֪��nΪֹ
//�����Ҿ�����for��i=30000��Ȼ���ҵ�n��break
//int main()
//{
//	int n = 0, count = 0;
//	int i = 2;
//	cin >> n;
//	while (1)
//	{
//		//�ж�i�Ƿ�������
//		int flag = 1;//����������
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			int b = sqrt(i);
//			if (i % j == 0)//����������������
//			{
//				flag = 0;
//				break;
//			}
//		}//����ѭ��֮���ж��Ƿ�����������Ϊ�õ����������ˣ����if��else�ǲ��еģ��жϳ�һ��żȻ�ͻᶨ�ͣ�������
//		if (flag == 1)//����ѭ���ж�û�ܱ�����
//			count++;
//		//����ǣ�count++
//		if (count == n)
//			break;
//		i++;
//	}
//	cout << i << endl;
//	return 0;
//}



//
/*ˮ�ɻ���*/
//�ȷ�����λ������ѭ�������������㣬�����

//int main()
//{
//	int a;
//	int num1, num2, num3;
//	for (int i = 100; i <= 999; i++)
//	{
//		a = i;
//		num1 = a % 10;//��λ
//		a /= 10;
//		num2 = a % 10;//ʮλ
//		a /= 10;
//		num3 = a % 10;//��λ
//		if (num1 * num1 * num1 + num2 * num2 * num2 + num3 *  num3 * num3 == i)
//			cout << i << endl;
//	}
//	return 0;
//}