#include <stdio.h>
//int main()
//{
//
//	int num2 = 0;
//	scanf("%d", &num2);//SCANF_S�����п�ƽ̨�ԺͿ���ֲ��
//	return 0;
//}

//�������������Ա�Ѫ�Ͳ��ı���������ࣻ���泣����const���εĳ�������#define����ı�ʶ������ö�ٴӳ���

//int main()
//{
//	3;//���泣����ֱ��д�����ĳ�����100�� 3.14��
//
//	//3 = 5;//3�ǳ�������ı䣬�˳��򲻳���
//	int nujm = 1;//nujm�Ǳ������Ա��ı�
//	printf("%d", nujm);
//	return 0;
//}
//int main()
//{
//	int num2 = 4;//����4Ϊ��ʼֵ������һ��������ռ�
//
//	printf("%d\n", num2);
//	num2 = 8;//�ڽ�������ֵΪ8 �ܹ�����
//	printf("%d\n", num2);//
//
//
//	return 0;
//}

//����ñ������ܸı䣨const���εĳ�������
//int main()
//{   //const-������
//	const int num2 = 4; //������num2��ɳ���ֵ4���ܸı� ��ʱnum2����const���εĳ����������������Ǳ��������г��������ԣ�
//
//	printf("%d\n", num2);
//	num2 = 8;//������ﲻ�ܱ�����Ϊ8�������
//	printf("%d\n", num2);
//
//
//	return 0;
//}
//˵��������
//int main() {
//	//int n = 10;
//	int arr[n] = { 0 };//arr�޶��ķ�ΧҪ��һ������ n��Ϊһ�����������޶�
//	const int n = 10;  //��n�������˳���������ʱ������Ȼ������Ϊһ��һ���޶���Χ����Ϊ�䱾�ʻ��Ǳ��� ����n�Ǳ����������г����ԣ���������˵n��һ�ֳ�������һ��ֵ����ı���
//	return 0;
//}

//#define ����ı�ʶ������
//#define max 10 //��������ľ��ǳ������Ϳ��Ա�ʹ��
//int main() {
//
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}

//ö�ٳ���---һһ�оٵ���˼ �����Ա��У�Ů,����  ��ԭɫ���죬�ƣ�����һЩֵ�ǿ����оٳ����� ���ڼ���
//ö�ٹؼ�-enum
// 
//���Ա�ö��
//enum sex{male,
//	female,
//	secret,
//
//
//
//};//male ��female��secret-ö�ٳ���Ĭ��˳��Ϊ0��1��2��
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
//ö����ԭɫ
enum color {
	red,//0
	yello,//1
	blue,//2
};
int main() {

	enum color COLOR = blue;//COLOR ��һ������
 COLOR = red;//��������ǿ��Ըı��
 //blue = 6;  //��blue�����������ǲ��ɸı�� Ĭ��blue��2
	printf("%d\n", blue
	);
	return 0;
}





































