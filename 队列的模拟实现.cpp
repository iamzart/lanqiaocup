#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;

const int N = 1e6 + 10;
//����
int q[N], h, t;//hָ���ͷ��ǰһ��,t��Ƕ�βԪ�ص�λ��
////���
//void push(int x)
//{
//	q[++t] = x;
//}
////����
//void pop()
//{
//	h++;//��Ϊh��������õģ�����ֱ����hָ�����Ҫpop��Ԫ���ϡ���ǰ��λ���Ѿ�ʧЧ��
//}
////���ض�ͷԪ��
//int front()
//{
//	return q[h+1];
//}
////���ض�βԪ��
//int back()
//{
//	return q[t];
//}
////������ЧԪ�ظ���
//int size()
//{
//	return t - h;
//}
////�ж��Ƿ�Ϊ�ն�
//bool empty()
//{
//	return t == h;
//}
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		push(i);
//	}
//	while (!empty())
//	{
//		cout << front() << " " << back() << endl;
//		pop();
//	}
//	return 0;
//}
/*������ʱ��һ��Ҫ��main��������*/

/*���е�ʹ��*/
typedef pair<int, int> PII;

int main()
{
	queue<PII> q;
	for (int i = 1; i <= 10; i++)
	{
		q.push({ i,i * 10 });
	}
	while (q.size())
	{
		auto t = q.front();//q��pair���ͣ�t�Ƕ�ͷ����ȻҲ��pair���ͣ�д���������
		cout << t.first << " " << t.second << endl;
		q.pop();
	}
}