#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int N = 100000000;
int arr[N];
int n;//全局变量不初始化默认为0

//头插：把数字往右移，给表头空出来，再改一下n
//可以用打印测试
void push_front(int x)
{
    for (int i = n; i >= 1; i--)
    {
        arr[i + 1] = arr[i];//目前是给第一个空出来了
    }
    arr[1] = x;
    n++;//元素个数加一
}

//尾插
void push_back(int x)
{
    arr[++n] = x;//n++就是让数组往后走
    //不用n++了，因为上边n就是跟着走的
}
void printlist()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

//在任意位置插入
void insert_any(int p, int x)
{
    for (int i = n; i >= p; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[p] = x;
    n++;
}

//尾删--直接n--，让他扫描不到
void popback()
{
    n--;
}

//头删
void popfront()
{
    for (int i = 2; i <= n; i++)
    {
        arr[i-1] = arr[i];//让后一个数把前一个数覆盖
    }//这种还是用减法吧，容易造成数组越界
    n--;
}//写这个头插函数，用的覆盖的方式，想起当时那个题，删去数组的一个元素，就是用的覆盖

//任意位置删除
void pop_any(int p)
{
    for (int i = p+1; i <= n; i++)
    {
        arr[i-1] = arr[i];
    }
    n--;
}

//查找元素
//按值查找，按位查找
int find(int x)
{
    for (int i = 1;i<=n;i++)
    {
        if (arr[i] == x)
            return i;
    }
    return 0;//得等他·找完了再返回没有找到的
}

//按位查找，时间复杂度是O(1),直接用下标去找，不用遍历数组
//bug:注意数组是否越界

/*修改元素，把某位置的元素改成啥*/

/*清空操作*/
void clear()
{
    n = 0;
}
//bug：如果元素里是指针型，new出来的空间，应该用delete，遍历数组

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
//顺序表放满了就不能放了，所以要加一个if
//要判断顺序表里没还有没有元素，还有p的位置在有效数据内


