#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(void)
{
	int a, b, c;
	while (c == 1, 2, 3, 4)
	{
	printf("���ڸ� �Է��Ͻÿ�\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("���ϴ� ������ ���ÿ�( 1.���ϱ� 2.���� 3.���ϱ� 4. ������) : ");
	scanf("%d", &c);
	
		

		if (c == 1)
		{
			printf("a+b=%d\n", a + b);
		}
		else if (c == 2)
		{
			printf("a-b=%d\n", a - b);
		}
		else if (c == 3)
		{
			printf("a*b=%d\n", a * b);
		}
		else if (c == 4)
		{
			if (b==0)
			{
				printf("���ܰ� �߻��߽��ϴ�.");
			}
			else
			{
				printf("a/b=%d\n", a / b);
			}
		}
		else
		{
			c = 0;
		}
	}

	return 0;
}