#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a=%d,b=%d\n", a, b);
	printf("a/b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a);
	//���׿� �ִ� ��쿡�� ����ȯ �Ұ���
	
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