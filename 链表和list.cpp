#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 10000000;
int e[N];
int ne[N];
int h, id;//Ĭ��Ϊ0

/*��������ʼ��*/

//ͷ��
//�����½ڵ�ָ����һ��λ�ã�����ͷ���ָ�������Ľڵ�
void pushfront(int x)
{
	id++;//�����ڳ��ط�
	 e[id] = x;//��x��ֵ���������ڳ����µط�
	 ne[id] = ne[h];//h��������ڱ��ĺ�һλ��������������idָ���ڱ�����һ��λ��
	 ne[h] = id;//�ڱ�ָ��id
}
//��������
void print()
{
	for (int i = ne[h]; i; i = ne[i])//i������0���ͼ�������
	{
		cout << e[i] << " ";
	}
	cout << endl << endl;
}

//

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		pushfront(i);
	}
	print();
	return 0;
}