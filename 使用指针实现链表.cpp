#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//声明一个节点的类型
//struct Node
//{
//	int data;
//	Node* next;
//}n1,n2,n3,n4;
//int main()
//{
//	Node n1 = { 1,NULL};
//	Node n2 = { 2,NULL};
//	Node n3 = { 3,NULL};
//	Node n4 = { 4,NULL};
//	n1.next = &n2;
//	n2.next = &n3;
//	n3.next = &n4;
//	return 0;
//}
//现在把动态申请列表节点的操作封装成函数
//乱了乱了，理一下，现在是用new来申请内存，这个new本身返回的就是一个指针类型，让new申请一个结构体的内存，那么返回的就是结构体指针
/*函数版*/
//struct Node
//{
//	int data;
//	Node* next;
//}n1, n2, n3, n4;
//
//Node* CreateNode(int d)
//{
//	Node* pn = new Node;
//	pn->data = d;
//	pn->next = NULL;
//	return pn;
//}
//int main()
//{
//	Node* p1 = CreateNode(1);
//	Node* p2 = CreateNode(2);
//	Node* p3 = CreateNode(3);
//	Node* p4 = CreateNode(4);
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	return 0;
//}

/*带打印*/
//struct Node
//{
//	int data;
//	Node* next;
//}n1, n2, n3, n4;
//
//Node* CreateNode(int d)
//{
//	Node* pn = new Node;
//	pn->data = d;
//	pn->next = NULL;
//	return pn;
//}
//void printlist(Node* p)
//{
//	Node* cur = p;//将初始的指针保留下来
//	//printf("%d\n", cur->data);
//	//printf("%d", cur->next);//这个cur放着下一个的地址
//	while (cur)//当不为空时
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
////这里第二行是：因为让cur指向next的话，它本身并不会变，要用赋值操作，（想到了位运算）
//int main()
//{
//	Node* p1 = CreateNode(1);
//	Node* p2 = CreateNode(2);
//	Node* p3 = CreateNode(3);
//	Node* p4 = CreateNode(4);
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	printlist(p1);
//	return 0;
//}

/*在头部插入元素*/

//struct Node
//{
//	int data;
//	Node* next;
//}n1, n2, n3, n4;
//
//Node* CreateNode(int d)
//{
//	Node* pn = new Node;
//	pn->data = d;
//	pn->next = NULL;
//	return pn;
//}
//void printlist(Node* p)
//{
//	Node* cur = p;
//	while(cur)
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
//void pushfront(Node*& ph, int d)//ph是phead的别名
//{
//	if (ph == NULL)//空链表情况
//	{
//		Node* newnode = CreateNode(d);//这回newnode不都已经指向新节点了吗，直接赋给形参就行
//		ph = newnode;
//	}
//	else//不是空链表情况
//	{
//		Node* newnode = CreateNode(d);
//		newnode->next = ph;
//		ph = newnode;
//	}
//}
//int main()
//{
//	Node* phead = NULL;//空链表，一个元素都没有，这个phead来维护整个链表，这里没有数据，所以在这里新建一个节点
//	pushfront(phead, 1);
//	pushfront(phead, 2);
//	pushfront(phead, 3);
//	pushfront(phead, 4);
//	printlist(phead);
//	return 0;
//}
//头插：如果是空链表，就新建一个节点，直接指向新节点
//如果不是空链表，新建一个节点，让新节点指向旧节点的头，再让p指向新节点
//不写if eles也行，因为在头插的时候判断ph（phead）是不是空指针，可是在creatnode时最后已经把next置为空了，所以可以覆盖
//到现在有点明白了，就是为啥不直接让ph指向上一个节点的头部，因为本来他们里边都放着数据呢，直接一指，你再插入个数据，就把顺序打乱了


/*自己写的*/
//struct Node
//{
//	int data;
//	Node* next;//这个指针变量指向Node里面，也就是存放着data，和node类型的变量地址
//};
//Node* CreateNode(int d)
//{
//	//这个函数申请一个结构体变量的内存，用new，返回的是地址
//	Node* newnode = new Node;
//	newnode->data = d;
//	newnode->next = NULL;
//	return newnode;
//}
//void pushfront(Node*& ph, int d)
//{
//	Node* pa = CreateNode(d);//先创建新节点，一个上边有数字下边是指针的
//	//思路：创建新节点，让新节点的next头部，再让ph指向新节点指向原先的
//	pa->next = ph;
//	ph = pa;
//}
//void printlist(Node* ph)
//{
//	//先打印第一个，完了让他指向下一个打印
//	Node* cur = NULL;
//	cur = ph;
//	while (cur)//没指到右下角
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
//int main()
//{
//	Node* phead = NULL;//这个将会是操作完的链表之后的第一个指针
//	pushfront(phead, 1);//这个函数的意思是，在哪里插入一个什么
//	pushfront(phead, 2);//这个函数的意思是，在哪里插入一个什么
//	pushfront(phead, 3);//这个函数的意思是，在哪里插入一个什么
//	pushfront(phead, 4);//这个函数的意思是，在哪里插入一个什么
//	printlist(phead);
//	return 0;
//}

