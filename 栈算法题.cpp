#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stack>
using namespace std;
//const int N = 1e6 + 10;
//int stk[N], n;//ʵ��һ��ջֻ��Ҫһ���㹻������飬��һ������
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
/*�����Ǵ�⣬�����ˣ���Ҫ�����Ƕ������������벻���*/
//��������˼�ǣ�����ĳ�ջ���У�������û�п������������������������ģ�ȥӭ�ϳ�ջ����
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
//		for (int i = 1; i <= n; i++)//��Ԫ�����α�����ջ
//		{
//			st.push(a[i]);
//			while (j <= n && st.size() && st.top() == b[j])
//			{
//				st.pop();
//				j++;//��ջ
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


/*���ʽ��ֵ*/
//������һ�ѣ���������������֣��ͽ�ջ������ǲ��������͵�������ջ��Ԫ�أ������ٽ�ջ

//����������������磬�ַ�������ѽ������������ת�����֣�������Ķ��Ǽӷ���˼·Ӵ���⣬©���ٳ�
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

//��ģ��Ĺ����ô���ʵ�־Ϳ�����
//����˼·��Ҫ���������������ַ��������@����break������������ַ���Ҫ�Ȱ���ת�����֣���*10+num���浽һ�������У��������һ���㣬֤��������һ�������ˣ��Ǹ�num���ܽ�ջ���ٰ�num����
//��������ǣ����ǲ���������������ջ��Ԫ�أ����㣬����ջ��Ԫ�ؾ��ǽ����
//stoi����ֻ�������ַ���
//���ַ���''-0,�������ǵ����֣������ˣ�
//int main()
//{
//	stack<int>st;
//	int num = 0;
//	char ch;
//	while (cin >> ch)
//	{
//		if (ch == '@')
//			break;
//		else if (ch >= '0' && ch <= '9')//�ַ���û��asciiֵ
//			num = num * 10 + ch - '0';
//		else if (ch == '.')
//		{
//			st.push(num);//�����ַ���ջ��
//			num = 0;//����
//		}
//		else//������
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


/*��������*/
//��Ϊ��Ŀ��˵�����ʧ����Ҫ��ʧ�ܵ��Ա߸������ϣ����������ƥ�����������Ҫ������ǵ�λ�ã���Ҫ��¼�����Ƿ�ƥ��ɹ�
//��һ��bool���͵����飬��ߵ��±�����ַ����������ǵ��±꣬��ÿ���±궼��¼������٣���󷽱��ʧ�ܵ��ֲ�
//����˼·���������ַ����������ַ���������������ţ��ͽ�ջ���������������ַ����е��±꣬����¼λ�ã�����ΪҪ��ƥ��λ��ʧ�ܵ��Ա��ֲ�
//����������ţ�������ջ���ǲ���һ�ԣ�����ǵĻ������������Ϊtrue��������Ǿ���false����ô�����Ǳ���أ��Ѿ������ǵ��±��ˣ�����bool���飬��mp����һ��������
//�����Խ����ˣ����Ϊ�棬�������������������Ϊ�٣��ڷ������ۣ�

int main()
{
	string s;
	string ret = "";
	int i = 0;
	bool b[110] = {false};//������������Ƿ�ƥ��ɹ���
	stack<int>stk;//��¼λ��
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '[' || s[i] == '(')//�����������
			stk.push(i);//�±��ջ
		else//������
		{
			if (stk.empty())//�жϿ�ջ���
				continue;
			if ((s[i] ==')'&& s[stk.top()]=='(')||(s[i]==']'&&s[stk.top()]=='['))//���Ŀǰ�������ŵ���ջ��
			{//���������ǵ��±꣬�����±��������b��������
				b[i] = b[stk.top()] = true;
				stk.pop();//���ƥ��ɹ��ˡ�����ջ������������Ȼ�������ôƥ��
			}
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (b[i])//�������±�����ű����Ϊ����
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

//�š����ͨ����
//����ƥ��ɹ������ǰ�ջ�����������У���bool���������ĳ��λ�õ�Ԫ���Ƿ�ɹ��ܻ��ǣ���ס���ؼ���Ҫ�ǵü�¼���ǵ�λ��