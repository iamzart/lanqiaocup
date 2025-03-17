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
//			//如果已经有了就不插入了呗
//		}
//		puts("");
//	}
//	return 0;
//}
////惊讶： 当ap定义放在循环里面时，每次出循环会自动销毁，不受上个测试的影响，如果放到循环外边相当于全局变量，每次都用它，要在最后手动clear，效果也一样，就是费时间
/*阅读理解*/
//#include<set>
//unordered_map<string, set<int>>mp;
//int main() {
//	int n;
//	cin >> n;
//	//序号是外边的，因为外边的是文章序号，里边的是文章内部
//	for (int i = 1; i <= n; i++) {
//		int l; cin >> l;
//		while (l--) {
//			string word;
//			cin >> word;
//			mp[word].insert(i);
//			//每次输入单词 都给他们标记上是哪篇文章里面的
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

/*A-B数对*/
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
//		也就是说算B+C在map里面找A
//		*/
//		//但是得先知道现在输入的就是A，得村下他们的次数
//		mp[arr[i]]++;
//	}
//	//存完了开始找
//	long long count = 0;
//	for (int i = 1; i <= n; i++) {
//		count += mp[c + arr[i]];
//	}
//	cout << count << endl;
//	return 0;
//}
///*unordered_map 有两个自动行为
//如果插入新键，默认值是 0。
//如果查找不存在的键，返回 0。*/


/*城市和州*/
//把对应关系拼起来拼成字符串，用哈希表记录次数
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