#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal3(void)
{
	int a, b;
	char c[1];
	char ch[1];

	while (1)
	{
		printf("���ڸ� �Է��Ͻÿ�\n");
		scanf("%d", &a);
		scanf("%d", &b);

		printf("���ϴ� ������ ���ÿ�( 1.���ϱ� 2.���� 3.���ϱ� 4. ������ 5.����) : ");
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
			printf("���α׷��� ����Ǿ����ϴ�.");
			exit(0);
		default:
			printf("�߸��� ���� �����̽��ϴ�.");
			continue;
		}
		while (1)
		{
			printf("���α׷��� �����Ͻðڽ��ϱ�? �����Ͻ÷��� e ����Ͻ÷��� c�� �����ּ���");
			getchar();
			scanf(" %s", ch);
			if (ch == 'e')
			{
				exit(0);
			}
			else if (ch == 'c')
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