/*尾部插入元素*/
//刚开始是一个空链表，所以第一次建立杰迪纳的时候只有一个点所以为空走if
//在头部新建一个节点，最后有这个节点找到尾部，如果直接在尾部新建一个节点，那怎么找到原先链表的尾部呢，没有一个指针去维护这个链表
//struct Node//节点类型结构体
//{
//	int data;
//	Node* next;
//};
//Node* CreateNode(int d)//创造一个新节点并给里边赋值
//{
//	Node* pn = new Node;
//	pn->data = d;
//	pn->next = NULL;
//	return pn;
//}
//void pushback(Node*& ph, int d)
//{
//	Node* pn = CreateNode(d);
//	if (ph == NULL)//空链表，一个元素也没有
//	{
//		ph = pn;//ph就是phead，所以phead进到这个函数里边已经更新了
//	}
//	else//创建一个新链表，让新联表链就连表，再让ph只相信链表
//	{
//		Node* tail = ph;
//		while (tail->next)//不为空，如果只想的下一个为空就说明当前是最后一个了
//		{//一直是把新建的节点连到旧的哪里，不是把一整串放到新的里面，新节点相当于一个连接器
//			tail = tail->next;
//		}
//		tail->next = pn;
//	}
//}
//void printlist(Node* ph)
//{
//	Node* cur = ph;
//	while (cur)//当他不是空指针的时候
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
//int main()
//{
//	Node* phead = NULL;//为空链表，一个元素也没有
//	//在phead这个地方创建一个节点
//	pushback(phead, 1);//第一次链表是空的，直接新建一个节点，让它指在新结点上
//	pushback(phead, 2);
//	pushback(phead, 3);
//	pushback(phead, 4);
//	printlist(phead);//给你一个开始的点，你就从这个地方开始往后打印
//	return 0;
//}

/*单链表头部删除元素*/
//要删除的话，new申请的要delete
//首先判断是不是空，空链表不能删除
//再让phead指向新的头
//要先保存要删除的节点，最后释放
//如果不保存，phead地址在第一个节点里面放着呢，删了后ph也没了，
//那直接让ph只想第二个节点呢，那第一个节点又找不到了

/*
	if(ph==NULL;)
	{
		cout<<"链表为空，违法删除元素"
	}
	else
	{
		Node* del = ph;//保存
		ph=del->next;
		delete del;
		del=NULL;

	}
*/

/*单链表尾部删除元素*/
//删除尾部节点的操作：释放尾部节点，把倒数第二个变成空指针
//如果找到尾部了，倒数第二个没法改
//干脆找到倒数第二个，把他自己变成null，再把这里的next置为空
//在非空链表的时候分情况，是否大于一个元素
//怎么判断是倒数第二个，如果他的next为空就是了
//if(ph->next==NULL)
////delete,null
//else
//{
//	node* tail = ph;//把传的参托付给tail，让他去办
//	while (tail->next->next)//第一个next师他自己旗下的，第二个是他后边的
//		tail = tail->next;
//}



/*面向对象方式实现链表*/

struct Node
{
	int data;
	Node* next;
};
struct List
{
	Node* phead;
	//成员函数
	//构造函数--置为空链表
	List()
	{
		phead = NULL;
	}
	//析构函数--在结束释放所有剩余节点
	~List()
	{
		while (phead)
		{
			popfront();
		}
	}
	//创造新结点
	Node* CreateNode(int d)
	{
		Node* newnode = new Node;
		newnode->data = d;
		newnode->next = NULL;
		return newnode;
	}
	//头部插入元素
	void pushfront(int d)
	{
		Node* pn = CreateNode(d);
		pn->next = phead;//头插就是要把刚开始有的phead顶到最后边
		phead = pn;//也得把phead实至名归呀
	}
	//尾部插入元素
	void pushback(int d)
	{//分情况，
		Node* pn = CreateNode(d);
		if (phead == NULL)
		{
			pn = phead;
		}
		else {
			Node* tail = phead;
			while (tail->next)
			{
				tail = tail->next;
			}
			tail->next = pn;
		}
	}
};