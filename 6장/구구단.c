#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sub8(void)
{
	int a;
	while (1)
	{
		printf("����� ����Ͻðڽ��ϱ�?\n");
		scanf("%d", &a);
		printf("a =%d\n", a);
		if (a < 1 || a > 9) //  break; 
		{
			printf("1���� 9������ ���ڸ� �Է��Ͻÿ�\n");
			
		}
		else
		{
			for (size_t i = 0; i < 10; i++)
			{
				printf("%d*%d=%d\n", a, i, a * i);
			}
		}
	}
	return 0;

}