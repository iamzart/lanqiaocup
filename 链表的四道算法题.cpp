#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*�Ŷ�˳��*/
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

/*��������*/
//������˳���Ļ���ʱ�临�Ӷȶ���on����������1
//һֱ�㲻����x��߲��룬��x�Ǹ�Ԫ�أ���ô�ҵ�x��λ�ã���mp�����Ż���
//������ĿҲ��������ʾ��û���ظ��ģ�������mp����ĺ�ʱ��
//const int N = 1e5+10;
//const int M = 1e6 + 10;
//int e[N], ne[N], h;
//int mp[M];
//int id = 1;
//
////������x����y
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
//			int p2 = mp[x];//p2��x��λ�ã��±꣩
//			if (e[ne[p2]])
//			{
//				cout << e[ne[p2]] << endl;
//			}
//			else cout << "0" << endl;
//		}
//		else
//		{
//			cin >> x;
//			int p3 = mp[x];//��mp�����Ż�̫ˬ�ˣ����ñ������飡
//			//ɾ��x�����Ԫ�أ�������xָ�����
//			ne[p3] = ne[ne[p3]];
//		}
//	}
//	return 0;
//}


/*���а���*/
//ԭ��idһֱ++���൱�����˳��
//const int N = 1e5+10;
//int e[N], ne[N], pre[N], h;
//bool st[N];//�����true���ʹ����Ѿ���ɾ��
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
//	for (int i = 2; i <= n; i++)//����������д����n-1,�����Ӷ���ʼ�Ѿ�����һ��
//	{//�ø�forѭ����ͬѧ�ǵı��Ҳ���˹���
//		cin >> k >> p;
//		if (p == 0)//��kǰ�߲�
//		{
//			insert_front(k,i);
//		}
//		else//��k��߲�
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
//		st[x] = true;//���x�Ѿ���ɾ��
//	}
//	print();
//
//	return 0;
//}


/*Լɪ������*/

//������ѭ�������ǵ���������Ҫɾ������Ԫ��ʱ��Ҫ����ǰһ���ҵ����ߵĺ�ߣ���������û��ǰ��
// �������ÿ��Ҫɾ����Ԫ������Ŀǰ����һ���ͺ��ˣ����Ե�һ������ָ��ָ�����һ��Ԫ��
//���±�䵱������

const int N = 110;
int h, e[N], ne[N];//idҲ����Ҫ����ΪҲ����˳���
int main()
{
	int n, m;
	cin >> n >> m;
	//�ȴ���ѭ�������׳ư�����������
	for (int i = 1; i <= n-1; i++)
		ne[i] = i + 1;//��ǰԪ�ص���һ��ָ����һ��Ԫ��
	//�����һ��Ԫ�� ָ��0
	ne[n] = 1;
	int t = n;
	for (int i = 1; i <= n; i++)//��������ѭ��ʱ��֤����̭��������
	{
		for (int j = 1; j <= m - 1; j++)
		{//��ʱӦ��ɨ����������һ��ָ��t,��ʱɨ��m-1��
			t = ne[t];//ÿ�α�����ָ�������ߣ���m-1�Σ���ʱ����һ��Ԫ�ؾ���Ҫɾ����

		}
		cout << ne[t] << " ";//ne[t]�Ѿ��ǵ�ǰ����һ����
		ne[t] = ne[ne[t]];//t�ǵ�ǰ�ģ�����Ҫ�õ�ǰ��ָ�����¸�
		//���ﲻ��дi����Ȼÿ�ο϶��̶�������ѽ
//�����ڲ�ѭ����tΪҪɾ����ǰһ������ʱne[t]����Ҫɾ����
	}


	return 0;
}