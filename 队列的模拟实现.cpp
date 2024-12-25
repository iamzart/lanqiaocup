#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;

const int N = 1e6 + 10;
//创建
int q[N], h, t;//h指向队头的前一个,t标记队尾元素的位置
////入队
//void push(int x)
//{
//	q[++t] = x;
//}
////出队
//void pop()
//{
//	h++;//因为h后边是有用的，现在直接让h指在这个要pop的元素上。当前的位置已经失效了
//}
////返回队头元素
//int front()
//{
//	return q[h+1];
//}
////返回队尾元素
//int back()
//{
//	return q[t];
//}
////返回有效元素个数
//int size()
//{
//	return t - h;
//}
////判断是否为空队
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
/*创建的时候一定要在main函数里吗*/

/*队列的使用*/
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
		auto t = q.front();//q是pair类型，t是队头，当然也是pair类型，写个这个方便
		cout << t.first << " " << t.second << endl;
		q.pop();
	}
}