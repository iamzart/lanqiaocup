#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<deque>
using namespace std;
struct node
{
	int x, y, z;
};
int main()
{
	deque<node>q;
	for (int i = 1; i <= 5; i++)
	{
		q.push_back({ i,i * 2,i * i });
	}
	for (int i = 1; i <= 5; i++)
	{
		auto tmp = q.front();
		q.pop_front();
		cout << tmp.x << " "<<tmp.y <<" "<< tmp.z << endl;
	}
	return 0;
}
