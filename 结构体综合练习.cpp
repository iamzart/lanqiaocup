#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;

//������Բ�Ĺ�ϵ�����������֮��ľ��룬�ٺͰ뾶�Ƚ�
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
//		cout << "����" << endl;
//	else if (distance == (c1.r + c2.r))
//		cout << " ����" << endl;
//	else
//		cout << "�ཻ" << endl;
//	return 0;
//}



//ѧ����Ϣ
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
	
	//������洢��λͬѧ����Ϣ
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i].num >> arr[i].name >> arr[i].sex >> arr[i].score;
	}
	//�����λͬѧ����Ϣ
	for (int i = 0; i < 5; i++)
	{
		cout << i << "." << " " << arr[i].num << " " << arr[i].name << " " << arr[i].sex << " " << arr[i].score << endl;
	}
	//����ƽ����
	double average = ave_score(arr, 5);
	cout << "ƽ�����ǣ� " << average << endl;
	//���Ҳ�������ϵ�ȫ����Ϣ
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].name == "����")
			cout << arr[i].num << " " << arr[i].name << " " << arr[i].sex << " " << arr[i].score << endl;
	}
	//���������ѧ����Ϣ

	return 0;
}