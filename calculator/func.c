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

	printf("���ڸ� �Է��Ͻÿ�\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("���ϴ� ������ ���ÿ�( 1.���ϱ� 2.���� 3.���ϱ� 4. ������ 5.����) : ");
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

