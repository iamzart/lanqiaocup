#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����һ���ڵ������
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
//���ڰѶ�̬�����б�ڵ�Ĳ�����װ�ɺ���
//�������ˣ���һ�£���������new�������ڴ棬���new�����صľ���һ��ָ�����ͣ���new����һ���ṹ����ڴ棬��ô���صľ��ǽṹ��ָ��
/*������*/
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

/*����ӡ*/
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
//	Node* cur = p;//����ʼ��ָ�뱣������
//	//printf("%d\n", cur->data);
//	//printf("%d", cur->next);//���cur������һ���ĵ�ַ
//	while (cur)//����Ϊ��ʱ
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
////����ڶ����ǣ���Ϊ��curָ��next�Ļ�������������䣬Ҫ�ø�ֵ���������뵽��λ���㣩
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

/*��ͷ������Ԫ��*/

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
//void pushfront(Node*& ph, int d)//ph��phead�ı���
//{
//	if (ph == NULL)//���������
//	{
//		Node* newnode = CreateNode(d);//���newnode�����Ѿ�ָ���½ڵ�����ֱ�Ӹ����βξ���
//		ph = newnode;
//	}
//	else//���ǿ��������
//	{
//		Node* newnode = CreateNode(d);
//		newnode->next = ph;
//		ph = newnode;
//	}
//}
//int main()
//{
//	Node* phead = NULL;//������һ��Ԫ�ض�û�У����phead��ά��������������û�����ݣ������������½�һ���ڵ�
//	pushfront(phead, 1);
//	pushfront(phead, 2);
//	pushfront(phead, 3);
//	pushfront(phead, 4);
//	printlist(phead);
//	return 0;
//}
//ͷ�壺����ǿ��������½�һ���ڵ㣬ֱ��ָ���½ڵ�
//������ǿ������½�һ���ڵ㣬���½ڵ�ָ��ɽڵ��ͷ������pָ���½ڵ�
//��дif elesҲ�У���Ϊ��ͷ���ʱ���ж�ph��phead���ǲ��ǿ�ָ�룬������creatnodeʱ����Ѿ���next��Ϊ���ˣ����Կ��Ը���
//�������е������ˣ�����Ϊɶ��ֱ����phָ����һ���ڵ��ͷ������Ϊ����������߶����������أ�ֱ��һָ�����ٲ�������ݣ��Ͱ�˳�������


/*�Լ�д��*/
//struct Node
//{
//	int data;
//	Node* next;//���ָ�����ָ��Node���棬Ҳ���Ǵ����data����node���͵ı�����ַ
//};
//Node* CreateNode(int d)
//{
//	//�����������һ���ṹ��������ڴ棬��new�����ص��ǵ�ַ
//	Node* newnode = new Node;
//	newnode->data = d;
//	newnode->next = NULL;
//	return newnode;
//}
//void pushfront(Node*& ph, int d)
//{
//	Node* pa = CreateNode(d);//�ȴ����½ڵ㣬һ���ϱ��������±���ָ���
//	//˼·�������½ڵ㣬���½ڵ��nextͷ��������phָ���½ڵ�ָ��ԭ�ȵ�
//	pa->next = ph;
//	ph = pa;
//}
//void printlist(Node* ph)
//{
//	//�ȴ�ӡ��һ������������ָ����һ����ӡ
//	Node* cur = NULL;
//	cur = ph;
//	while (cur)//ûָ�����½�
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
//int main()
//{
//	Node* phead = NULL;//��������ǲ����������֮��ĵ�һ��ָ��
//	pushfront(phead, 1);//�����������˼�ǣ����������һ��ʲô
//	pushfront(phead, 2);//�����������˼�ǣ����������һ��ʲô
//	pushfront(phead, 3);//�����������˼�ǣ����������һ��ʲô
//	pushfront(phead, 4);//�����������˼�ǣ����������һ��ʲô
//	printlist(phead);
//	return 0;
//}

