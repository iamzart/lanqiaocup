#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 10000000;
int e[N];
int ne[N];
int h, id;//默认为0

/*创建，初始化*/

//头插
//先让新节点指向下一个位置，再让头结点指向新来的节点
void pushfront(int x)
{
	id++;//给他腾出地方
	 e[id] = x;//把x的值赋给给他腾出的新地方
	 ne[id] = ne[h];//h代表的是哨兵的后一位，这个步骤就是让id指向哨兵的下一个位置
	 ne[h] = id;//哨兵指向id
}
//遍历链表
void print()
{
	for (int i = ne[h]; i; i = ne[i])//i不等于0，就继续访问
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