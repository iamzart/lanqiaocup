#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int l[N], r[N];
int n;//�����һ���ж��ٸ��ڵ�

/*������ȱ���*/
//void dfs1(int u)//�������
//{
//	cout << u << " ";
//	if (l[u])
//		dfs1(l[u]);
//	if (r[u])
//		dfs1(r[u]);
//}
//void dfs2(int u)//�������
//{
//	if (l[u])
//		dfs2(l[u]);
//	cout << u << " ";
//	if (r[u])
//		dfs2(r[u]);
//}
//void dfs3(int u)//�������
//{
//	if (l[u])
//		dfs3(l[u]);
//	if(r[u])
//		dfs3(r[u]);
//	cout << u << " ";
//}
//int main()
//{
//	//��������������������飬һ����ʾ���ӣ�һ����ʾ�Һ���
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


/*������ȱ���*/
//����������ȰѸ��ڵ�ŵ���������в�Ϊ�գ��Ͳ�����׵ĺ��ӽ�㣬Ȼ��ɾ��ͷԪ�أ����ж϶�Ϊ��Ϊ��
//#include<queue>
//queue<int>q;
//
//void bfs()
//{
//	q.push(1);
//	while (q.size())
//	{
//		auto u = q.front();//�Ѷ��״�����
//		q.pop();
//		cout << u << " ";
//		if (l[u])//[]�����Ǽ�����˵������˭�ĺ��ӽ��
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
