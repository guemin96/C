#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int a, int b)
{
	int d;
	d = a + b;
	printf("%d\n", d);
}
void min(int a, int b)
{
	int d;
	d = a - b;
	printf("%d\n", d);

}
void mul(int a, int b)
{
	int d;
	d = a * b;
	printf("%d\n", d);

}
void div(int a, int b)
{
	if (b==0)
	{
		printf("다른 숫자를 넣어주세요\n");
	}
	else
	{
		int d;
		d = a / b;
		printf("%d\n", d);
	}
	

}



int main(void)
{
	int a, b, d;
	char c;
	char ch[10];

	while (1)
	{
		printf("숫자를 입력하시오\n");
		scanf("%d", &a);
		scanf("%d", &b);

		printf("원하는 연산을 고르시오( 1.더하기 2.빼기 3.곱하기 4. 나누기 5.종료) : ");
		scanf(" %s",&c);


		if (c=='1')
		{
			sum(a, b);
		}
		else if (c=='2')
		{
			min(a, b);
		}
		else if (c=='3')
		{
			mul(a, b);
		}
		else if (c=='4')
		{
			div(a, b);
		}
		break;
	}

	while (1)
	{
		printf("프로그램을 종료하시겠습니까? 종료하시려면 e 계속하시려면 c를 눌러주세요");
		scanf("%s",ch);
		if (ch[0] =='e')
		{
			exit(0);
		}
		else if (ch[0] =='c')
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