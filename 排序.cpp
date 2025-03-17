#define _CRT_SECURE_NO_WARNINGS
/*��������*/
//#include<iostream>
//#include<ctime>
//using namespace std;
//const int N = 1e5 + 10;
//int n, arr[N];
//
//int get_random(int left, int right) {
//	return arr[left+rand() % (right - left + 1) ];
//}
//void quick_sort(int left, int right) {
//	if (left >= right)//���Ѿ��߹����������䳤����һʱ
//		return;
//	int p = get_random(left, right);
//	
//	int l = left - 1, i = left, r = right + 1;
//	while (i < r) {
//		if (arr[i] < p)
//		{
//			swap(arr[i++], arr[++l]);
//		}
//		else if (arr[i] == p) i++;
//		else swap(arr[--r], arr[i]);//��Ϊ����֪������ȥ�����ֵ�컯������Բ��������ԼӼ�
//
//	}
//	//�ݹ�
//	quick_sort(left, l);
//	quick_sort(r, right);
//}
//int main() {
//	cin >> n;
//	srand(time(0));
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	quick_sort(1, n);
//	for (int i = 1; i <= n; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

/*�鲢����*/
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
int tmp[N];

void merge_sort(int left, int right) {
	if (left >= right) return;
	int mid = (left + right) >> 1;
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	//�������Ѿ��ֳɵ����������
	int cur1 = left, cur2 = mid + 1, i = left;
	while (cur1 <= mid && cur2 <= right) {
		if (arr[cur1] <= arr[cur2])
			tmp[i++] = arr[cur1++];
		else
			tmp[i++] = arr[cur2++];
	}
	//���洦��ʣ�µ�
	while (cur1 <= mid) {
		tmp[i++] = arr[cur1++];
	}
	while (cur2 <= right) {
		tmp[i++] = arr[cur2++];
	}
	for (int j = left; j <= right; j++) {
		arr[j] = tmp[j];
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	merge_sort(1, n);

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}