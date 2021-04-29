#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(void)
{
	int a, b, c;
	while (c == 1, 2, 3, 4)
	{
	printf("숫자를 입력하시오\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("원하는 연산을 고르시오( 1.더하기 2.빼기 3.곱하기 4. 나누기) : ");
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
				printf("예외가 발생했습니다.");
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