/*β������Ԫ��*/
//�տ�ʼ��һ�����������Ե�һ�ν����ܵ��ɵ�ʱ��ֻ��һ��������Ϊ����if
//��ͷ���½�һ���ڵ㣬���������ڵ��ҵ�β�������ֱ����β���½�һ���ڵ㣬����ô�ҵ�ԭ�������β���أ�û��һ��ָ��ȥά���������
//struct Node//�ڵ����ͽṹ��
//{
//	int data;
//	Node* next;
//};
//Node* CreateNode(int d)//����һ���½ڵ㲢����߸�ֵ
//{
//	Node* pn = new Node;
//	pn->data = d;
//	pn->next = NULL;
//	return pn;
//}
//void pushback(Node*& ph, int d)
//{
//	Node* pn = CreateNode(d);
//	if (ph == NULL)//������һ��Ԫ��Ҳû��
//	{
//		ph = pn;//ph����phead������phead���������������Ѿ�������
//	}
//	else//����һ����������������������������phֻ��������
//	{
//		Node* tail = ph;
//		while (tail->next)//��Ϊ�գ����ֻ�����һ��Ϊ�վ�˵����ǰ�����һ����
//		{//һֱ�ǰ��½��Ľڵ������ɵ�������ǰ�һ�����ŵ��µ����棬�½ڵ��൱��һ��������
//			tail = tail->next;
//		}
//		tail->next = pn;
//	}
//}
//void printlist(Node* ph)
//{
//	Node* cur = ph;
//	while (cur)//�������ǿ�ָ���ʱ��
//	{
//		cout << cur->data << "-->";
//		cur = cur->next;
//	}
//	cout << "NULL";
//}
//int main()
//{
//	Node* phead = NULL;//Ϊ������һ��Ԫ��Ҳû��
//	//��phead����ط�����һ���ڵ�
//	pushback(phead, 1);//��һ�������ǿյģ�ֱ���½�һ���ڵ㣬����ָ���½����
//	pushback(phead, 2);
//	pushback(phead, 3);
//	pushback(phead, 4);
//	printlist(phead);//����һ����ʼ�ĵ㣬��ʹ�����ط���ʼ�����ӡ
//	return 0;
//}

/*������ͷ��ɾ��Ԫ��*/
//Ҫɾ���Ļ���new�����Ҫdelete
//�����ж��ǲ��ǿգ���������ɾ��
//����pheadָ���µ�ͷ
//Ҫ�ȱ���Ҫɾ���Ľڵ㣬����ͷ�
//��������棬phead��ַ�ڵ�һ���ڵ���������أ�ɾ�˺�phҲû�ˣ�
//��ֱ����phֻ��ڶ����ڵ��أ��ǵ�һ���ڵ����Ҳ�����

/*
	if(ph==NULL;)
	{
		cout<<"����Ϊ�գ�Υ��ɾ��Ԫ��"
	}
	else
	{
		Node* del = ph;//����
		ph=del->next;
		delete del;
		del=NULL;

	}
*/

/*������β��ɾ��Ԫ��*/
//ɾ��β���ڵ�Ĳ������ͷ�β���ڵ㣬�ѵ����ڶ�����ɿ�ָ��
//����ҵ�β���ˣ������ڶ���û����
//�ɴ��ҵ������ڶ����������Լ����null���ٰ������next��Ϊ��
//�ڷǿ������ʱ���������Ƿ����һ��Ԫ��
//��ô�ж��ǵ����ڶ������������nextΪ�վ�����
//if(ph->next==NULL)
////delete,null
//else
//{
//	node* tail = ph;//�Ѵ��Ĳ��и���tail������ȥ��
//	while (tail->next->next)//��һ��nextʦ���Լ����µģ��ڶ���������ߵ�
//		tail = tail->next;
//}



/*�������ʽʵ������*/

struct Node
{
	int data;
	Node* next;
};
struct List
{
	Node* phead;
	//��Ա����
	//���캯��--��Ϊ������
	List()
	{
		phead = NULL;
	}
	//��������--�ڽ����ͷ�����ʣ��ڵ�
	~List()
	{
		while (phead)
		{
			popfront();
		}
	}
	//�����½��
	Node* CreateNode(int d)
	{
		Node* newnode = new Node;
		newnode->data = d;
		newnode->next = NULL;
		return newnode;
	}
	//ͷ������Ԫ��
	void pushfront(int d)
	{
		Node* pn = CreateNode(d);
		pn->next = phead;//ͷ�����Ҫ�Ѹտ�ʼ�е�phead��������
		phead = pn;//Ҳ�ð�pheadʵ������ѽ
	}
	//β������Ԫ��
	void pushback(int d)
	{//�������
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