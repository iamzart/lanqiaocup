#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*链地址法*/
const int N = 1e5 + 10;
//创建
int h[N];
int e[N], ne[N], id;
//哈希函数
int f(int x) {
	int id;
	id = (x % N + N) % N;
	return id;
}
//插入元素
//把新结点头插到他的哈希值对应的链表下边
void insert(int x) {
	//先算出他的哈希值
	int idx = f(x);
	id++;
	e[id] = x;
	//新结点的下一个指向哨兵位，再让哨兵位的下一个指向新结点
	ne[id] = h[idx];
	h[idx] = id;
}

//查找函数
bool find(int x) {
	int idx = f(x);//先找出它的下标（地址）
	//遍历链表
	for (int i = h[idx]; i; i = ne[i]) {
		if (e[i] == x)
			return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int op, x;
		cin >> op >> x;
		if (op == 1) {
			insert(x);
		}else {
			if (find(x))
				cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}