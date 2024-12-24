#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
const int N = 10000000;
/*询问学号*/
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
//	//按位查找
//	while (m--)
//	{
//		cin >> id;
//		cout << arr[id] << endl;
//	}
//	return 0;
//}

/*寄包柜*/
//vector<int>arr[N];//创建N个数组，每个里边是vector数组
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
//			//vector里边是没有地方的
//			if (arr[i].size() <= j)
//				arr[i].resize(j + 1);//前两行已经对数组进行改变了
//			arr[i][j] = k;
//		}
//		else
//		{
//			cout << arr[i][j]<< endl;
//		}
//	}
//	return 0;
//}
//错误点：考虑到了二维数组，但是不知道怎么用，现在会了
//要记得判断空间是否够用，j+1


/*移动0*/
//代码思路：遍历数组，迭代器，如果有0，前移，给结尾添加0
vector<int>arr[]
