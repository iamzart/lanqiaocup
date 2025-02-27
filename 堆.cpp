#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int n;
//用顺序存储
int heap[N];
void up(int child) {//所以传的是下标吗
	int parent = child / 2;
	while (parent >= 1 && heap[parent] < heap[child]) {
		//当父结点存在且不符合顺序时
		swap(heap[parent], heap[child]);
		child = parent;
		parent = child / 2;
	}
}

void down(int parent) {
	//找出最大孩子
	int child = parent * 2;//左孩子，先定义左孩子，如果左孩子都没有就更没有右孩子了
	while (child <= n)//如果存在孩子
	{
		if (child + 1 <= n && heap[child + 1] > heap[child]) child++;
		//现在child落在最大的孩子上
		if (heap[parent] > heap[child]) return;
		swap(heap[child], heap[parent]); 
		parent = child;
		child = parent * 2;
	}

}
//插入元素
void push(int x) {
	heap[++n] = x;
	up(n);
}
//删除堆顶元素
void pop() {
	swap(heap[1], heap[n]);
	n--;
	down(1);
}
//查询堆顶元素
int top() {
	return heap[1];
}
//堆的大小
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

