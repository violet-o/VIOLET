
//#define  _CRT_SECURE_NO_WARNINGS     ����Ԥ������  �ɽ������궨���оͲ���ÿ�ζ�д�⴮���� ����ÿ����Ŀ��Ҫ����
//���Ƽ���ϵͳ���������scanf_s ��Ϊ�����ı��������ܲ�ʶ���������

#include <stdio.h>                  //vs���ܱ���ĺ�����scanf��strcpy��strcat��sscanf��fopen   
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int sum = 1;
//	scanf("%d%d", &num1, &num2);//��������д������޷����� Ҫ����һ��䶯 ��Ϊscanf�ᱻ����
//	sum = num1 + num2;
//	printf("sum= %d\n", sum);
//
//	return 0;
//}
//Ϊʲô�ᱨ���� ���¾���
int main() {

	char arr[5] = { 0 };//����arrֻ�ܷ�����ַ�
	scanf("%s", arr);//��������ʱ���������������ַ� �ͻᱨ��Ų����˳��������---����scanf����ܷŲ��ŵ��·���������پ͸������� û�м�����Բ���ȫ
	printf("%d\n", arr);
	return 0;
}












