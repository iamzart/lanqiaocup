#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    char* p = arr;//p指向数组第一个元素的地址，然后p++，依次访问
    for (int i = 0; ; i++)
    {
        scanf("%s", p);
        if (*p == '\0');
            break;
    }
    int i = strlen(arr) - 1;
    for (i; i >= 0; i--)
    {
        printf("%c", *(p+i));//下标为i的元素
    }
    return 0;
}