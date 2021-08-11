#include <stdio.h>
//int main()
//{
//
//	int num2 = 0;
//	scanf("%d", &num2);//SCANF_S不具有跨平台性和可移植性
//	return 0;
//}

//常量、（类似性别，血型不改变的量）分类；字面常量，const修饰的常变量，#define定义的标识常量，枚举从常量

//int main()
//{
//	3;//字面常量（直接写出来的常量）100； 3.14；
//
//	//3 = 5;//3是常量不会改变，此程序不成立
//	int nujm = 1;//nujm是变量可以被改变
//	printf("%d", nujm);
//	return 0;
//}
//int main()
//{
//	int num2 = 4;//先以4为初始值来申请一变量申请空间
//
//	printf("%d\n", num2);
//	num2 = 8;//在将变量赋值为8 能够成立
//	printf("%d\n", num2);//
//
//
//	return 0;
//}

//如何让变量不能改变（const修饰的常变量）
//int main()
//{   //const-常属性
//	const int num2 = 4; //将变量num2变成常数值4不能改变 此时num2就是const修饰的常变量（本质属性是变量，具有常数的属性）
//
//	printf("%d\n", num2);
//	num2 = 8;//因此这里不能被定义为8程序错误
//	printf("%d\n", num2);
//
//
//	return 0;
//}
//说明常变量
//int main() {
//	//int n = 10;
//	int arr[n] = { 0 };//arr限定的范围要是一个常量 n作为一个变量不能限定
//	const int n = 10;  //当n被赋予了常量的属性时但是仍然不能作为一个一个限定范围，因为其本质还是变量 所以n是变量，但有有常属性，所以我们说n是一种常变量，一种值不变的变量
//	return 0;
//}

//#define 定义的标识符常量
//#define max 10 //这样定义的就是常量，就可以被使用
//int main() {
//
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}

//枚举常量---一一列举的意思 比如性别；男，女,保密  三原色；红，黄，蓝（一些值是可以列举出来的 星期几）
//枚举关键-enum
// 
//将性别枚举
//enum sex{male,
//	female,
//	secret,
//
//
//
//};//male ，female，secret-枚举常量默认顺序为0，1，2，
//int main()
//{
//	//enum sex s = female;
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
//}
// .
//
//枚举三原色
enum color {
	red,//0
	yello,//1
	blue,//2
};
int main() {

	enum color COLOR = blue;//COLOR 是一个变量
 COLOR = red;//这个变量是可以改变的
 //blue = 6;  //但blue这三个常量是不可改变的 默认blue是2
	printf("%d\n", blue
	);
	return 0;
}





































