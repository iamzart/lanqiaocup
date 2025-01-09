#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;

//求两个圆的关系：先求出两点之间的距离，再和半径比较
//Point point;
//Circle c1, c2;
//struct Point
//{
//	int x, y;
//};
//struct Circle
//{
//	Point center;
//	float r;
//};
//int dist(Point p1, Point p2)
//{
//	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
//}
//int main()
//{
//	int r1, r2;
//	cin >> c1.center.x >> c1.center.y >> c1.r;
//	cin >> c2.center.x >> c2.center.y >> c2.r;
//	int distance = dist(c1.center, c2.center);
//	if (distance > (c1.r + c2.r))
//		cout << "相离" << endl;
//	else if (distance == (c1.r + c2.r))
//		cout << " 相切" << endl;
//	else
//		cout << "相交" << endl;
//	return 0;
//}



//学生信息
struct student
{
	int num;
	char name[20];
	char sex;
	float score;
}arr[5];
int sum;
double ave_score(student arr[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i].score;
	}
	return sum * 1.0 / 5;
}
int main()
{
	
	//用数组存储五位同学的信息
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i].num >> arr[i].name >> arr[i].sex >> arr[i].score;
	}
	//输出五位同学的信息
	for (int i = 0; i < 5; i++)
	{
		cout << i << "." << " " << arr[i].num << " " << arr[i].name << " " << arr[i].sex << " " << arr[i].score << endl;
	}
	//计算平均分
	double average = ave_score(arr, 5);
	cout << "平均分是： " << average << endl;
	//查找并输出柯南的全部信息
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].name == "柯南")
			cout << arr[i].num << " " << arr[i].name << " " << arr[i].sex << " " << arr[i].score << endl;
	}
	//输出不及格学生信息

	return 0;
}