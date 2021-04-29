#include <stdio.h>

int sub5(void)
{
	printf("\n\n\n");
	int i, j;

	for (size_t x = 0; x < 6; x++)
	{
		//공백부분
		for (size_t y = 0; y < 5-x; y++)
		{
			printf(" ");
			
		}
		//한개가 부족해서 그냥 넣어줌
		/*printf("*");*/
		//반대방향으로 
		for (size_t z = 0; z < 2*x+1; z++)
		{
			printf("*");
		}
		
		printf("\n");
	}

	for (size_t x = 0; x < 6; x++)
	{
		for (size_t y = 0; y < x; y++)
		{
			printf(" ");
		}
		for (size_t z = 0; z < 11-2*x; z++)
		{
			printf("*");
		}

		printf("\n");
	}
}