#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a=%d,b=%d\n", a, b);
	printf("a/b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);
	//좌항에 있는 경우에는 형변환 불가능
	
	printf("\n");
	
	sub1();
	printf("\n");
	sub2();
	printf("\n");
	sub3();
	printf("\n");
	sub4();
	printf("\n");
	sub5();
	printf("\n");
	sub6();

	return 0;
}