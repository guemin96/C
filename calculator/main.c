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
		printf("�ٸ� ���ڸ� �־��ּ���\n");
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
		printf("���ڸ� �Է��Ͻÿ�\n");
		scanf("%d", &a);
		scanf("%d", &b);

		printf("���ϴ� ������ ���ÿ�( 1.���ϱ� 2.���� 3.���ϱ� 4. ������ 5.����) : ");
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
		printf("���α׷��� �����Ͻðڽ��ϱ�? �����Ͻ÷��� e ����Ͻ÷��� c�� �����ּ���");
		scanf("%s",ch);
		if (ch[0] =='e')
		{
			exit(0);
		}
		else if (ch[0] =='c')
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