#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*排队顺序*/
//const int N = 10000000;
//int arr[N], ne[N];
//int head, id;
//int main()
//{
//	int n, h;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> ne[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//	cin >> h;
//	ne[head] = h;
//	cout << h << " ";
//	for (int i = ne[h]; i; i = ne[i])
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}

/*单向链表*/
//这里用顺序表的话，时间复杂度都是on级别，链表是1
//一直搞不懂在x后边插入，可x是个元素，怎么找到x的位置？用mp数组优化！
//而且题目也给你了提示，没有重复的，正是用mp数组的好时机
//const int N = 1e5+10;
//const int M = 1e6 + 10;
//int e[N], ne[N], h;
//int mp[M];
//int id = 1;
//
////在任意x插入y
////
//void insert_back(int p1, int y)
//{
//	id++;
//	e[id] = y;
//	mp[y] = id;
//	ne[id] = ne[p1];
//	ne[p1] = id;
//}
//int main()
//{
//	e[1] = 1;
//	int q;
//	int x, y;
//	cin >> q;
//	while (q--)
//	{
//		int op;
//		cin >> op>>x;
//		if (op == 1)
//		{
//			cin >> y;
//			int p1 = mp[x];
//			insert_back(p1, y);
//		}
//		else if (op == 2)
//		{
//			cin >> x;
//			int p2 = mp[x];//p2是x的位置（下标）
//			if (e[ne[p2]])
//			{
//				cout << e[ne[p2]] << endl;
//			}
//			else cout << "0" << endl;
//		}
//		else
//		{
//			cin >> x;
//			int p3 = mp[x];//用mp数组优化太爽了！不用遍历数组！
//			//删除x后面的元素，就是让x指向后后边
//			ne[p3] = ne[ne[p3]];
//		}
//	}
//	return 0;
//}


/*队列安排*/
//原先id一直++，相当于入队顺序
//const int N = 1e5+10;
//int e[N], ne[N], pre[N], h;
//bool st[N];//如果是true，就代表已经被删除
//
//void insert_front(int p,int x)
//{
//	ne[x] = p;
//	pre[x] = pre[p];
//	ne[pre[p]] = x;
//	pre[p] = x;
//}
//void insert_back(int p,int x)
//{
//	pre[x] = p;
//	ne[x] = ne[p];
//	pre[ne[p]] = x;
//	ne[p] = x;
//}
//void erase(int x)
//{
//	ne[pre[x]] = ne[x];
//	pre[ne[x]] = pre[x];
//}
//void print()
//{
//	for (int i = ne[h]; i; i = ne[i])
//	{
//		cout << i << " ";
//	}
//}
//int main()
//{
//	pre[1] = h;
//	ne[h] = 1;
//	int n, k, p, m, x;
//	cin >> n;
//	for (int i = 2; i <= n; i++)//啊啊！这里写成了n-1,本来从二开始已经少了一了
//	{//用个for循环，同学们的编号也有了哈哈
//		cin >> k >> p;
//		if (p == 0)//在k前边插
//		{
//			insert_front(k,i);
//		}
//		else//在k后边插
//		{
//			insert_back(k,i);
//		}
//	}
//	cin >> m;
//	while (m--)
//	{
//		cin >> x;
//		if (st[x])
//			continue;
//		erase(x);
//		st[x] = true;//标记x已经被删除
//	}
//	print();
//
//	return 0;
//}


/*约瑟夫问题*/

//首先用循环链表，是单链表，当你要删除当下元素时，要让他前一个找到你后边的后边，但单链表没有前驱
// 所以如果每次要删除的元素是我目前的下一个就好了，所以第一次让首指针指向最后一个元素
//用下标充当数据域

const int N = 110;
int h, e[N], ne[N];//id也不需要，因为也是有顺序的
int main()
{
	int n, m;
	cin >> n >> m;
	//先创造循环链表，俗称把链表连起来
	for (int i = 1; i <= n-1; i++)
		ne[i] = i + 1;//当前元素的下一个指向下一个元素
	//让最后一个元素 指向0
	ne[n] = 1;
	int t = n;
	for (int i = 1; i <= n; i++)//当跳出外循环时，证明淘汰了所有人
	{
		for (int j = 1; j <= m - 1; j++)
		{//此时应该扫描链表，定义一个指针t,此时扫描m-1次
			t = ne[t];//每次报数，指针往后走，走m-1次，的时候，下一个元素就是要删除的

		}
		cout << ne[t] << " ";//ne[t]已经是当前的下一个了
		ne[t] = ne[ne[t]];//t是当前的，但是要让当前的指向下下个
		//这里不能写i，不然每次肯定固定的数字呀
//跳出内部循环后，t为要删除的前一个，此时ne[t]就是要删除的
	}


	return 0;
}