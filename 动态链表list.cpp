#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;
list<int>l;
//±È¿˙¡¥±Ì
void print(list<int>& ll)
{
	for (auto x : l)
	{
		cout << x << " ";
	}cout << endl;
}

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		l.push_back(i);
		print(l);
	}
	for (int i = 1; i <= 5; i++)
	{
		l.push_front(i);
		print(l);
	}
	for (int i = 1; i <= 3; i++)
	{
		l.pop_front();
		print(l);
	}
	for (int i = 1; i <= 3; i++)
	{
		l.pop_back();
		print(l);
	}
}