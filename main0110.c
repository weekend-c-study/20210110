#include<stdio.h>
int main() {

	int a = 10;

	//a = a + 10;
	a += 10; //10����������
	//a+=1;//a++

	printf("a : %d\n", a);
	return 0;
}

/*
#include<stdio.h>
int main() {

	int a = 60;//0011 1100
	int b = 13;//0000 1101

	printf("a & b : %d\n", a & b);
	printf("a | b : %d\n", a | b);
	//�� ��Ʈ�� �ٸ���(1:0, 0:1) 1, ������(0:0, 1:1) 0
	printf("a ^ b : %d\n", a ^ b);
	printf("~a : %d\n", ~a);//0->1 , 1->0 : 1�� �������

	printf("a>>2 : %d\n", a>>2);//0000 1111
	printf("a<<2 : %d\n", a << 2);//0000 1111
	return 0;
}
*/

/*
#include<stdio.h>
int main() {

	int a = 20, b = 30;

	printf("a==b : %d\n", a == b);
	printf("a!=b : %d\n", a != b);
	printf("a>b : %d\n", a > b);
	printf("a<b : %d\n", a < b);
	printf("a>=b : %d\n", a >= b);
	printf("a<=b : %d\n", a <= b);
	puts("--------------");
	printf("(a==b) && (a > b) : %d\n", (a == b) && (a > b) );//0 && 0 : 0
	printf("(a!=b) && (a > b) : %d\n", (a != b) && (a > b));//1 && 0 : 0
	printf("(a==b) && (a < b) : %d\n", (a == b) && (a < b));//0 && 1 : 0
	printf("(a!=b) && (a < b) : %d\n", (a != b) && (a < b));//1 && 1 : 1

	puts("--------------");
	printf("(a==b) || (a > b) : %d\n", (a == b) || (a > b));//0 || 0 : 0
	printf("(a!=b) || (a > b) : %d\n", (a != b) || (a > b));//1 || 0 : 1
	printf("(a==b) || (a < b) : %d\n", (a == b) || (a < b));//0 || 1 : 1
	printf("(a!=b) || (a < b) : %d\n", (a != b) || (a < b));//1 || 1 : 1

	puts("--------------");
	printf("!(a==b) : %d\n", !(a == b));//!0 : 1
	printf("!(a!=b) : %d\n", !(a != b));//!1 : 0






	return 0;
}

*/

/*
#include<stdio.h>
int main() {
	int num;
	//int a = num = 10;
	int a = 10;
	num = a;

	printf("a: %d , num: %d \n", a, num);
	a++; // 1����������
	num--; // 1���ҿ�����
	printf("a: %d , num: %d \n", a, num);
	++a; // 1����������
	--num; // 1���ҿ�����
	printf("a: %d , num: %d \n", a, num);
	puts("-----------");
	num = a = 10;
	printf("a: %d , num: %d \n", a, num);

	//��������(++,--)��¹��� �������� ���� �����Ѵ�.
	printf("a: %d , num: %d \n", ++a, --num);
	//��������(++,--)��¹��� �����Ŀ� ���� ����ȴ�.
	printf("a: %d , num: %d \n", a++, num--);
	//printf("a: %d , num: %d \n", a, num);


	return 0;
}
*/

/*
#include<stdio.h>

int main() {
	//���� �ΰ��� Ű����κ��� �Է¹޾� ..ó��
	int n, m;

	puts("���� 2�� �Է����ּ���!");
	//����, ������ġ
	scanf_s("%d %d", &n, &m);

	printf("%d + %d = %d\n", n, m, n + m);
	printf("%d - %d = %d\n", n, m, n - m);
	printf("%d * %d = %d\n", n, m, n * m);
	//����/���� : ��
	printf("%d / %d = %d\n", n, m, n / m);
	//����%���� : ������
	printf("%d %% %d = %d\n", n, m, n % m);
	// %f %�� f ���̿� �ڸ��� ���� .ǥ�����ڸ���
	printf("%d / %d = %.2f\n", n, m, (double)n / (double)m);
	return 0;
}
*/
/*
#include<stdio.h>
int main() {
	long long money;
	//printf("%dbyte", sizeof(long long));
	scanf_s("%lld", &money);//�Է´��
	//stdinput--->stdin
	//fscanf_s(stdin, "%lld", &money);
	printf("%lld\n", money);

	return 0;
}
*/
/*
#include<stdio.h>
int main() {
	int h, m;
	puts("�ð��� �Է��ϼ���(ex: 12:40 )");
	scanf_s("%d:%d", &h, &m);

	printf("%d�� %d�� �Դϴ�.\n", h, m);

	return 0;
}
*/
/*
#include<stdio.h>
int main() {

	int a, b, c;
	puts("����3�� ���ʷ� �Է� �ϼ���");
	//���ڿ��� ���, �ڵ��ٹٲ�

	//scanf_s("%d %o %x", &a, &b, &c);
	scanf_s("%d %d %d", &a, &b, &c);

	printf("a, b, c : %d , %d , %d\n", a, b, c);
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	printf("c : %d\n", c);

	return 0;
}
*/
/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	//������ 1�� �Է¹޾Ƽ� ���
	int num;
	//�Է�����, �Է����
	printf("���� �Է� : ");
	//scanf("%d", &num);
	scanf_s("%d", &num);


	printf("num : %d\n", num);

	return 0;
}
*/
/*
#include<stdio.h>
int main() {
	//������ ���ǥ����: ���� �����Ҽ� ����
	const int ea=100;
	printf("ea : %d\n", ea);
	//ea = 150;
	printf("ea : %d\n", ea);
	printf("%d\n", 10);
	printf("%d\n", 010);//8����
	printf("%d\n", 0x1a);//16����

	return 0;
}
*/
/*
#include<stdio.h>
int main() {

	//�Ǽ����� ������ Ÿ��
	printf("float : %d byte\n", sizeof(float));
	printf("double : %d byte\n", sizeof(double));
	//printf("long double : %d byte\n", sizeof(long double));
	double PI = 3.14;
	float aa = 3.14;
	int a = 10;
	float sum = 0.0;
	for (int i=0; i<100 ; i++)
	{
		sum = sum + 0.1f;
	}
	//%f : �Ǽ�(float, double) ���
	printf("sum : %f\n", sum);

	double tot = 0.0;
	for (int i = 0; i < 100; i++) 
	{
		tot = tot + 0.1;
	}
	printf("tot : %f\n", tot);
	return 0;
}
*/