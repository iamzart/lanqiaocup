#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    char* p = arr;//pָ�������һ��Ԫ�صĵ�ַ��Ȼ��p++�����η���
    for (int i = 0; ; i++)
    {
        scanf("%s", p);
        if (*p == '\0');
            break;
    }
    int i = strlen(arr) - 1;
    for (i; i >= 0; i--)
    {
        printf("%c", *(p+i));//�±�Ϊi��Ԫ��
    }
    return 0;
}