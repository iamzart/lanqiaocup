#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
// /*5742 评等级*/
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
//气死了哈哈哈哈 长记性了，改了半天不居然因为最后没有换行·
//易错点：结构体里不能赋值，要不就构造个函数，要不就写在主函数里去计算
//在结构体里写成员函数时，不用传参
//时刻谨记用.去访问

#include<string>
/*2125最高分学生姓名*/

/*方法一*/
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
//			max = s;//整体赋值
//	}
//	cout << max.name << endl;
//	return 0;
//}
//要点：整体赋值
//先输入一个max，剩下的已经少一个了，让它自减


/*方法二*/
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
//易错点：尽管是结构体数组，也要给[]里放一个常量
//比较函数的参数是啥？是结构体变量，你一天天好玩的很
//sort函数里的参数是指针，地址类型，arr不能加[]，那不成元素了吗
//给数组输入的时候，[]里咋能是常量呢，那你这给谁输入呢，循环还有啥用


/*2131甲流病人初筛*/

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


/*奖学金*/
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
//	//接下来轮到总分一样，开始比较语文成绩
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
//易错！经常错！只要在for循环里，就得给数组里写i,不然你循环来都是一组数据呀！


/*生日*/
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
//{//这里s1,s2是传递的形参的别名,是结构体变量，这里也就是s1==arr[N]
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
//	for (int i = 0; i < n; i++)//亲手完善了一个数组
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

