#include <stdio.h>

int sub6(void)
{
	printf("\n\n\n");
	int i, j;

	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 5-i; j++)
		{
			printf(" ");
		}
		for (size_t x = 1; x < 2*i; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}