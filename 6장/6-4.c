#include <stdio.h>

int sub4(void)
{
	printf("\n\n\n\n");
	int i, j;

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}