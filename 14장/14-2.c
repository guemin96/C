#include <stdio.h>


int main()
{
	int num[][4] = {
		{1,	2, 3, 4 },
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	
	int i, j;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
