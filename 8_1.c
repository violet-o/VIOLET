#include <stdio.h>
//#include <stdio.h>//#是预处理指令
//include 是“包含”的意思
//#include " XX" 或者 #include ,意思是将"XX"或者中的文件引用到本程式中来,
//"XX"或者中的文件通常是由系统提供的，其扩展名为.h。
//因此也称为头文件或首部文件。
//C语言的头文件中包括了各种标准库函数的函数原型。
//#include < stdio.h >是包含 stdio.h 头文件的意思， .h是头文件的扩展名（header file），stdio.h就是standard input output.header，也就是“标准输入、输出"头文件,
//这个文件的内容就是基本输入输出函数的声明，比如scanf()和printf()，
//你的程序包含了stdio.h，就相当于声明了这些函数，这样你才能够在自己的程序中使用它们【 scanf() 或 print() 】。
//所以，若要在程序中调用一个库函数，包含该函数原型的头文件就必须要有，一般是写在程序开头。
//#include <math.h> 是包含math头文件的意思， .h是头文件的扩展名（header file），这一句声明了本程序要用到标准库中的 math.h文件。math.h头文件中声明了常用的一些数学运算，比如乘方，开方运算等等。
//每条#include语句只能包含一个头文件。如果有多个头文件，就得分别写多个#include语句，每行一条#include只语句，每条#include语句也只包含一个头文件。

//#include <stdio.h> //#是一种指令形式 include-包含 意思是包含一个叫stdio.h的文件 语法形式要包含间括号   std--标准standard  i--input  o--output  标准输入输出 以后用输入输出函数时要用这个函数
//int main()//在{}中每一行结尾都要加上;表示结束
////main函数是主函数-当按下fn+f10会按照代码顺序执行 而main函数是程序的入口都会从main开始--不能没有main函数 而且只能有一个main函数 因为多个main函数不知从何开始
//{         //int --整型
//	      //main前面一个int 表示mian函数调用返回一个整形值    void main（）--这种写法已经过时了
//	      //在{}内且return以上输入目标函数  函数后加括号
//		  // 库函数--例printf函数 --c语言本身提供给我们的使用的函数--因此用别人的东西要向别人打招呼--用#include--#是一种指令形式 include-包含
//	      //printf--print function-打印函数
//	printf("hello world\n");//函数后都加圆括号 printf括号内加双引号表示输出的内容 \n表示换行
//	return 0;//return 是返回的意思 return 0 ；--0是整型 整数 return 0;表示返回0
//}

//#include <stdio.h>
//int main()
//{
//	printf("linhuanping\n");
//
//	return 0;
//}

//数据类型
//char
//short--短整型 short int 
//int---整型
//long---长整型 c99标准提出的
//long long ---更长的整型
//float--单精度浮点数
//double;--双精度浮点数
//%d-打印整形 %c--打印字符 %f--打印浮点型=打印小数 %p--以地址的形式进行打印 %x-打印16进制数字  用xxx xx = 数据 时已经成功将数据存储入你申请的空间了 只是还要把他打印出来让我们看到
//c语言有没有字符串类型？
//有何差别 又如何选择
//int main()//noexcept
//{    //重要的一点 下面这串代码会出现警告是因为sizeof结果是无符号整形 %d是整形 不匹配 改正的话用%u或%lu
//	printf("%u\n", sizeof(char));//1字节=8bite                         表示将char所占的大小用整型的形式打印出来 sizeof（）-表示所占的空间
//	printf("%d\n", sizeof(short));//2字节=16bit   0~2^16-1  合理运用空间                   16bit 0000000000000000   0  （用数字表示）    一共有2^16种二进制数列
//	printf("%d\n", sizeof(int));//4字节 = 32bit   0~2^32-1                   逢2进一 0000000000000001   1                         123  十进制数字   1*10^2+2*10^1+3*10^0
//	printf("%d\n", sizeof(long));//4或8 字节                                         0000000000000010    2                        二进制 010   0*2^2+1*2^1+0*2^0=2
//	printf("%d\n", sizeof(long long));//8字节 = 64bit                        ......
//	printf("%d\n", sizeof(float));//4字节   32bit                            1111111111111111    2^16-1
//	printf("%d\n", sizeof(double));//8字节  64bit           c语言标准规定  sizeof（long)>= sizeof(int) 所以long有两种 取决于平台
//	return 0;
//}
//计算机单位（计算机是硬件--要通电 正电（1) 负电（0）将电脑的电信号转换成计算机数字信号 就是1和0 也是一个bit
//1.bit-比特位   二进制单位 1或者0 一个bit存放1个二进制单位         10进制 0123456789  二进制 01   8进制01234567    
//2.byte-字节    一字节=八个bit位大小  10110011=1字节
//3.kb           1kb= 1024byte
//4.mb           1mb= 1024kb
//5.gb           1gb= 1024mb
//6.tb           1tb = 1024gb
//7.pb           1pb = 1024 tb
//char
//int main()
//{
//	//’A’；字符要用引号表示 要向电脑内存申请一块用来存储A这个字符的空间--用char来申请
//	char sb = 'A';//ch只是一个命名一个称呼 随便都可以 char字符类型 ch是一个变量向内存申请了一块空间
//	printf("%c\n", sb); //%c--打印字符格式的数据   表示我以字符的形式打印ch
//	//20整形不用引号表示 20；
//	return 0;
//
//}

