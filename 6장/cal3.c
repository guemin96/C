#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal3(void)
{
	int a, b;
	char c[1];
	char ch[1];

	while (1)
	{
		printf("숫자를 입력하시오\n");
		scanf("%d", &a);
		scanf("%d", &b);

		printf("원하는 연산을 고르시오( 1.더하기 2.빼기 3.곱하기 4. 나누기 5.종료) : ");
		scanf(" %s", c);


		switch (c[0])
		{
		case '1':
			printf("a+b=%d\n", a + b);
			break;
		case '2':
			printf("a-b=%d\n", a - b);
			break;

		case '3':
			printf("a*b=%d\n", a * b);
			break;
		case '4':
			printf("a/b=%d\n", a / b);
			break;
		case '5':
			printf("프로그램이 종료되었습니다.");
			exit(0);
		default:
			printf("잘못된 값을 넣으셨습니다.");
			continue;
		}
		while (1)
		{
			printf("프로그램을 종료하시겠습니까? 종료하시려면 e 계속하시려면 c를 눌러주세요");
			getchar();
			scanf(" %s", ch);
			if (ch == 'e')
			{
				exit(0);
			}
			else if (ch == 'c')
			{
				printf("계속 진행하겠습니다.");
				break;
			}
			else
			{
				printf("잘못된 값을 선택하셨습니다. 다시 선택해주세요.");
			}
		}
	}
}