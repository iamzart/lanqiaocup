#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*二进制和进制转换*/
//二进制转换八进制，从右向左 每三位一组，把2转8
//16进制，四个一组，换成16进制
//转回去也是几个一组

/*位运算操作符*/
//有符号：最高的一位是符号位，0正1付
//符号位不变，原码每个相反是反码，再加一就将实习行吗

//无符号，第一位不表示符号，无符号你们仨相等


//整数在内存以补码形式储存，计算也是补码
/*进制转x进制*/
//string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//void n_to_x(int n, int x)
//{
//	if (x >= n)
//	{//先除以二，再得到最后一位
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


/*转换成10进制*/
//求出s长度，从后往前遍历
//每一位的数字乘权重加起来
//单个字符减'0',就是字符转数字
//stoi将字符串转化成十进制
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
	//转为十进制，就是从后往前遍历，权重也是从小到大，
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
//权重，分类讨论，字符串转数字，字符串从后往前算，秒！妙！


//将x转换成m进制的每一位打印出来，再将x/m转化成m进制
