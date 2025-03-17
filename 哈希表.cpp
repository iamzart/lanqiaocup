#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*����ַ��*/
const int N = 1e5 + 10;
//����
int h[N];
int e[N], ne[N], id;
//��ϣ����
int f(int x) {
	int id;
	id = (x % N + N) % N;
	return id;
}
//����Ԫ��
//���½��ͷ�嵽���Ĺ�ϣֵ��Ӧ�������±�
void insert(int x) {
	//��������Ĺ�ϣֵ
	int idx = f(x);
	id++;
	e[id] = x;
	//�½�����һ��ָ���ڱ�λ�������ڱ�λ����һ��ָ���½��
	ne[id] = h[idx];
	h[idx] = id;
}

//���Һ���
bool find(int x) {
	int idx = f(x);//���ҳ������±꣨��ַ��
	//��������
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