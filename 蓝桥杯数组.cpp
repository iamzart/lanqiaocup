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
//	for (int &e : arr)//原来输入还是要加&呀！
//	{
//		cin >> e;//然后这里输入的是变量，不是数组名
//	}
//	for (int e : arr)
//	{
//		cout << e << " ";
//	}
//	
//	return 0;
//}


/*B2093*/
//先输入，给数组赋值
//循环遍历数组当以i为下标的元素等于特定值，

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
//	int flag = 1;//假设能找到
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
//看到逆序，首先想到的是，创建一个新数组去赋值，其次呢，当左右不相等时就交换

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
//不是，哈哈哈哈原来真的会访问所有的呀哈哈哈哈，一下子打印出来了100个，而且后边的数字乱七八糟的因为我没初始化



/*B2091*/
//这循环嵌套，时间复杂度得是n方了吧
//先给两个数组赋上值，然后双层循环去挨个乘

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
//啊啊啊啊啊啊啊啊，可恶，两个数组都用变量i就行了呀!!!
//arr1数组读完才读到2，所以1数组一定要读完
//三个循环变两个，读一个存一个，2数组也不用存


/*B2090*/
//第二行是个数组
//百分数要*100，如果在这个区间，就count++，最后用cnt/N

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
//又是可以读一个分析一个，不用存起来


/*B2092*/
//如果他不是二的倍数，就
//一共处理i个人，然后用变量j表示从几号等开始，因为他们都要从自己的灯开始

//1--开
//0--关

//const int N = 5010;
//int main()
//{
//	int n;
//	int arr[N] = { 0 };//全部关闭
//	cin >> n;
//	for (int i = 2; i <= n; i++)//一共有i个人
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (j % i == 0)
//				arr[j] = !arr[j];//取反
//		}
//	}
//	//以上就是对数组内部进行改变，接下来只需要单纯的打印
//	//i,j，就是括号里是啥，他们都是同一个数组名，都是一家人，合力改变这个数组
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] == 0)
//			cout << i << " ";
//	}
//
//	return 0;
//}


/*杨辉三角*/
//每个数，都等于他上一行的和他同列的和前一个数的和

int main()
{
	int arr[20][20] = { 0 };
	int i = 0, j = 0;
	//初始化成1
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
			for (int j = 0; j < i; j++)//这是某行里面的元素从左到右挨个的来，轮到一个元素，要么是1要么是0要么都不是，
				//这仨只能选一个，执行了上面下面就不行，三个if的话都会执行，而j==0，减一就会越界
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


/*矩阵交换行*/
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

















