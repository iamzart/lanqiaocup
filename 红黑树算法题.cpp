#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;

//int n, p;
//map<string, int>mp;
//bool check(char ch) {
//	if (ch > '0' && ch < '9' || ch>'a' && ch < 'z' || ch>'A' && ch < 'Z')
//		return true;
//	else
//		return false;
//}
//int main() {
//	cin >> n >> p;
//	for (int i = 0; i < n; i++) {
//		string a; int b;
//		cin >> a >> b;
//		mp[a] = b;//将单词和含金量绑定
//	}
//	long long ret = 0;
//	string t="";
//	char ch;
//	while (scanf("%c", ch)!=EOF ){//不能用cin，因为读到空格会停
//		if (check(ch))
//			t += ch;
//		else
//		{
//			//读到分隔符
//			ret = (ret + mp[t]) % 99;//含金量的累计和
//			t = "";//归零继续累计
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

/*营业额统计*/
//迭代器可能会越界，所以加个左右护法，怎么才能不影响呢，就是给它们的值是数据范围外的
 
//#include<cstdlib>
//#include<set>
//#include<algorithm>
//const int INF = 1e7 + 10;
//int n;
//set<int>mp;//存储i天之前的营业额
//int main() {
//	cin >> n;
//	int ret; cin >> ret;//第一天的
//	mp.insert(INF);
//	mp.insert(-INF);
//	mp.insert(ret);
//	for (int i = 2; i <= n; i++) {
//		int x;
//		cin >> x;
//		//找出距离x最近的那一个
//		auto it = mp.lower_bound(x);//找出大于等于x的最小值，是迭代器
//		auto tmp = it;
//		tmp--;
//		ret += min(abs(*tmp - x), abs(*it - x));
//		mp.insert(x);
//		
//	}
//	cout << ret << endl;
//	return 0;
//}
#include<set>
#include<cstdlib>
int n;
 const long long INF = 1e10 + 10;
set<long long>mp;
int main() {
	mp.insert(INF);
	mp.insert(-INF);
	int q; cin >> q;
	while (q--) {
		long long op, x; cin >> op >> x;
		if (op == 1) {
			
			if (mp.count(x))
				cout << "Already Exist" << endl;
			else
				mp.insert(x);
		}
		else {
			//出货
			if (mp.size() == 2) {
				cout << "Empty" << endl;
			}
			else {
				auto it = mp.lower_bound(x);
				auto tmp = it;
				tmp--;//tmp是小的
				if (abs(*tmp - x) <= abs(*it - x)) {
					//就是tmp离x比较近
					//如果tmp离x比较近的话就输出tmp，如果距离相等的话tmp是小的也输出tmp
					cout << *tmp << endl;
					mp.erase(tmp);
				}
				else {
					cout << *it << endl;
					mp.erase(it);
				}

			}
		}
	}
	return 0;
}