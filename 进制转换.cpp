#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*�����ƺͽ���ת��*/
//������ת���˽��ƣ��������� ÿ��λһ�飬��2ת8
//16���ƣ��ĸ�һ�飬����16����
//ת��ȥҲ�Ǽ���һ��

/*λ���������*/
//�з��ţ���ߵ�һλ�Ƿ���λ��0��1��
//����λ���䣬ԭ��ÿ���෴�Ƿ��룬�ټ�һ�ͽ�ʵϰ����

//�޷��ţ���һλ����ʾ���ţ��޷������������


//�������ڴ��Բ�����ʽ���棬����Ҳ�ǲ���
/*����תx����*/
//string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//void n_to_x(int n, int x)
//{
//	if (x >= n)
//	{//�ȳ��Զ����ٵõ����һλ
//		n_to_x(n / 10, x);
//		cout << s[x % 2];
//	}
//}
//int main()
//{
//	int n, x;
//	cin >> n >> x;
//	n_to_x(n, x);
//	return 0;
//}


/*ת����10����*/
//���s���ȣ��Ӻ���ǰ����
//ÿһλ�����ֳ�Ȩ�ؼ�����
//�����ַ���'0',�����ַ�ת����
//stoi���ַ���ת����ʮ����
//#include<string>
//int main()
//{
//	string s;
//	int x;
//	cin >> x >> s;
//	int ret = stoi(s, NULL, X);
//	cout << ret << endl;
//	return 0;
//}

#include<string>
#include<cmath>
int main()
{
	int x;
	string s;
	int ret = 0;
	cin >> x >> s;
	//תΪʮ���ƣ����ǴӺ���ǰ������Ȩ��Ҳ�Ǵ�С����
	int n = s.size();
	int j = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] <= '9')
			ret += (s[i] - '0') * pow(x, j);
		else
			ret += (s[i] - 'A' + 10)*pow(x, j);
		j++;

	}
	return 0;
}
//Ȩ�أ��������ۣ��ַ���ת���֣��ַ����Ӻ���ǰ�㣬�룡�


//��xת����m���Ƶ�ÿһλ��ӡ�������ٽ�x/mת����m����
