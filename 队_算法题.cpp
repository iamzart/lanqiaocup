#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
const int N = 1e6 + 10;
//int main()
//{
//	int n, op, x;
//	cin >> n;
//	while (n--)
//	{
//		cin >> op;
//		if (op == 1)
//		{
//			cin >> x;
//			q[t++] = x;
//		}
//		else if (op == 2)
//		{
//			if (t == h)
//				cout << "ERR_CANNOT_POP" << endl;
//			else
//			h++;
//		}
//		else if (op == 3)
//		{
//			if (h != t)
//				cout << q[h] << endl;
//			else
//			cout << "ERR_CANNOT_QUERY" << endl;
//		}
//		else
//		{
//			cout << t-h << endl;
//		}
//	}
//	return 0;
//}

/*机器翻译*/
//int main()
//{
//	queue<int>q;
//	bool b[N] = { false };
//	int m, n;
//	int word;
//	int count = 0;
//	cin >> m >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> word;
//		if(q.size() < m&&b[word]==false)//当内存没满并且没出现过
//		{
//			q.push(word);
//			b[word] = true;//true表示已经有了
//			count++;
//		}
//		else if(q.size()>=m &&b[word]==false)
//		{
//			b[q.front()] = false;
//			q.pop();
//			q.push(word);
//			b[word] = true;//true表示已经有了
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}
////我现在这样写，每个i都是独一无二的
//错误点：就在这！bool数组里下标一定是别的里边的元素了，不能是一个下标，不然每个都是独一无二的

//这个是我的方法，话有一个是先判断如果是true，直接continue，因为第一个肯定是false嘛
//然后else后边都是没出现过的了，无脑push进去，如果大于m就删一个

/*海港*/
//代码思路：把每一行输入搞成一个队列，pair类型，，最重要的是怎么记录国籍种类，就是用一个数组，下表对应他们的国籍数字，如果每出现一个新的，本来他们都是0，就会变成一，从零变一从量变到质变，代表种类kind++，然后如果他们时间不合适被顶出去了，就删除队头，且让count从1变0，如果是这个变化的话，就kind--，kind记录的是每个从零变一，就是国家种类，所以最后输出kind

typedef pair <int, int>PII;
queue<PII> q;
int n, x;
int cnt[N];//表示i国家一共有多少人
int	kind;
int t, k;//时间和人数
int main()
{
	cin >> n;
	while (n--)//这个循环就是给队列·录入信息
	{
		cin >> t >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> x;
			q.push({ t,x });//加入到队列里
			if (cnt[x]++ == 0)//从零到一
			{
				kind++;
			}

		}
		//让不合法的出队
		while (q.size() && q.back().first - q.front().first >= 86400)
		{
			auto tmp = q.front();
			q.pop();//在出队之前先保存一下，让他的kind得更新
			if (cnt[tmp.second]-- == 1)
			{//先用完再减减
				kind--;
			}
		}
		cout << kind << endl;

	}
	
	return 0;
}
//易错点：typedef要写在main函数前边，积累cnt[],kind的组合使用，质变种类++，