
//#define  _CRT_SECURE_NO_WARNINGS     定义预定符号  可将其编入宏定义中就不用每次都写这串代码 但是每个项目都要编入
//不推荐用系统告诉你的用scanf_s 因为其他的编译器可能不识别这个函数

#include <stdio.h>                  //vs可能报错的函数有scanf，strcpy，strcat，sscanf，fopen   
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int sum = 1;
//	scanf("%d%d", &num1, &num2);//单单这样写会程序无法运行 要做出一点变动 因为scanf会被报错
//	sum = num1 + num2;
//	printf("sum= %d\n", sum);
//
//	return 0;
//}
//为什么会报错呢 以下举例
int main() {

	char arr[5] = { 0 };//设置arr只能放五个字符
	scanf("%s", arr);//如果输入的时候如果超过了五个字符 就会报错放不下了程序崩溃了---所以scanf不会管放不放的下反正你输多少就给你存多少 没有检测所以不安全
	printf("%d\n", arr);
	return 0;
}












