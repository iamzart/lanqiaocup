#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " " << endl;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	for (int &e : arr)//ԭ�����뻹��Ҫ��&ѽ��
//	{
//		cin >> e;//Ȼ������������Ǳ���������������
//	}
//	for (int e : arr)
//	{
//		cout << e << " ";
//	}
//	
//	return 0;
//}


/*B2093*/
//�����룬�����鸳ֵ
//ѭ���������鵱��iΪ�±��Ԫ�ص����ض�ֵ��

//int main()
//{
//	int n, a;
//	int arr[10000];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cin >> a;
//	int flag = 1;//�������ҵ�
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == a)
//		{
//			cout << i;
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "-1";
//	}
//
//	return 0;
// }




/*B2089*/
//�������������뵽���ǣ�����һ��������ȥ��ֵ������أ������Ҳ����ʱ�ͽ���

//int main()
//{
//	int n = 0;
//	int arr1[100];
//	int arr2[100];
//	cin >> n;
//	int len = n - 1;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr1[i];
//	}
//	for (int j = 0; j < n; j++)
//	{
//		memcpy(arr2+j, arr1 + len, 4);
//		len--;
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	return 0;
//}
/*for (int e : arr2)
	{
		cout << e << " ";
	}*/
//���ǣ���������ԭ����Ļ�������е�ѽ����������һ���Ӵ�ӡ������100�������Һ�ߵ��������߰������Ϊ��û��ʼ��



/*B2091*/
//��ѭ��Ƕ�ף�ʱ�临�Ӷȵ���n���˰�
//�ȸ��������鸳��ֵ��Ȼ��˫��ѭ��ȥ������

//const int N = 1010;
//int main()
//{
//	int n = 0, result = 0;
//	int arr1[N];
//	int arr2[N];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr1[i];
//	}
//	for (int j = 0; j < n; j++)
//	{
//		cin >> arr2[j];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if(i == j)
//			result += arr1[i] * arr2[j];
//		}
//	}
//	cout << result << endl;
//	return 0;
//}
//�������������������ɶ��������鶼�ñ���i������ѽ!!!
//arr1�������Ŷ���2������1����һ��Ҫ����
//����ѭ������������һ����һ����2����Ҳ���ô�


/*B2090*/
//�ڶ����Ǹ�����
//�ٷ���Ҫ*100�������������䣬��count++�������cnt/N

//const int N = 110;
//int main()
//{
//	int n = 0;
//	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
//	int arr[N];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		if(arr[i]>=0&&arr[i])
//	}
//
//	return 0;
//}
//���ǿ��Զ�һ������һ�������ô�����


/*B2092*/
//��������Ƕ��ı�������
//һ������i���ˣ�Ȼ���ñ���j��ʾ�Ӽ��ŵȿ�ʼ����Ϊ���Ƕ�Ҫ���Լ��ĵƿ�ʼ

//1--��
//0--��

//const int N = 5010;
//int main()
//{
//	int n;
//	int arr[N] = { 0 };//ȫ���ر�
//	cin >> n;
//	for (int i = 2; i <= n; i++)//һ����i����
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (j % i == 0)
//				arr[j] = !arr[j];//ȡ��
//		}
//	}
//	//���Ͼ��Ƕ������ڲ����иı䣬������ֻ��Ҫ�����Ĵ�ӡ
//	//i,j��������������ɶ�����Ƕ���ͬһ��������������һ���ˣ������ı��������
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] == 0)
//			cout << i << " ";
//	}
//
//	return 0;
//}


/*�������*/
//ÿ����������������һ�еĺ���ͬ�еĺ�ǰһ�����ĺ�

int main()
{
	int arr[20][20] = { 0 };
	int i = 0, j = 0;
	//��ʼ����1
	/*memset(arr, 1, sizeof(arr));*/
	int n;
	cin >> n;
	if (n == 1)
		cout << "1" << endl;
	else
	{
		arr[0][0] = 1;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < i; j++)//����ĳ�������Ԫ�ش����Ұ����������ֵ�һ��Ԫ�أ�Ҫô��1Ҫô��0Ҫô�����ǣ�
				//����ֻ��ѡһ����ִ������������Ͳ��У�����if�Ļ�����ִ�У���j==0����һ�ͻ�Խ��
			{
				if (j == 0)
					arr[i][j] = 1;
				else if (j == i)
					arr[i][j] = 1;
				else
					arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}


/*���󽻻���*/
//int main()
//{
//	int m, n;
//	int arr[5][5];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cin >> m >> n;
//	for (int i = m;;)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[]
//		}
//	}
//	return 0;
//}

















