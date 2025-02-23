#define _CRT_SECURE_NO_WARNINGS
//long long n, stk[N];
//int main() {
//	int num;
//	string op;
//	cin >> num;
//	while (num--){
//		int count;
//		cin >> count;
//		int top = 0;
//		while (count--) {
//			cin >> op;
//			if (op == "push") {
//				int x;
//				cin >> x;
//				stk[++top] = x;
//			}
//			else if (op == "pop") {
//				if (top == 0)
//					cout << "Empty"<<endl;
//				else
//				top--;
//			}
//			else if (op == "query") {
//				if (top == 0)
//					cout << "Anguei!" << endl;
//				else
//				cout << stk[top]<<endl;
//			}
//			else if (op == "size") {
//				cout << top<<endl;
//			}
//		}
//	}
//	return 0;
//}
/*后缀表达式*/
/*
要点：把几个数字叠加成一个数，定义一个目标数字位置，初始为零，依次乘十加那些单独的数字
2.字符串怎么变数字，直接减去‘0’就是
遍历后缀表达式，是数字入栈，是标点弹出两个来计算，再把结果弹回去
*/


/*括号序列*/
/*
弄一个标记布尔数组，在一个字符串中，是左括号就入栈，是右括号，如果栈为空，就跳过继续便利，如果不是就和栈顶比较，如果是一对就把那俩字符标记成true，然后把栈顶弹出
然后还原的时候，定义一个空字符串，如果是true，就把他们尾加到目标空字符串，如果不是，分类讨论，如果是左括号，就把他加上再加一个右括号，反之亦然
*/