#include <stdio.h>
//��������
//���
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
	//�����ʱ�����ڼ�һ��a��b������sum�������ʾ
	int a = 100;
	int b = 200;
	//sum = num1 + num2; �滻����������
	sum =Add(num1, num2); //add����һ�ֺ������������sum = z
	//sum = a + b;
	sum = Add(a, b);
	//��Ҫ�����´�һ����鷳����������һ�ֱ����ķ���	 
	printf("%d\n", sum);
	return 0;
}
int Add(int x, int y)//���庯�� ����int��ʾadd�ĺ�������
{
	int z = x + y;
	return z;//returnҪ����һ�����ͣ�z��һ�����ͣ��ձ����壬Ҳ����д��x+y��return z���Ƿ���z����˼ z���������������������Ҳ������
}//add--������ �����ڵ��ǲ��� addǰ����Ƿ������� {}���Ǻ����壨��ɸ���������
//��������
// 
//���� (������Ҫ���壩���ǿ��Լ�ĳЩ���ӵĴ�������ظ�
//��ѧ�� f��x) = 2*x+1,f(x,t) = x + y 
//������Ϊ�⺯����printf,scanf�ȣ�Ҫ��#include���ã����Զ��庯��



