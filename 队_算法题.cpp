#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
const int N = 1e6 + 10;
//int main()
//{
//	int n, op, x;
//	cin >> n;
//	while (n--)
//	{
//		cin >> op;
//		if (op == 1)
//		{
//			cin >> x;
//			q[t++] = x;
//		}
//		else if (op == 2)
//		{
//			if (t == h)
//				cout << "ERR_CANNOT_POP" << endl;
//			else
//			h++;
//		}
//		else if (op == 3)
//		{
//			if (h != t)
//				cout << q[h] << endl;
//			else
//			cout << "ERR_CANNOT_QUERY" << endl;
//		}
//		else
//		{
//			cout << t-h << endl;
//		}
//	}
//	return 0;
//}

/*��������*/
//int main()
//{
//	queue<int>q;
//	bool b[N] = { false };
//	int m, n;
//	int word;
//	int count = 0;
//	cin >> m >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> word;
//		if(q.size() < m&&b[word]==false)//���ڴ�û������û���ֹ�
//		{
//			q.push(word);
//			b[word] = true;//true��ʾ�Ѿ�����
//			count++;
//		}
//		else if(q.size()>=m &&b[word]==false)
//		{
//			b[q.front()] = false;
//			q.pop();
//			q.push(word);
//			b[word] = true;//true��ʾ�Ѿ�����
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}
////����������д��ÿ��i���Ƕ�һ�޶���
//����㣺�����⣡bool�������±�һ���Ǳ����ߵ�Ԫ���ˣ�������һ���±꣬��Ȼÿ�����Ƕ�һ�޶���

//������ҵķ���������һ�������ж������true��ֱ��continue����Ϊ��һ���϶���false��
//Ȼ��else��߶���û���ֹ����ˣ�����push��ȥ���������m��ɾһ��

/*����*/
//����˼·����ÿһ��������һ�����У�pair���ͣ�������Ҫ������ô��¼�������࣬������һ�����飬�±��Ӧ���ǵĹ������֣����ÿ����һ���µģ��������Ƕ���0���ͻ���һ�������һ�����䵽�ʱ䣬��������kind++��Ȼ���������ʱ�䲻���ʱ�����ȥ�ˣ���ɾ����ͷ������count��1��0�����������仯�Ļ�����kind--��kind��¼����ÿ�������һ�����ǹ������࣬����������kind

typedef pair <int, int>PII;
queue<PII> q;
int n, x;
int cnt[N];//��ʾi����һ���ж�����
int	kind;
int t, k;//ʱ�������
int main()
{
	cin >> n;
	while (n--)//���ѭ�����Ǹ����С�¼����Ϣ
	{
		cin >> t >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> x;
			q.push({ t,x });//���뵽������
			if (cnt[x]++ == 0)//���㵽һ
			{
				kind++;
			}

		}
		//�ò��Ϸ��ĳ���
		while (q.size() && q.back().first - q.front().first >= 86400)
		{
			auto tmp = q.front();
			q.pop();//�ڳ���֮ǰ�ȱ���һ�£�������kind�ø���
			if (cnt[tmp.second]-- == 1)
			{//�������ټ���
				kind--;
			}
		}
		cout << kind << endl;

	}
	
	return 0;
}
//�״�㣺typedefҪд��main����ǰ�ߣ�����cnt[],kind�����ʹ�ã��ʱ�����++��