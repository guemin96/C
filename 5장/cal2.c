#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal2(void)
{
	int a, b, c;

	printf("���ڸ� �Է��Ͻÿ�\n");
	scanf("%d", &a);
	scanf("%d", &b);

	

	while (1)
	{
		printf("���ϴ� ������ ���ÿ�( 1.���ϱ� 2.���� 3.���ϱ� 4. ������) : ");
		scanf("%d", &c);

		switch (c)
		{
		case 1:
			printf("a+b=%d\n", a + b);
			return;
		case 2:
			printf("a-b=%d\n", a - b);
		case 3:
			printf("a*b=%d\n", a * b);
		case 4:
			printf("a/b=%d\n", a / b);
		default:
			break;
		}
	}
	

	return 0;
}