#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e6;
int id = 1, e[N], ne[N];
//int main()
//{
//	int n, x, h;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> ne[i];
//		
//	}
//	cin >> h;
//	for (int i = h; i; i = ne[i])
//	{
//		cout << i << " ";
//	}
//	return 0;
//}


//void insert(int x, int y)
//{
//	e[++id] = y;
//	ne[id] = ne[x];
//	ne[x] = id;
//}
//int inquire(int x) {
//	for (int i = 1; i; i = ne[i])
//	{
//		return e[ne[i]];
//	}
//}
//void deletei(int x) {
//	for (int i = 1; i; i = ne[i])
//	{
//		if (i == x)
//		{
//			ne[i] = ne[ne[i]];
//		}
//	}
//}
//int main()
//{
//	e[1] = 1;  
//	ne[1] = 0;
//	int q = 0;
//	int result = 0;
//	int op;
//	int x, y;
//	cin >> q;
//	while (q--) {
//		cin >> op;
//		switch (op) {
//		case 1:
//			cin >> x >> y;
//			insert(x, y);
//			break;
//		case 2:
//			cin >> x;
//			result = inquire(x);
//			cout << result<<endl;
//			break;
//		case 3:
//			cin >> x;
//			deletei(x);
//			break;
//		}
//
//	}
//	return 0;
//}





