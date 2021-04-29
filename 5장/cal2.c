#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal2(void)
{
	int a, b, c;

	printf("숫자를 입력하시오\n");
	scanf("%d", &a);
	scanf("%d", &b);

	

	while (1)
	{
		printf("원하는 연산을 고르시오( 1.더하기 2.빼기 3.곱하기 4. 나누기) : ");
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