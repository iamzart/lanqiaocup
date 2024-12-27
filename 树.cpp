#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

/*用vector数组实现*/
const int N = 1e5 + 10;
//int n;
//vector<int>edges[N];//共有N个vector数组，不是一个数组里有n个元素
//int main()
//{
//	cin >> n;//共n个结点，但下边循环n-1次，因为不算根节点
//	int a, b;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//		//就是给编号为a的结点后尾插个孩子，反过来也一样
//	}
//	return 0;
//}

/*链式前向星*/
//用数组模拟链表
//int h[N], e[N*2], ne[N*2], id;//因为指针域和数据域数组都还得翻过来
//void add(int a, int b)//把b加到a结点的下边，h[N]就是哨兵数组，h[a]就是a结点哨兵位，代表指向的是他后边一个元素，存的是他后边元素的下标
//{//把b头插到a所在的链表后边
//	id++;
//	e[id] = b;
//	ne[id] = h[a];
//	h[a] = id;
//}
//int main()
//{
//	int n;
//	int a, b;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	return 0;
//}



//树的遍历：DFS深度优先遍历
//需要一个vector，布尔数组
/*vector*/
//bool st[N];//标记这个点是否被访问过
//vector<int> edges[N];//要设置成全局变量，不然函数里边没法用
//void dfs(int u)//传进来就代表要访问你了，先把你设置成true，遍历你旗下的孩子数组，如果没有访问过再来调用这个函数，一上来就判为true，是因为如果你是第一次那肯定刚开始是新的，如果不是第一次，那也是在遍历的时候被判断过的
//{
//	//先访问节点
//	cout << u << " ";
//	st[u] = true;
//	for (auto x : edges[u])
//	{
//		if (!st[x])
//			dfs(x);
//	}
//}
//int main()
//{
//	//存树 
//	int n, a, b;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		edges[a].push_back(b);//给根节点是a的数组里尾插孩子
//		edges[b].push_back(a);
//	}
//	//遍历
//	dfs(1);
//	return 0;
//}


/*链式前向星*/
//需要哨兵数组，数据域，指针域，id，布尔数组
//int h[N], e[N * 2], ne[N * 2], id;
//bool st[N];
//void add(int a, int b)//把b头插到a的孩子链表中,b是新的
//{
//	id++;//开辟空间
//	e[id] = b;
//	ne[id] = h[a];//先让b指向a的下一位，a是哨兵数组，里边存的已经是下一个的地址了
//	h[a] = id;//再让h数组指向b，也存上b的地址id
//}
//void dfs(int u)
//{
//	cout << u << " ";
//	st[u] = true;//一个等号，这里是赋值不是判断
//	for (int i = h[u]; i; i = ne[i])
//	{
//		if (!st[e[i]])
//			dfs(e[i]);
//	}
//}
//int main()
//{
//	//存树
//	int n, a, b;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	//遍历
//	dfs(1);
//	return 0;
//}


#include<queue>
//树的遍历：宽度优先遍历-BFS
/*vector*///每个节点旗下有一个数组
//建树
//vector<int> edges[N];
//bool st[N];
//void bfs()
//{
//	queue<int>q;
//	q.push(1);
//	st[1] = true;
//	while (q.size())//当队列不为空的时候
//	{
//		auto head = q.front();
//		cout << q.front()<<" ";//先输出队头（头节点）
//		q.pop();
//		//遍历这个节点的孩子，把他们都push进来
//		for (auto x : edges[head])
//		{
//			if (!st[x])
//				q.push(x);
//			st[x] = true;
//		}
//	}
//
//}
//int main()
//{
//	int n, a, b;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//	bfs();
//	return 0;
//}


/*链式前向星宽度优先遍历*/
queue<int>q;
bool st[N];
int h[N], e[N * 2], ne[N * 2], id;
void add(int a, int b)
{
	id++;
	e[id] = b;
	ne[id] = h[a];
	h[a] = id;
}
void bfs()
{
	q.push(1);
	st[1] = true;
	while (q.size())
	{
		auto u = q.front();
		q.pop();
		cout << u << " ";
		st[u] == true;
		for (int i = h[u]; i; i = ne[i])
		{
			if(!st[e[i]])
			q.push(e[i]);
			st[e[i]] = true;//一定要记得时时刻刻标记！
		}
	}
}
int main()
{
	int n, a, b;
	cin >> n;
	for (int i =1;i<n;i++)
	{
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	bfs();
	return 0;
}