#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 100000000;
int arr[N];
int n;//ȫ�ֱ�������ʼ��Ĭ��Ϊ0

//ͷ�壺�����������ƣ�����ͷ�ճ������ٸ�һ��n
//�����ô�ӡ����
void push_front(int x)
{
    for (int i = n; i >= 1; i--)
    {
        arr[i + 1] = arr[i];//Ŀǰ�Ǹ���һ���ճ�����
    }
    arr[1] = x;
    n++;//Ԫ�ظ�����һ
}

//β��
void push_back(int x)
{
    arr[++n] = x;//n++����������������
    //����n++�ˣ���Ϊ�ϱ�n���Ǹ����ߵ�
}
void printlist()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

//������λ�ò���
void insert_any(int p, int x)
{
    for (int i = n; i >= p; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[p] = x;
    n++;
}

//βɾ--ֱ��n--������ɨ�費��
void popback()
{
    n--;
}

//ͷɾ
void popfront()
{
    for (int i = 2; i <= n; i++)
    {
        arr[i-1] = arr[i];//�ú�һ������ǰһ��������
    }//���ֻ����ü����ɣ������������Խ��
    n--;
}//д���ͷ�庯�����õĸ��ǵķ�ʽ������ʱ�Ǹ��⣬ɾȥ�����һ��Ԫ�أ������õĸ���

//����λ��ɾ��
void pop_any(int p)
{
    for (int i = p+1; i <= n; i++)
    {
        arr[i-1] = arr[i];
    }
    n--;
}

//����Ԫ��
//��ֵ���ң���λ����
int find(int x)
{
    for (int i = 1;i<=n;i++)
    {
        if (arr[i] == x)
            return i;
    }
    return 0;//�õ������������ٷ���û���ҵ���
}

//��λ���ң�ʱ�临�Ӷ���O(1),ֱ�����±�ȥ�ң����ñ�������
//bug:ע�������Ƿ�Խ��

/*�޸�Ԫ�أ���ĳλ�õ�Ԫ�ظĳ�ɶ*/

/*��ղ���*/
void clear()
{
    n = 0;
}
//bug�����Ԫ������ָ���ͣ�new�����Ŀռ䣬Ӧ����delete����������

int main()
{
    push_back(9);
    push_back(8);
    push_back(7);
    push_front(1);
    push_front(2);
    push_front(3);
    push_front(4);
    //4 3 2 1 9 8 7
    insert_any(3, 0);
    //4 3 0 2 1 9 8 7
    popback();
    //4 3 0 2 1 9 8
    popfront();
    //3 0 2 1 9 8
    pop_any(2);
    //3 2 1 9 8
    int d = find(5);
    int t = find(9);
    cout << d << " " << t << endl;
    printlist();
    return 0;
}

/*bug?*/
//˳�������˾Ͳ��ܷ��ˣ�����Ҫ��һ��if
//Ҫ�ж�˳�����û����û��Ԫ�أ�����p��λ������Ч������


