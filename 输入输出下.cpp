#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //˼·��һ���Զ���������������
    //һ��һ�����ֱ��ж�
    int num;
    cin >> num;
    while (num != 0)
    {
        if (num % 2 == 0)
            cout << "0";
        else
            cout << "1";
        num /= 10;
    }

    return 0;
}