#include <stdio.h>

int sub1(void)
{
	printf("\n\n\n\n");
	int a = 1;
	int i;

	for (size_t i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}