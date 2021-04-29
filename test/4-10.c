#include <stdio.h>

int sub2(void)
{
	int a = 20, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a=%d, b=%d\n", a, b);
	printf("res =%d\n", res);

	return 0;
}