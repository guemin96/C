#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int a, int b)
{
	int c;
	c = a + b;
	printf("%d", c);
}
void min(int a, int b)
{
	int c;
	c = a - b;
	printf("%d", c);

}
void mul(int a, int b)
{
	int c;
	c = a * b;
	printf("%d", c);

}
void div(int a, int b)
{
	int c;
	c = a / b;
	printf("%d", c);

}

int main()
{
	int a, b;
	char c;

	printf("숫자를 입력하시오\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("원하는 연산을 고르시오( 1.더하기 2.빼기 3.곱하기 4. 나누기 5.종료) : ");
	scanf(" %s", &c);

	if (c == '1')
	{
		sum(a, b);
	}
	else if (c == '2')
	{
		min(a, b);
	}
	else if (c == '3')
	{
		mul(a, b);
	}
	else if (c == '4')
	{
		div(a, b);
	}
	
}

