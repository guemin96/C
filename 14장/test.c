#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char wd[80];
	int c;
	int comp;

	printf("���ڸ� �Է����ּ���\n");

	scanf("%s", &wd);

	c = strlen(wd);

	for (size_t i = 0; i < c / 2; i++)
	{
		if (wd[0 + i] == wd[c - 1 - i])
		{

		}
		else
		{
			printf("�յڰ� �ٸ� �����Դϴ�.");
			exit(0);
		}
	}

	printf("�յڰ� ���� �����Դϴ�.");


	return 0;
}