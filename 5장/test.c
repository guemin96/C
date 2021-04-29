#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sub3(void)
{
	printf("\n\n\n");

	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);

	c = a + b;
	printf("a=%d,b=%d\n", a, b);
	printf("a+b=%d\n", c);
	c = a - b;
	printf("a-b=%d\n", c);
	c = a * b;
	printf("a*b=%d\n", c);
	c = a / b;
	printf("a/b=%d\n", c);

	printf("\n\n\n");

	
}