//int
//int main()
//{
//	int hehe = 99;
//// printf("%d\n", hehe);//%d--打印整形十进制数据格式的数据表示
//	return 0;
//}

////long
//int main()
//{
//	long he = 4541;
//	printf("%d\n", he);
//	return 0;
//}

//浮点型
//int main()
//{
//	float ll = 5.111;
//	printf("%f\n", ll);
//	return 0;
//}

//double 双精度浮点型
//int main()
//{
//	double c = 3.14;
//	printf("%lf\n", c);//用%f打印也行 但标准用%lf来打印
//	return 0;
//}
//int main()
//{
//	short age = 99;
//	float weight = 95.6f; //默认95.6是双精度浮点型  一定要用的话在数字后加一个f  向内存申请4个字节存放小数
//	return 0;
//}

//变量、常量
//常量类似于圆周率，性别，身份证号码，血型
//变量 年龄 体重 薪资
//定义变量的方式 int age = 150;   float weight = 45.5f;  char ch = 'w';
//变量分类 ；局部变量和全局变量

//int num2 = 20;// 为全局变量 定义在{}代码块的外面的变量
//int main()
//{
//
//	int num1 = 10;//局部变量 定义在{}代码块内的变量
//	return 0;
//}

//int a = 10;    //局部和全局用同一个变量可以同时存在 但以局部变量优先被局部变量重新定义   所以局部变量和全局变量名字不要重复 会产生bug
//int main() {   //或者可以理解为代码是按顺序从上往下运行的，在a被全局变量定义后又被局部变量重新定义了
//
//
////	int a = 100;
//	printf("%d\n", a);
//	return 0;
//}

//int main()  //注意局部变量只能在局部使用 这个代码是错误的 
//{
//	{int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//计算两个数的和      
//int main()
//{
//	int num1 = 0;//最好定义在{}最前面 
//	int num2 = 0;
//	int sum = 0;//变量定义在代码最前面
//	scanf ("%d%d", &num1, &num2);              //输入数据-使用输入函数  &--取地址符号 找地址输入进去
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);  //sum = 是文字输出内容加个名称而已
//	return 0;
//}
 
//变量的作用--一段代码中所用到的名字并不是总有效的 限定这个名字的代码范围就是这个名字的作用域
//举例 局部变量的作用域
//int main()
//{
//	{int num = 0;  //这个num的作用域就是这个里面的大括号 局部变量的作用域就是{}里面
//	printf("num= %d\n", num); }
//	printf("num= %d\n", num);//在包含变量的{}外这个printf无法规定到num
//	return 0;
//}

//int main()    //在最外面的大括号包含了里面的大括号 在外面的大括号定义的变量同样在里面有效 他的作用域在外面的大括号里（包括里面的东西)
//{
//	int num = 0;
//	{printf("num = %d\n", num); }
//	return 0;
//}

//全局变量的作用域 在全部区域都能用 整个工程 在两个不同的源文件里也可使用（只是要申明）用extern int x；
//int num2 = 100;
//void test()
//{
//	printf("test()-- %d\n", num2);
//
//}//s虽说void不在main函数里但是程序还是从main函数开始运行的 只是在main里调用了void这个函数 
//int main()
//{
//	extern int x;//extern就是用来声明外部符号的
//	test();//调用这个函数 （void test（））
//	printf("num2 = %d\n", num2);
//	printf("%d\n", x);      //在另一个源文件里要申明
//	return 0;
//}
 
//变量的生命周期
//int main() {
//
//	{int a = 10;                  \\这个局部变量的生命周期只在他的作用域里 从开始到结束在{}里
//	printf("a = %d\n", a);//ok
//	}printf("a = %d\n", a);//error
//
//	return 0;
//}
//
//全局变量的生命周期就是整个工程 
int main()
{


	printf("你是sb");
	return 0;
}

















































































































































































