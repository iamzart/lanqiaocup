#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 1e5 + 10;
//����˫����
//�о�˫���������Ǵ�ǰ�����ң�ǰ���ǴӺ���ǰ��
int e[N], ne[N], pre[N], mp[N], h, id;

//ͷ��
//1.�Ȳ����½ڵ��ͷβ�������½���ͷָ���ڱ�β�������½ڵ��βָ���ڱ���߽ڵ��ͷ
//2.�ٲ����ڶ����ڵ㣬������ͷָ���½ڵ��β
//3.������ڱ���βָ���½ڵ��ͷ
//���ǵĶ������±�--λ��
void pushfront(int x)
{
	id++;//���ٿռ�
	e[id] = x;
	mp[x] = id;//������±꣨λ�ã������ң��Ҹ���ŵ����ԭ��λ����
	pre[id] = h;//�½���ͷָ���ڱ���β,�ڱ���βӦ�����ڱ���λ�ã������ڱ��Լ��±�ѽ��������ߵ�Ԫ�أ������Ļ��͵�����һ��Ԫ�ص��±���
	ne[id] = ne[h];//�½ڵ��βָ����һ��Ԫ�ص�ͷne[h]�ǵڶ����ڵ���±�
	pre[ne[h]] = id;//�õڶ����ڵ��ͷָ���½ڵ�
	ne[h] = id; //�ڱ���βָ���½ڵ�
}//Ҫ����޸���ߵĺ��

//����˫����--�͵�����һ����ֻ��ne���ܱ���
void print()
{
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << e[i] << " ";//i�ڿ�����������
	}
	cout << endl;
}

//��ֵ����--mp�����Ż�
int find(int x)
{
	return mp[x];
}

//������λ��p������µĽڵ�x
//����ͷ�壬���޸��½ڵ��ͷβ�����޸ĺ�ߣ���ǰ��
void insert_back(int p, int x)
{
	id++;
	e[id] = x;//id���ܷ�ǰ�汻��ֵ��������ô���ױ��ı�ѽ
	mp[x] = id;
	pre[id] = p;//���½ڵ��ͷָ��p��β
	ne[id] = ne[p];
	pre[ne[p]] = id;//��p����һ����ͷָ���½ڵ�
	ne[p] = id; //����id���½ڵ��λ�ã������һ��ne�����½ڵ����һ��
}

//������λ��p֮ǰ����Ԫ��x
//����޸�p��ǰ��ָ�룬������Ҳ���p֮ǰ��Ԫ����
void insert_front(int p, int x)
{
	id++;
	e[id] = x;
	mp[x] = id;
	ne[id] = p;
	pre[id] = pre[p];//�½ڵ��ǰ��ָ�����pǰ�ߵ�λ��
	ne[pre[p]] = id;
	pre[p] = id;
}

//ɾ������λ��p��Ԫ��--�����ýڵ㼴��
//��p��ǰ���ڵ�ĺ��ָ��ָ��p�ĺ�̽ڵ�
//��p�ĺ�̽���ǰ��ָ��ָ��p��ǰ���ڵ�
void erase(int p)
{
	//����mp!,��Ϊp���±꣬������Ҫ�����ŵ�Ԫ����ʽ
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
