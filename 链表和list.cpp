#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 10000000;
int e[N];
int ne[N];
int mp[N];//ÿͷ��һ��Ԫ�أ���Ҫ��mp��߹�Ŀ��mp��ߴ���൱��ne��ֵ
//mp���±������е����֣�������˭������±��Ӧ�ľ���ne��ߣ�Ҳ�������ĵ�ַ
int h, id;//Ĭ��Ϊ0

/*��������ʼ��*/

//ͷ��
//�����½ڵ�ָ����һ��λ�ã�����ͷ���ָ�������Ľڵ�
void pushfront(int x)
{
	id++;//�����ڳ��ط�
	mp[x] = id;//��¼��������
	 e[id] = x;//��x��ֵ���������ڳ����µط�
	 ne[id] = ne[h];//h��������ڱ��ĺ�һλ��������������idָ���ڱ�����һ��λ��
	 ne[h] = id;//�ڱ�ָ��id
}
//��������
void print()
{
	for (int i = ne[h]; i; i = ne[i])//i������0���ͼ�������
	{
		cout << e[i] << " ";//e�ǵ�ǰԪ��
	}
	cout << endl << endl;
}

//��ֵ����
int find(int x)
{
	//�ⷨһ����������
	/*for (int i = ne[h]; i; i = ne[i])
	{
		if (e[i] == x)
			return i;
	}
	return 0;*/

	//�ⷨ��������mp����,�ÿռ����ʱ��
	return mp[x];
}

//������λ��p�����x
void insert(int p, int x)
{
	//����Ϊ��Ԫ�ؿ��ٿռ䣬id�ƹ�������������ЧԪ�أ�Ȼ���x�ŵ����ٵĿռ��p��ne������ŵ�Ӧ������Ԫ�����ڵ��±�id����Ԫ�ص�ne��ŵ���ne��p��������Ϊpԭ�Ⱥ�ߵ���������Ҫ����x����ˣ�
	id++;
	e[id] = x; 
	mp[x] = id;//����
	ne[id] = ne[p];
	ne[p] = id;
}

//ɾ������λ��p���Ԫ��
void erase(int p)
{
	//�ȸ���mp��˼·��ֱ����p������һ������һ�������м����������������ʱ�Ͳ��ᵽ��
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

