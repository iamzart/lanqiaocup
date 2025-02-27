#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int n;
//��˳��洢
int heap[N];
void up(int child) {//���Դ������±���
	int parent = child / 2;
	while (parent >= 1 && heap[parent] < heap[child]) {
		//�����������Ҳ�����˳��ʱ
		swap(heap[parent], heap[child]);
		child = parent;
		parent = child / 2;
	}
}

void down(int parent) {
	//�ҳ������
	int child = parent * 2;//���ӣ��ȶ������ӣ�������Ӷ�û�о͸�û���Һ�����
	while (child <= n)//������ں���
	{
		if (child + 1 <= n && heap[child + 1] > heap[child]) child++;
		//����child�������ĺ�����
		if (heap[parent] > heap[child]) return;
		swap(heap[child], heap[parent]); 
		parent = child;
		child = parent * 2;
	}

}
//����Ԫ��
void push(int x) {
	heap[++n] = x;
	up(n);
}
//ɾ���Ѷ�Ԫ��
void pop() {
	swap(heap[1], heap[n]);
	n--;
	down(1);
}
//��ѯ�Ѷ�Ԫ��
int top() {
	return heap[1];
}
//�ѵĴ�С
int size() {
	return n;
}
int main() {
	int arr[10] = { 99,66,77,66,88,-1,44,3,100,5 };
	for (int i = 0; i < 10; i++) {
		push(arr[i]);
	}
	while (size()) {
		cout << top() << " ";
		pop();
	}
	return 0;
}

