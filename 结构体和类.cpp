#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
// /*5742 ���ȼ�*/
//struct STU
//{
//	int id;
//	int study_score;
//	int extre_score;
//	int total()
//	{
//		return study_score + extre_score;
//	}
//	double zonghe()
//	{
//		return study_score * 7 + extre_score * 3;
//	}
//};
//bool judge(struct STU& t)
//{
//	if (t.total() > 140 && t.zonghe() >= 800)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	STU t;
//	while (n--)
//	{
//		cin >> t.id >> t.study_score >> t.extre_score;
//		if (judge(t))
//			cout << "Excellent" << endl;
//		else
//			cout << "Not excellent" << endl;
//	}
//	return 0;
//}
//�����˹������� �������ˣ����˰��첻��Ȼ��Ϊ���û�л��С�
//�״�㣺�ṹ���ﲻ�ܸ�ֵ��Ҫ���͹����������Ҫ����д����������ȥ����
//�ڽṹ����д��Ա����ʱ�����ô���
//ʱ�̽�����.ȥ����

#include<string>
/*2125��߷�ѧ������*/

/*����һ*/
//struct Stu
//{
//	int score;
//	string name;
//};
//int main()
//{
//	int n;
//	cin >> n;
//	Stu max;
//	Stu s;
//	cin >> max.score >> max.name;
//	n--;
//	while (n--)
//	{
//		cin >> s.score >> s.name;
//		if (s.score > max.score)
//			max = s;//���帳ֵ
//	}
//	cout << max.name << endl;
//	return 0;
//}
//Ҫ�㣺���帳ֵ
//������һ��max��ʣ�µ��Ѿ���һ���ˣ������Լ�


/*������*/
//#include<algorithm>
//const int N = 110;
//struct Stu
//{
//	int score;
//	string name;
//};
//bool cmp(Stu s1,Stu s2)
//{
//	return s1.score > s2.score;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	Stu arr[N];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].score >> arr[i].name;
//	}
//	sort(arr, arr+n,cmp);
//	cout << arr[0].name << endl;
//	
//	return 0;
//}
//�״�㣺�����ǽṹ�����飬ҲҪ��[]���һ������
//�ȽϺ����Ĳ�����ɶ���ǽṹ���������һ�������ĺ�
//sort������Ĳ�����ָ�룬��ַ���ͣ�arr���ܼ�[]���ǲ���Ԫ������
//�����������ʱ��[]��զ���ǳ����أ��������˭�����أ�ѭ������ɶ��


/*2131�������˳�ɸ*/

//struct Patient
//{
//	string name;
//	float degree;
//	int cough;
//};
//int main()
//{
//	int n;
//	int count = 0;
//	cin >> n;
//	Patient peo;
//	while (n--)
//	{
//		cin >> peo.name >> peo.degree >> peo.cough;
//		if (peo.degree >= 37.5 && peo.cough == 1)
//		{
//			count++;
//			cout << peo.name << endl;
//		}
//	}
//	cout << count;
//	return 0;
//}



/*21595*/
#include<algorithm>
//bool cmp(int x, int y)
//{
//	return x > y;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int score[60];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> score[i];
//	}
//	sort(score, score + n, cmp);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << score[i] << " ";
//	}
//	return 0;
//}


/*��ѧ��*/
//struct score
//{
//	int chi;
//	int math;
//	int eng;
//	int id;
//	int total()
//	{
//		return chi + math + eng;
//	}
//}arr[310];
//bool cmp(score& s1, score& s2)
//{
//	if (s1.total() != s2.total())
//		return s1.total() > s2.total();
//	//�������ֵ��ܷ�һ������ʼ�Ƚ����ĳɼ�
//	else if (s1.chi != s2.chi)
//		return s1.chi > s2.chi;
//	else
//		return s1.id < s2.id;
//}
//int main()
//{
//	int n;
//	int tot;
//cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		tot = 0;
//		cin >> arr[i].chi >> arr[i].math >> arr[i].eng;
//		tot = arr[i].total();
//		arr[i].id = i;
//	}
//	sort(arr + 1, arr + 1 + n, cmp);
//	for (int i = 1; i < 6; i++)
//	{
//		cout << arr[i].id << " " << arr[i].total() << endl;
//	}
//	return 0;
//}
//�״�������ֻҪ��forѭ����͵ø�������дi,��Ȼ��ѭ��������һ������ѽ��


/*����*/
//const int N = 110;
//class peo
//{
//public:
//	string name;
//	int year;
//	int month;
//	int day;
//	int id;
//};
//bool cmp(peo& s1, peo& s2)
//{//����s1,s2�Ǵ��ݵ��βεı���,�ǽṹ�����������Ҳ����s1==arr[N]
//	if (s1.year != s2.year)
//		return s1.year < s2.year;
//	else if (s1.month != s2.month)
//		return s1.month < s2.month;
//	else if (s1.day != s2.day)
//		return s1.day < s2.day;
//	else
//		return s1.id > s2.id;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	peo arr[N];
//	for (int i = 0; i < n; i++)//����������һ������
//	{
//		cin >> arr[i].name >> arr[i].year >> arr[i].month >> arr[i].day;
//		arr[i].id = i;
//	}
//	sort(arr, arr + n, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i].name << endl;
//	}
//	return 0;
//}

