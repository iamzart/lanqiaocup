#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e6+10;

/*新二叉树*/
//char l[N], r[N], ch;
//int n;
//char root;
//void dfs(char root)
//{
//	if (root == '*') return;
//	cout << root;
//	dfs(l[root]);
//	dfs(r[root]);
//}
//int main()
//{
//	cin >> n;
//	//先处理根节点
//	cin >> root;
//	cin >> l[root] >> r[root];
//	for (int i = 2; i <= n; i++)
//	{
//		cin >> ch;
//		cin >> l[ch] >> r[ch];
//	}
//	dfs(root);
//	return 0;
//}


/*二叉树的遍历*/
//int n, r[N], l[N];
//void dfs1(int u)
//{
//	if (u == 0)
//		return;
//	cout << u << " ";
//	dfs1(l[u]);
//	dfs1(r[u]);
//}
//void dfs2(int u)
//{
//	if (u == 0)
//		return;
//	dfs2(l[u]);
//	cout << u << " ";
//	dfs2(r[u]);
//}
//void dfs3(int u)
//{
//	if (u == 0)
//		return;
//	dfs3(l[u]);
//	dfs3(r[u]);
//	cout << u << " ";
//}
//int main()
//{
//	cin >> n;
//	//存二叉树
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	//深度优先遍历
//	dfs1(1);
//	cout << endl;
//	dfs2(1);
//	cout << endl;
//	dfs3(1);
//	cout << endl;
//	return 0;
//}


/*二叉树深度*/
//#include<queue>
//queue<int>q;
//int n, l[N], r[N];
//int count = 0;
//void bfs()
//{
//	q.push(1);
//	while (q.size())
//	{
//		auto root = q.front();
//		q.pop();//删除队首
//		q.push(l[root]);
//		q.push(r[root]);
//	}
//}
//int main()
//{
//	//存二叉树
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	//深度优先遍历
//	bfs();
//	return 0;
//}


/*二叉树深度*/
//int n, l[N], r[N];
//int dfs(int u)
//{
//	if (u == 0) return 0;
//	return max(dfs(l[u]), dfs(r[u])) + 1;//有返回值就不能写void
//	//看似没有什么操作，但是每次只想一次递归，如果到底了，也就是孩子等于0了，就会执行+1操作，每次到底，加一，向上返回加一，再向上再加一
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	cout << dfs(1) << endl;
//	return 0;
//}


/*求先序排序*/
//先找根节点的位置，再划分左右区间
//额大概明白了，这个对应的递归的操作就是输出根节点，每次递归都更新的是根节点p，传的参数是他们的区间，中序，后序，左右的区间，然后递归里面再调用自己，新的参数，是由根节点p决定的，所以每次都是新的
//先确定根节点根据后序，再根据中序确定左右子树长度
//参数是，区间，用左右区分
//#include<string>
//int n, l[N], r[N];
//int l1, l2, r1, r2;
//int root;
//string s1, s2;
//void dfs(int l1, int r1, int l2, int r2)
//{
//
//	int p = l1;//因为要用p找中序遍历中根节点的位置，所以要把l1保存下来
//	//递归出口---当区间不合法时
//	if (l1 > r1) return;
//	//先确定根节点根据后序
//	cout << s2[r2];
//	//下面要确定中序遍历中根节点的位置
//	while (s1[p] != s2[r2])//当中序里第一个元素开始，不等于根节点时，就往后
//	{
//		p++;
//	}//此时跳出循环后，l1已经指向了中序遍历中根节点的位置
//	//递归左子树
//	dfs(l1, p - 1, l2, l2 + p - l1 - 1);
//	dfs(p + 1, r1, l2 + p - l1, r2 - 1);
//	//递归右子树
//}
//int main()
//{
//	cin >> s1 >> s2;
//	dfs(0, s1.size() - 1, 0, s2.size() - 1);//穿的都是下标
//	//刚开始处理整个区间
//	return 0;
//}


/*美国血统*/
