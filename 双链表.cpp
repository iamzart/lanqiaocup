#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
//创建双链表
//感觉双链表，后驱是从前往后找，前驱是从后往前找
int e[N], ne[N], pre[N], mp[N], h, id;

//头插
//1.先操作新节点的头尾，先让新结点的头指向哨兵尾，再让新节点的尾指向哨兵后边节点的头
//2.再操作第二个节点，让他的头指向新节点的尾
//3.最后让哨兵的尾指向新节点的头
//他们的对象都是下标--位置
void pushfront(int x)
{
	id++;//开辟空间
	e[id] = x;
	mp[x] = id;//把你的下标（位置）交给我，我给你放到你的原本位置上
	pre[id] = h;//新结点的头指向哨兵的尾,哨兵的尾应该是哨兵的位置，就是哨兵自己下标呀，不是里边的元素，这样的话就等于下一个元素的下标了
	ne[id] = ne[h];//新节点的尾指向下一个元素的头ne[h]是第二个节点的下标
	pre[ne[h]] = id;//让第二个节点的头指向新节点
	ne[h] = id; //哨兵的尾指向新节点
}//要最后修改左边的后继

//遍历双链表--和单链表一样，只用ne就能遍历
void print()
{
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << e[i] << " ";//i在控制整个数组
	}
	cout << endl;
}

//按值查找--mp数组优化
int find(int x)
{
	return mp[x];
}

//在任意位置p后插入新的节点x
//类似头插，先修改新节点的头尾，再修改后边，再前边
void insert_back(int p, int x)
{
	id++;
	e[id] = x;//id不能放前面被赋值，不能这么轻易被改变呀
	mp[x] = id;
	pre[id] = p;//让新节点的头指向p的尾
	ne[id] = ne[p];
	pre[ne[p]] = id;//让p的下一个的头指向新节点
	ne[p] = id; //这里id是新节点的位置，如果套一个ne就是新节点的下一个
}

//在任意位置p之前插入元素x
//最后修改p的前驱指针，否则就找不到p之前的元素了
void insert_front(int p, int x)
{
	id++;
	e[id] = x;
	mp[x] = id;
	ne[id] = p;
	pre[id] = pre[p];//新节点的前驱指针等于p前边的位置
	ne[pre[p]] = id;
	pre[p] = id;
}

//删除任意位置p的元素--跳过该节点即可
//让p的前驱节点的后继指针指向p的后继节点
//让p的后继结点的前驱指针指向p的前驱节点
void erase(int p)
{
	//更新mp!,因为p是下标，找他还要方括号的元素形式
	mp[e[p]] = 0;
	ne[pre[p]] = ne[p];
	pre[ne[p]] = pre[p];
}
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		pushfront(i);
		print();
	}
	cout << find(3) << endl;
	cout << find(5) << endl;
	cout << find(1) << endl;
	insert_back(4, 9);
	print();
	insert_front(2, 66);
	print();
	erase(2);
	print();
	erase(4);
	print();
	return 0;
}
