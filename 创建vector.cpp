#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

const int N = 10;
struct node
{
	int n;
	int arr[N];
};

/*用size来遍历*/
//void printlist(vector<int>& arr)//传引用，就不用再开辟一块空间了
//{//因为vector的本质也是数组，所以用for循环遍历
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

/*用迭代器来遍历*/  //vector<int>::iterator--迭代器类型
//范围for
void printlist1(vector<int>& arr)
{
	for (auto x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
}
//begin,end
void printlist2(vector<int>& arr)
{
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";//因为it是指针类型
	}
	cout << endl;
}
int main()
{
	/*创建vector*/
	vector<int> a1;//创建了一个名为a1的空的可变长数组，里边都是int型的数据
	vector<int> a2(N);//创建了一个大小为N的数组，里面默认值都是0
	vector<int> a3(N, 2);//创建了一个大小为N的可变长数组，里面初始化为2
	vector<int> a4 = { 1,2,3,4,5 };//初始化列表的创建方式
	//< >里边可以存放任意类型的数据--模板的作用

	vector<string> a5;//存字符串
	vector<node >a6;//存结构体
	vector<vector<int>>a7;//创建了一个二维的可变长数组
	vector<int> a8{ N };//创建了一个大小为N的vector数组（二维）

	/*size,empty*/
	//size返回实际元素个数
	//empty返回顺序表是否为空，布尔类型，空-true

	printlist1(a2);
	printlist1(a3);
	printlist2(a4);
	if (a1.empty())
		cout << "空" << endl;
	else
		cout << "不空" << endl;

	/*迭代器*/
	//为了用范围for来遍历，把a里边的元素依次给e

	/*push_back,pop_back*/
	int q;
	int n = 0;
	cin >> q;
	while (q--)//在一个空数组里，尾插一个，打印一个，最后的效果是三角形
	{
		a1.push_back(n);
		n++;
		printlist1(a1);
	}
	while (!a1.empty())
	{
		printlist1(a1);
		a1.pop_back();
	}

	/*front,back*/
	//返回首位元素
	//快速获取某个可变长数组的首位元素 (后边要有括号)
	cout << a4.front() << " " << a4.back() << endl;

	/*resize*/
	//修改vector的大小，如果多了，空的地方默认补0，如果少了，自动删除没位置的元素
	a4.resize(10);
	printlist2(a4);
	a4.resize(2);
	printlist2(a4);

	/*clear*/
	//底层实现的时候，会一个一个遍历
	a4.clear();
	cout << a4.size();
	return 0;
}