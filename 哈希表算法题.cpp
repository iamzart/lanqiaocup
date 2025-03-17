#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_map>
using namespace std;


//int main() {
//	unordered_map<string, int> mp;
//	int n; cin >> n;
//	while (n--) {
//		int op;
//		string name;
//		cin >> op;
//		if (op == 1) {
//			int score;
//			cin >> name >> score;
//				mp[name] = score;
//				cout << "OK" << endl;
//		}
//		else if (op == 2) {
//			cin >> name;
//			if (mp.count(name)) {
//				cout << mp[name] << endl;
//			}
//			else {
//				cout << "Not found" << endl;
//			}
//		}
//		else if (op == 3) {
//			cin >> name;
//			if (mp.count(name)) {
//				mp.erase(name);
//				cout << "Deleted successfully" << endl;
//			}
//			else {
//				cout << "Not found" << endl;
//			}
//		}
//		else {
//			cout << mp.size() << endl;
//		}
//	}
//	return 0;
//}

/*4350*/
//#include<cstdio>
//#include<unordered_set>
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int n; 
//		scanf("%d", &n);
//		unordered_set<int> mp;
//
//		for (int i = 1; i <= n; i++) {
//			int x;
//			scanf("%d", &x);
//			if (!mp.count(x)) {
//				printf("%d ", x);
//				mp.insert(x);
//			}
//			//����Ѿ����˾Ͳ���������
//		}
//		puts("");
//	}
//	return 0;
//}
////���ȣ� ��ap�������ѭ������ʱ��ÿ�γ�ѭ�����Զ����٣������ϸ����Ե�Ӱ�죬����ŵ�ѭ������൱��ȫ�ֱ�����ÿ�ζ�������Ҫ������ֶ�clear��Ч��Ҳһ�������Ƿ�ʱ��
/*�Ķ����*/
//#include<set>
//unordered_map<string, set<int>>mp;
//int main() {
//	int n;
//	cin >> n;
//	//�������ߵģ���Ϊ��ߵ���������ţ���ߵ��������ڲ�
//	for (int i = 1; i <= n; i++) {
//		int l; cin >> l;
//		while (l--) {
//			string word;
//			cin >> word;
//			mp[word].insert(i);
//			//ÿ�����뵥�� �������Ǳ��������ƪ���������
//		}
//	}
//	int m; cin >> m;
//	while (m--) {
//		string wordnew;
//		cin >> wordnew;
//		for (auto e : mp[wordnew]) {
//			cout << e << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

/*A-B����*/
//const int N = 2e5 + 10;
//long long arr[N];
//int main() {
//	unordered_map<long long,long long>mp;
//	long long n, c;
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++) {
//		int x; cin >> arr[i];
//		/*
//		A-B=C
//		B+C=A
//		Ҳ����˵��B+C��map������A
//		*/
//		//���ǵ���֪����������ľ���A���ô������ǵĴ���
//		mp[arr[i]]++;
//	}
//	//�����˿�ʼ��
//	long long count = 0;
//	for (int i = 1; i <= n; i++) {
//		count += mp[c + arr[i]];
//	}
//	cout << count << endl;
//	return 0;
//}
///*unordered_map �������Զ���Ϊ
//��������¼���Ĭ��ֵ�� 0��
//������Ҳ����ڵļ������� 0��*/


/*���к���*/
//�Ѷ�Ӧ��ϵƴ����ƴ���ַ������ù�ϣ���¼����
int main() {
	unordered_map<string, int>mp;
	int n; cin >> n;
	int ret = 0;
	while (n--) {
		string a, b;
		cin >> a >> b;
		a = a.substr(0, 2);
		mp[a + b]++;
		ret += mp[b + a];

	}
	cout << ret << endl;
	return 0;
}