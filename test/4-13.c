#include <stdio.h>

int sub5(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a<<1:%d\n", a << 1);
	printf("a>>2:%d\n", a >> 2);

	printf("\n");
	char ch = 128;
	unsigned char ch1 = 128;
	printf("ch>>1 : %d\n", ch >> 1);
	printf("ch>>1 : %d\n", ch1 >> 1);

	return 0;
}