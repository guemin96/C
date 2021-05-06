#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b)
{
	return(a + b);
}
int min(int a, int b)
{
	return(a - b);

}
int mul(int a, int b)
{
	return(a * b);

}
int div(int a, int b)
{
	if (b == 0)
	{
		printf("다른 숫자를 넣어주세요\n");
	}
	else
	{
		return(a / b);
	}


}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수 값을 넣어주세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결괏값은 : %d\n", res);
}

int main(void)
{
	int a, b, d;
	int c;
	char ch[10];

	while (1)
	{
		printf("원하는 연산을 고르시오( 1.더하기 2.빼기 3.곱하기 4. 나누기 5.종료) : ");
		scanf("%d", &c);
		
		switch (c)
		{
		case 1:func(sum); break;
		case 2:func(min); break;
		case 3:func(mul); break;
		case 4:func(div); break;
		default:
			break;
		}
		while (1)
		{
			printf("프로그램을 종료하시겠습니까? 종료하시려면 e 계속하시려면 c를 눌러주세요");
			scanf("%s", ch);
			if (ch[0] == 'e')
			{
				exit(0);
			}
			else if (ch[0] == 'c')
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