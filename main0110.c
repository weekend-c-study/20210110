#include<stdio.h>
int main() {

	int a = 10;

	//a = a + 10;
	a += 10; //10증가연산자
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
	//두 비트가 다르면(1:0, 0:1) 1, 같으면(0:0, 1:1) 0
	printf("a ^ b : %d\n", a ^ b);
	printf("~a : %d\n", ~a);//0->1 , 1->0 : 1의 보수결과

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
	a++; // 1증가연산자
	num--; // 1감소연산자
	printf("a: %d , num: %d \n", a, num);
	++a; // 1증가연산자
	--num; // 1감소연산자
	printf("a: %d , num: %d \n", a, num);
	puts("-----------");
	num = a = 10;
	printf("a: %d , num: %d \n", a, num);

	//전위연산(++,--)출력문장 실행전에 값이 변경한다.
	printf("a: %d , num: %d \n", ++a, --num);
	//후위연산(++,--)출력문장 실행후에 값이 변경된다.
	printf("a: %d , num: %d \n", a++, num--);
	//printf("a: %d , num: %d \n", a, num);


	return 0;
}
*/

/*
#include<stdio.h>

int main() {
	//정수 두개를 키보드로부터 입력받아 ..처리
	int n, m;

	puts("정수 2개 입력해주세요!");
	//형식, 저장위치
	scanf_s("%d %d", &n, &m);

	printf("%d + %d = %d\n", n, m, n + m);
	printf("%d - %d = %d\n", n, m, n - m);
	printf("%d * %d = %d\n", n, m, n * m);
	//정수/정수 : 몫
	printf("%d / %d = %d\n", n, m, n / m);
	//정수%정수 : 나머지
	printf("%d %% %d = %d\n", n, m, n % m);
	// %f %와 f 사이에 자리수 지정 .표현할자리수
	printf("%d / %d = %.2f\n", n, m, (double)n / (double)m);
	return 0;
}
*/
/*
#include<stdio.h>
int main() {
	long long money;
	//printf("%dbyte", sizeof(long long));
	scanf_s("%lld", &money);//입력대기
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
	puts("시간을 입력하세요(ex: 12:40 )");
	scanf_s("%d:%d", &h, &m);

	printf("%d시 %d분 입니다.\n", h, m);

	return 0;
}
*/
/*
#include<stdio.h>
int main() {

	int a, b, c;
	puts("숫자3개 차례로 입력 하세요");
	//문자열을 출력, 자동줄바꿈

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

	//정수형 1개 입력받아서 출력
	int num;
	//입력형식, 입력장소
	printf("정수 입력 : ");
	//scanf("%d", &num);
	scanf_s("%d", &num);


	printf("num : %d\n", num);

	return 0;
}
*/
/*
#include<stdio.h>
int main() {
	//변수의 상수표현식: 값을 변경할수 없다
	const int ea=100;
	printf("ea : %d\n", ea);
	//ea = 150;
	printf("ea : %d\n", ea);
	printf("%d\n", 10);
	printf("%d\n", 010);//8진수
	printf("%d\n", 0x1a);//16진수

	return 0;
}
*/
/*
#include<stdio.h>
int main() {

	//실수형의 데이터 타입
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
	//%f : 실수(float, double) 출력
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