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
//		mp[a] = b;//�����ʺͺ�������
//	}
//	long long ret = 0;
//	string t="";
//	char ch;
//	while (scanf("%c", ch)!=EOF ){//������cin����Ϊ�����ո��ͣ
//		if (check(ch))
//			t += ch;
//		else
//		{
//			//�����ָ���
//			ret = (ret + mp[t]) % 99;//���������ۼƺ�
//			t = "";//��������ۼ�
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

/*Ӫҵ��ͳ��*/
//���������ܻ�Խ�磬���ԼӸ����һ�������ô���ܲ�Ӱ���أ����Ǹ����ǵ�ֵ�����ݷ�Χ���
 
//#include<cstdlib>
//#include<set>
//#include<algorithm>
//const int INF = 1e7 + 10;
//int n;
//set<int>mp;//�洢i��֮ǰ��Ӫҵ��
//int main() {
//	cin >> n;
//	int ret; cin >> ret;//��һ���
//	mp.insert(INF);
//	mp.insert(-INF);
//	mp.insert(ret);
//	for (int i = 2; i <= n; i++) {
//		int x;
//		cin >> x;
//		//�ҳ�����x�������һ��
//		auto it = mp.lower_bound(x);//�ҳ����ڵ���x����Сֵ���ǵ�����
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
			//����
			if (mp.size() == 2) {
				cout << "Empty" << endl;
			}
			else {
				auto it = mp.lower_bound(x);
				auto tmp = it;
				tmp--;//tmp��С��
				if (abs(*tmp - x) <= abs(*it - x)) {
					//����tmp��x�ȽϽ�
					//���tmp��x�ȽϽ��Ļ������tmp�����������ȵĻ�tmp��С��Ҳ���tmp
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