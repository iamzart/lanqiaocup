#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

const int N = 10;
struct node
{
	int n;
	int arr[N];
};

/*��size������*/
//void printlist(vector<int>& arr)//�����ã��Ͳ����ٿ���һ��ռ���
//{//��Ϊvector�ı���Ҳ�����飬������forѭ������
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

/*�õ�����������*/  //vector<int>::iterator--����������
//��Χfor
void printlist1(vector<int>& arr)
{
	for (auto x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
}
//begin,end
void printlist2(vector<int>& arr)
{
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";//��Ϊit��ָ������
	}
	cout << endl;
}
int main()
{
	/*����vector*/
	vector<int> a1;//������һ����Ϊa1�ĿյĿɱ䳤���飬��߶���int�͵�����
	vector<int> a2(N);//������һ����СΪN�����飬����Ĭ��ֵ����0
	vector<int> a3(N, 2);//������һ����СΪN�Ŀɱ䳤���飬�����ʼ��Ϊ2
	vector<int> a4 = { 1,2,3,4,5 };//��ʼ���б�Ĵ�����ʽ
	//< >��߿��Դ���������͵�����--ģ�������

	vector<string> a5;//���ַ���
	vector<node >a6;//��ṹ��
	vector<vector<int>>a7;//������һ����ά�Ŀɱ䳤����
	vector<int> a8{ N };//������һ����СΪN��vector���飨��ά��

	/*size,empty*/
	//size����ʵ��Ԫ�ظ���
	//empty����˳����Ƿ�Ϊ�գ��������ͣ���-true

	printlist1(a2);
	printlist1(a3);
	printlist2(a4);
	if (a1.empty())
		cout << "��" << endl;
	else
		cout << "����" << endl;

	/*������*/
	//Ϊ���÷�Χfor����������a��ߵ�Ԫ�����θ�e

	/*push_back,pop_back*/
	int q;
	int n = 0;
	cin >> q;
	while (q--)//��һ���������β��һ������ӡһ��������Ч����������
	{
		a1.push_back(n);
		n++;
		printlist1(a1);
	}
	while (!a1.empty())
	{
		printlist1(a1);
		a1.pop_back();
	}

	/*front,back*/
	//������λԪ��
	//���ٻ�ȡĳ���ɱ䳤�������λԪ�� (���Ҫ������)
	cout << a4.front() << " " << a4.back() << endl;

	/*resize*/
	//�޸�vector�Ĵ�С��������ˣ��յĵط�Ĭ�ϲ�0��������ˣ��Զ�ɾ��ûλ�õ�Ԫ��
	a4.resize(10);
	printlist2(a4);
	a4.resize(2);
	printlist2(a4);

	/*clear*/
	//�ײ�ʵ�ֵ�ʱ�򣬻�һ��һ������
	a4.clear();
	cout << a4.size();
	return 0;
}