#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e6+10;

/*�¶�����*/
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
//	//�ȴ�����ڵ�
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


/*�������ı���*/
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
//	//�������
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	//������ȱ���
//	dfs1(1);
//	cout << endl;
//	dfs2(1);
//	cout << endl;
//	dfs3(1);
//	cout << endl;
//	return 0;
//}


/*���������*/
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
//		q.pop();//ɾ������
//		q.push(l[root]);
//		q.push(r[root]);
//	}
//}
//int main()
//{
//	//�������
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	//������ȱ���
//	bfs();
//	return 0;
//}


/*���������*/
//int n, l[N], r[N];
//int dfs(int u)
//{
//	if (u == 0) return 0;
//	return max(dfs(l[u]), dfs(r[u])) + 1;//�з���ֵ�Ͳ���дvoid
//	//����û��ʲô����������ÿ��ֻ��һ�εݹ飬��������ˣ�Ҳ���Ǻ��ӵ���0�ˣ��ͻ�ִ��+1������ÿ�ε��ף���һ�����Ϸ��ؼ�һ���������ټ�һ
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


/*����������*/
//���Ҹ��ڵ��λ�ã��ٻ�����������
//���������ˣ������Ӧ�ĵݹ�Ĳ�������������ڵ㣬ÿ�εݹ鶼���µ��Ǹ��ڵ�p�����Ĳ��������ǵ����䣬���򣬺������ҵ����䣬Ȼ��ݹ������ٵ����Լ����µĲ��������ɸ��ڵ�p�����ģ�����ÿ�ζ����µ�
//��ȷ�����ڵ���ݺ����ٸ�������ȷ��������������
//�����ǣ����䣬����������
//#include<string>
//int n, l[N], r[N];
//int l1, l2, r1, r2;
//int root;
//string s1, s2;
//void dfs(int l1, int r1, int l2, int r2)
//{
//
//	int p = l1;//��ΪҪ��p����������и��ڵ��λ�ã�����Ҫ��l1��������
//	//�ݹ����---�����䲻�Ϸ�ʱ
//	if (l1 > r1) return;
//	//��ȷ�����ڵ���ݺ���
//	cout << s2[r2];
//	//����Ҫȷ����������и��ڵ��λ��
//	while (s1[p] != s2[r2])//���������һ��Ԫ�ؿ�ʼ�������ڸ��ڵ�ʱ��������
//	{
//		p++;
//	}//��ʱ����ѭ����l1�Ѿ�ָ������������и��ڵ��λ��
//	//�ݹ�������
//	dfs(l1, p - 1, l2, l2 + p - l1 - 1);
//	dfs(p + 1, r1, l2 + p - l1, r2 - 1);
//	//�ݹ�������
//}
//int main()
//{
//	cin >> s1 >> s2;
//	dfs(0, s1.size() - 1, 0, s2.size() - 1);//���Ķ����±�
//	//�տ�ʼ������������
//	return 0;
//}


/*����Ѫͳ*/
