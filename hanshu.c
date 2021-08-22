#include <stdio.h>
//函数举例
//求和
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum= %d\n", sum);
//
// 
//	return 0;
// }
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	//如果此时还想在加一组a和b变量用sum求和来表示
	int a = 100;
	int b = 200;
	//sum = num1 + num2; 替换成下面样子
	sum =Add(num1, num2); //add就是一种函数，代表相加sum = z
	//sum = a + b;
	sum = Add(a, b);
	//还要在重新打一遍很麻烦，于是想用一种便利的方法	 
	printf("%d\n", sum);
	return 0;
}
int Add(int x, int y)//定义函数 加上int表示add的函数类型
{
	int z = x + y;
	return z;//return要返回一个整型，z是一个整型（刚被定义，也可以写成x+y）return z；是返回z的意思 z是整型所以这个函数类型也是整型
}//add--函数名 （）内的是参数 add前面的是返回类型 {}内是函数体（完成给定的任务）
//函数举例
// 
//函数 (函数需要定义）就是可以简化某些复杂的代码避免重复
//数学中 f（x) = 2*x+1,f(x,t) = x + y 
//函数分为库函数（printf,scanf等，要用#include引用）和自定义函数



