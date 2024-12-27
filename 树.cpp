#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

/*��vector����ʵ��*/
const int N = 1e5 + 10;
//int n;
//vector<int>edges[N];//����N��vector���飬����һ����������n��Ԫ��
//int main()
//{
//	cin >> n;//��n����㣬���±�ѭ��n-1�Σ���Ϊ������ڵ�
//	int a, b;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//		//���Ǹ����Ϊa�Ľ���β������ӣ�������Ҳһ��
//	}
//	return 0;
//}

/*��ʽǰ����*/
//������ģ������
//int h[N], e[N*2], ne[N*2], id;//��Ϊָ��������������鶼���÷�����
//void add(int a, int b)//��b�ӵ�a�����±ߣ�h[N]�����ڱ����飬h[a]����a����ڱ�λ������ָ����������һ��Ԫ�أ�����������Ԫ�ص��±�
//{//��bͷ�嵽a���ڵ�������
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



//���ı�����DFS������ȱ���
//��Ҫһ��vector����������
/*vector*/
//bool st[N];//���������Ƿ񱻷��ʹ�
//vector<int> edges[N];//Ҫ���ó�ȫ�ֱ�������Ȼ�������û����
//void dfs(int u)//�������ʹ���Ҫ�������ˣ��Ȱ������ó�true�����������µĺ������飬���û�з��ʹ������������������һ��������Ϊtrue������Ϊ������ǵ�һ���ǿ϶��տ�ʼ���µģ�������ǵ�һ�Σ���Ҳ���ڱ�����ʱ���жϹ���
//{
//	//�ȷ��ʽڵ�
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
//	//���� 
//	int n, a, b;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		edges[a].push_back(b);//�����ڵ���a��������β�庢��
//		edges[b].push_back(a);
//	}
//	//����
//	dfs(1);
//	return 0;
//}


/*��ʽǰ����*/
//��Ҫ�ڱ����飬������ָ����id����������
//int h[N], e[N * 2], ne[N * 2], id;
//bool st[N];
//void add(int a, int b)//��bͷ�嵽a�ĺ���������,b���µ�
//{
//	id++;//���ٿռ�
//	e[id] = b;
//	ne[id] = h[a];//����bָ��a����һλ��a���ڱ����飬��ߴ���Ѿ�����һ���ĵ�ַ��
//	h[a] = id;//����h����ָ��b��Ҳ����b�ĵ�ַid
//}
//void dfs(int u)
//{
//	cout << u << " ";
//	st[u] = true;//һ���Ⱥţ������Ǹ�ֵ�����ж�
//	for (int i = h[u]; i; i = ne[i])
//	{
//		if (!st[e[i]])
//			dfs(e[i]);
//	}
//}
//int main()
//{
//	//����
//	int n, a, b;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	//����
//	dfs(1);
//	return 0;
//}


#include<queue>
//���ı�����������ȱ���-BFS
/*vector*///ÿ���ڵ�������һ������
//����
//vector<int> edges[N];
//bool st[N];
//void bfs()
//{
//	queue<int>q;
//	q.push(1);
//	st[1] = true;
//	while (q.size())//�����в�Ϊ�յ�ʱ��
//	{
//		auto head = q.front();
//		cout << q.front()<<" ";//�������ͷ��ͷ�ڵ㣩
//		q.pop();
//		//��������ڵ�ĺ��ӣ������Ƕ�push����
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


/*��ʽǰ���ǿ�����ȱ���*/
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
			st[e[i]] = true;//һ��Ҫ�ǵ�ʱʱ�̱̿�ǣ�
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