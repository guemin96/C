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
		printf("�ٸ� ���ڸ� �־��ּ���\n");
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

	printf("�� ���� ���� �־��ּ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("�ᱣ���� : %d\n", res);
}

int main(void)
{
	int a, b, d;
	int c;
	char ch[10];

	while (1)
	{
		printf("���ϴ� ������ ���ÿ�( 1.���ϱ� 2.���� 3.���ϱ� 4. ������ 5.����) : ");
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
			printf("���α׷��� �����Ͻðڽ��ϱ�? �����Ͻ÷��� e ����Ͻ÷��� c�� �����ּ���");
			scanf("%s", ch);
			if (ch[0] == 'e')
			{
				exit(0);
			}
			else if (ch[0] == 'c')
			{
				printf("��� �����ϰڽ��ϴ�.");
				break;
			}
			else
			{
				printf("�߸��� ���� �����ϼ̽��ϴ�. �ٽ� �������ּ���.");
			}
		}
		
	}

	

}