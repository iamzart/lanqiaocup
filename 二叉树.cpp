#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int l[N], r[N];
int n;//输入的一共有多少个节点

/*深度优先遍历*/
//void dfs1(int u)//先序遍历
//{
//	cout << u << " ";
//	if (l[u])
//		dfs1(l[u]);
//	if (r[u])
//		dfs1(r[u]);
//}
//void dfs2(int u)//中序遍历
//{
//	if (l[u])
//		dfs2(l[u]);
//	cout << u << " ";
//	if (r[u])
//		dfs2(r[u]);
//}
//void dfs3(int u)//后序遍历
//{
//	if (l[u])
//		dfs3(l[u]);
//	if(r[u])
//		dfs3(r[u]);
//	cout << u << " ";
//}
//int main()
//{
//	//存二叉树，创建两个数组，一个表示左孩子，一个表示右孩子
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	dfs1(1);
//	cout <<endl;
//	dfs2(1);
//	cout << endl;
//	dfs3(1);
//	cout << endl;
//	return 0;
//}


/*宽度优先遍历*/
//层序遍历，先把根节点放到队列里，队列不为空，就插入队首的孩子结点，然后删除头元素，再判断队为不为空
//#include<queue>
//queue<int>q;
//
//void bfs()
//{
//	q.push(1);
//	while (q.size())
//	{
//		auto u = q.front();//把队首存下来
//		q.pop();
//		cout << u << " ";
//		if (l[u])//[]里面是几，就说明这是谁的孩子结点
//			q.push(l[u]);
//		if (r[u])
//			q.push(r[u]);
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	bfs();
//}
