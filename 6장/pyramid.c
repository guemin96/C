#include <stdio.h>

int sub5(void)
{
	printf("\n\n\n");
	int i, j;

	for (size_t x = 0; x < 6; x++)
	{
		//����κ�
		for (size_t y = 0; y < 5-x; y++)
		{
			printf(" ");
			
		}
		//�Ѱ��� �����ؼ� �׳� �־���
		/*printf("*");*/
		//�ݴ�������� 
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