#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
const int N = 10000000;
/*ѯ��ѧ��*/
//int main()
//{
//	int n, m;
//	int id;
//	vector<int>arr(N);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	//��λ����
//	while (m--)
//	{
//		cin >> id;
//		cout << arr[id] << endl;
//	}
//	return 0;
//}

/*�İ���*/
//vector<int>arr[N];//����N�����飬ÿ�������vector����
//int main()
//{
//	int n, q;
//	int i, j, k;
//	int op;
//	cin >> n >> q;
//	while (q--)
//	{
//		cin >> op >> i >> j;
//		if (op == 1)
//		{
//			cin >> k;
//			//vector�����û�еط���
//			if (arr[i].size() <= j)
//				arr[i].resize(j + 1);//ǰ�����Ѿ���������иı���
//			arr[i][j] = k;
//		}
//		else
//		{
//			cout << arr[i][j]<< endl;
//		}
//	}
//	return 0;
//}
//����㣺���ǵ��˶�ά���飬���ǲ�֪����ô�ã����ڻ���
//Ҫ�ǵ��жϿռ��Ƿ��ã�j+1


/*�ƶ�0*/
//����˼·���������飬�������������0��ǰ�ƣ�����β���0
vector<int>arr[]
