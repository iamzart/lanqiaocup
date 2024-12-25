#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stack>
using namespace std;
//const int N = 1e6 + 10;
//int stk[N], n;//实现一个栈只需要一个足够大的数组，和一个变量
//
//void push(int x)
//{
//	stk[++n] = x;
//}
//bool empty()
//{
//	return n == 0;
//}
//void pop()
//{
//	cout<< stk[n];
//}
//void size()
//{
//	cout << n << endl;
//}
//int main()
//{	
//
//	return 0;
//}


//stack<int>st;
//int main()
//{
//	int q;
//	cin >> q;
//	while (q--)
//	{
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			int x;
//			cin >> x;
//			st.push(x);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			int e;
//			cin >> e;
//			if (st.top() == e)
//			st.pop();
//		}
//		if (st.empty())
//			cout << "Yes" << endl;
//		else
//		cout << "No" << endl;
//	}
//	return 0;
//}
/*以上是错解，理解错了，是要让他们都出来，看看想不想等*/
//这个题的意思是，给你的出栈序列，问你有没有可能是他，就是由他·主导的，去迎合出栈序列
//stack<int>st;
//const int N = 1e5 + 10;
//int a[N], b[N];
//int main()
//{
//	int q, n = 0;
//	cin >> q;
//	while (q--)
//	{
//		cin >> n;
//		for (int i = 1; i <= n; i++) cin >> a[i];
//		for (int i = 1; i <= n; i++) cin >> b[i];
//		int j = 1;
//		for (int i = 1; i <= n; i++)//让元素依次遍历进栈
//		{
//			st.push(a[i]);
//			while (j <= n && st.size() && st.top() == b[j])
//			{
//				st.pop();
//				j++;//出栈
//			}
//
//		}
//		if (st.size())
//			cout << "No" << endl;
//		else
//			cout << "Yes" << endl;
//	}
//	return 0;
//}


/*表达式求值*/
//先输入一堆，遍历，如果是数字，就进栈，如果是操作符，就弹出两个栈顶元素，算完再进栈

//你这个代码我懒得喷，字符哪能算呀，都不把他们转成数字，而且算的都是加法，思路哟问题，漏洞百出
//stack<int>st;
//
//int main()
//{
//	string s;
//	int num = 0;
//	cin >> s;
//	for (auto ch : s)
//	{
//		while (ch)
//		{
//			if (isdigit(ch))
//				st.push(ch);
//			else if (ch == '+' || ch == '-' || ch == '/' || ch == '*')
//			{
//				num = st.top() + st.top();
//				st.push(num);
//			}
//			else if (ch == '@')
//				break;
//		}
//
//	}
//	cout << num << endl;
//
//	return 0;
//}

//把模拟的过程用代码实现就可以了
//代码思路：要分类讨论遇到的字符，如果是@，就break，如果是数字字符，要先把它转成数字，用*10+num，存到一个变量中，如果遇到一个点，证明输入了一个数字了，那个num才能进栈，再把num归零
//如果都不是，就是操作符，弹出两个栈顶元素，运算，最后的栈顶元素就是结果了
//stoi函数只能用作字符串
//！字符串''-0,就是他们的数字！你忘了！
//int main()
//{
//	stack<int>st;
//	int num = 0;
//	char ch;
//	while (cin >> ch)
//	{
//		if (ch == '@')
//			break;
//		else if (ch >= '0' && ch <= '9')//字符串没有ascii值
//			num = num * 10 + ch - '0';
//		else if (ch == '.')
//		{
//			st.push(num);//把数字放入栈中
//			num = 0;//归零
//		}
//		else//操作符
//		{
//			int b = st.top(); st.pop();
//			int a = st.top(); st.pop();
//			if (ch == '+')
//				st.push(a + b);
//			else if (ch == '-')
//				st.push(a - b);
//			else if (ch == '*')
//				st.push(a * b);
//			else
//				st.push(a / b);
//		}
//	}
//	cout << st.top() << endl;
//
//	return 0;
//}


/*括号序列*/
//因为题目中说，如果失败了要在失败的旁边给他补上，这个操作在匹配结束，所以要标记他们的位置，还要记录他们是否匹配成功
//用一个bool类型的数组，里边的下标就是字符串里括号们的下标，给每个下标都记录他们真假，最后方便给失败的弥补
//代码思路：先输入字符串，遍历字符串，如果是左括号，就进栈，进的是他们在字符串中的下标，（记录位置），因为要再匹配位置失败的旁边弥补
//如果是右括号，看看和栈顶是不是一对，如果是的话，给他俩标记为true，如果不是就是false，怎么给他们标记呢，已经有他们的下标了，就用bool数组，和mp数组一样功能灵活，
//最后配对结束了，如果为真，就连续弹出两个，如果为假，在分类讨论，

int main()
{
	string s;
	string ret = "";
	int i = 0;
	bool b[110] = {false};//用来标记他们是否匹配成功了
	stack<int>stk;//记录位置
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '[' || s[i] == '(')//如果是左括号
			stk.push(i);//下标进栈
		else//右括号
		{
			if (stk.empty())//判断空栈情况
				continue;
			if ((s[i] ==')'&& s[stk.top()]=='(')||(s[i]==']'&&s[stk.top()]=='['))//如果目前的右括号等于栈顶
			{//现在有他们的下标，根据下标给他们在b数组里标记
				b[i] = b[stk.top()] = true;
				stk.pop();//如果匹配成功了·得让栈顶弹出啊，不然下面的怎么匹配
			}
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (b[i])//如果这个下标的括号被标记为真了
		{
			ret += s[i];
		}
		else {
			if (s[i] == '(')
			{
				ret += s[i];
				ret += ')';
			}
			else if (s[i] == ')')
			{
				ret += '(';
				ret += s[i];
			}
			else if (s[i] == '[')
			{
				ret += s[i];
				ret += ']';
			}
			else
			{
				ret += '[';
				ret += s[i];
			}
		}
	}
	cout << ret << endl;
	return 0;
}

//嗯。最后通过了
//错误：匹配成功后，忘记把栈顶弹出，还有，用bool数组来标记某个位置的元素是否成功很机智，码住，关键是要记得记录他们的位置