#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 10000000;
int e[N];
int ne[N];
int mp[N];//每头插一个元素，都要在mp里边过目，mp里边存的相当于ne的值
//mp的下标是所有的数字，，想找谁，这个下表对应的就是ne里边，也就是他的地址
int h, id;//默认为0

/*创建，初始化*/

//头插
//先让新节点指向下一个位置，再让头结点指向新来的节点
void pushfront(int x)
{
	id++;//给他腾出地方
	mp[x] = id;//来录入数据了
	 e[id] = x;//把x的值赋给给他腾出的新地方
	 ne[id] = ne[h];//h代表的是哨兵的后一位，这个步骤就是让id指向哨兵的下一个位置
	 ne[h] = id;//哨兵指向id
}
//遍历链表
void print()
{
	for (int i = ne[h]; i; i = ne[i])//i不等于0，就继续访问
	{
		cout << e[i] << " ";//e是当前元素
	}
	cout << endl << endl;
}

//按值查找
int find(int x)
{
	//解法一，遍历数组
	/*for (int i = ne[h]; i; i = ne[i])
	{
		if (e[i] == x)
			return i;
	}
	return 0;*/

	//解法二：创建mp数组,用空间替代时间
	return mp[x];
}

//在任意位置p后插入x
void insert(int p, int x)
{
	//首先为新元素开辟空间，id掌管这现在数组有效元素，然后把x放到开辟的空间里，p的ne数组里放的应该是新元素现在的下标id，新元素的ne里放的是ne【p】数，因为p原先后边的数字现在要排在x后边了，
	id++;
	e[id] = x; 
	mp[x] = id;//更新
	ne[id] = ne[p];
	ne[p] = id;
}

//删除任意位置p后的元素
void erase(int p)
{
	//先更新mp，思路：直接让p链接先一个的下一个，把中间的跳过，遍历数组时就不会到他
	mp[ne[ne[p]]] = 0;
	ne[p] = ne[ne[p]];

}
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		pushfront(i);
		print();
	}
	cout << find(1) << endl;
	cout << find(6) << endl;
	cout << find(5) << endl;
	insert(2, 100);
	print();
	erase(3);
	print();
	return 0;
}

