#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

/*����ͳ��*/
//����˼·��
//��һ�ַ�������getline���ж��Ƿ�Ϊ�հ��ַ���������ǣ�������++
//�ڶ��ַ�������ѭ���ķ�ʽ����һ���ַ�����ɼ������ʣ���Ϊcin�������ո���whileѭ������cin�Ļ����ܶ�ȡ�ͻ����ѭ�������ܶ�ȡ�ͻ�����ѭ������Ҫ��ctrlZ

//int main()
//{
//	string s;
//	int cnt = 0;
//	getline(cin, s);
//	//�������ж�
//	for (auto e : s)
//	{
//		if (isspace(e))//����ǿո�
//			continue;
//		else
//		 cnt++;
//	}
//	cout << cnt << endl;
//
//	return 0;
//}

//int main()
//{
//	string s;
//	int cnt = 0;
//	while (cin >> s)
//	{
//		//����һ�����ʾ�������ĳ��ȼ�����
//		cnt += s.size();
//	}
//	cout << cnt << endl;
//	return 0;
//}


/*ʯͷ���Ӳ�*/
//����˼·��ѭ��n�Σ��ַ����ȴ�С

//int main()
//{
//	int n;
//	cin >> n;
//	string s1;
//	string s2;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s1 >> s2;
//		if (s1 > s2 && s1 == "Rock")
//			cout << "Player1";
//
//��s1Ӯ��������г���������֮��else
//
//	}
//	return 0;
//}


//int main()
//{
//	string s;
//	getline(cin, s);
//	string::iterator it = s.begin();//����beginָ���ַ���s�ĵ�һ��Ԫ��
//	int sz = s.size();
//	for (int i = 0; i < sz; i++)
//	{
//		if (isupper(s[i]) || islower(s[i]))
//		{
//			s[i] -= 1;
//			if (s[i] == 'a' || s[i] == 'A')
//				s[i] += 25;
//			
//		}
//
//	}
//	cout << s << endl;
//	return 0;
//}


/*���ִ������*/
//int main()
//{
//	int q;
//	cin >> q;
//	string s;
//	int a = 0, b = 0;
//	string str1;
//	string str;
//	cin >> s;
//	int n = 0;
//	for (int i = 0; i < q; i++)
//	{
//		cin >> n;
//		switch (n)//ѡ��
//		{
//		case 1:
//			cin >> str;
//			s += str;
//			cout << s << endl;
//			break;
//		case 2:
//			cin >> a >> b;
//			 s = s.substr(a, b);//������ֻ���������Ƕ�����ַ���������иı䣬�������һ�������ܣ���ô��û�ж���������иı�
//			cout << s << endl;
//			break;
//		case 3:
//			cin >> a >> str;
//			s.insert(a, str);
//			cout << s << endl;
//			break;
//		case 4:
//			cin >> str;
//			size_t m = s.find(str);
//			if (m == string::npos)//û�ҵ�
//				cout << "-1" << endl;
//			else
//				cout << m << endl;
//
//			break;
//		}
//
//	}
//	return 0;
//}


/*���ʵĳ���*/
//����˼·��˵ʵ���Ҿ��ã���getline���ȥ��һ����զ�����ֿ���
//int main()
//{
//	string s;
//	cin >> s;
//	cout << s.size();
//	while (cin >> s)//���������s�������˾ͻ�����ѭ�����ܶ��Ļ��������հ��ַ�
//	{
//		cout << "," << s.size();
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	string s;
//	bool flag = true;
//	while (cin >> s)//���������s�������˾ͻ�����ѭ�����ܶ��Ļ��������հ��ַ�
//	{
//		if (flag) {
//			cout << s.size();
//			flag = false;//�տ�ʼ������������һ�κ�ͱ�ɼ٣�����Ͷ��ǺͶ������
//		}
//		else
//			cout << "," << s.size();
//		
//
//	}
//
//	return 0;
//}

//��һ�ַ���
// ֻ���ֵ�һ���ַ����������������룬��ߵĻ������ַ�����Ϊһ��
//�ڶ��ַ���
//��flag��true�������������������Ͻ���Ϊfalse������ֻ��������һ�Σ��ڶ��ξͲ���true���ͽ�������



//int main()
//{
//	string s;
//	char tmp;
//	
//	while (cin >> s)
//	{
//		string::iterator it = s.begin();
//		string::iterator is = s.end() - 1;
//		while (it < is)
//		{
//			tmp = *it;
//			*it = *is;
//			*is = tmp;
//			it++;
//			is--;
//		}
//		cout << s << endl;
//	}
//	return 0;
//}
//Ҫ�ѵ�������ѭ����!!!

//int main()
//{
//	string s;
//	
//	char tmp;
//	while (cin >> s)
//	{
//		int i = 0;
//		size_t sz = s.size();
//		while (i < sz - 1)
//		{
//			tmp = s[i];
//			s[i] = s[sz - 1];
//			s[sz - 1] = tmp;
//			i++;
//			sz--;
//		}
//		cout << s << endl;
//	}
//	return 0;
//}

//#include<algorithm>
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		reverse(s.begin(), s.end());
//		cout << s << endl;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	for (int &e : arr)
//	{
//		cin >> e;
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, arr+sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i];
//	}
//
//}



//int main()
//{
//	string s;
//	cin >> s;
//	size_t sz = s.size();
//	int left = 0;
//	int right = sz - 1;
//	int flag = 1;//�ǻ�����
//	while (left < right)
//	{
//		if (s[left] == s[right])
//		{
//			left++;
//			right--;
//		}
//		else
//		{
//			cout << "no" << endl;
//			flag = 0;
//			break; //�������дreturn0��!!������ǰ����
//		}
//			
//	}
//	//���ڳ�ѭ���ˣ�ֻ�����ֿ���
//	//��һ������Ȼ�ĳ�ѭ��������һֱ��ȣ�֪�����Ƚ�����
//	//�ڶ����������no
//	if (flag == 1)
//		cout << "yes" << endl;
//	return 0;
//}

//#include<algorithm>
//int main()
//{
//	string s;
//	cin >> s;
//	string t = s;
//	string::iterator it = s.begin();
//	string::iterator is = s.end();
//	//reverse����û�з���ֵ�������Ǹı�������
//	//Ӧ�ÿ���һ������ʹ��
//	reverse(it, is);
//	if (s == t)
//	{
//		cout << "yes" << endl;
//	}
//	else
//		cout << "no" << endl;
//
//	return 0;
//}


/*�ֻ�*/
//int main()
//{
//	//��Ϊ�пո�Ҫ������ȥ��������getline
//	string s;
//	int sum = 0;
//	int count[26] = { 1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3,4, 1,2,3, 1,2,3,4 };
//	//��Щ�������ǵ��±�����
//	getline(cin, s);
//	//������Ҫ����
//	for (auto ch : s)
//	{
//		if (ch == ' ')
//			sum += 1;
//		else
//		sum += count[ch - 'a'];
//	}
//	cout << sum << endl;
//	return 0;
//}



/*������ϰ��*/
//int main()
//{
//	string op;
//	int i;
//	int n1, n2;
//	cin >> i;
//	int r = 0;
//	string ans=0;
//	while (i--) {
//		cin >> op;
//		cin >> n1 >> n2;
//		if (op == "a" || op == "b" || op == "c")
//		{//�����������
//			
//			ans += to_string(n1);
//			ans += op;
//			ans += to_string(n2);
//			ans += "=";
//			ans += to_string(r);
//
//		}
//		else
//		{//�����������
//
//		}
//	}
//	return 0;
//}