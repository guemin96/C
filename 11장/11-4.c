#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	int i;

	/*for (size_t i = 0; i < 6; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}*/

	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')// ���ڿ��� ��쿡�� ���ǽ��� �ȸԴ´�
		{
			break;
		}
		printf("%c", ch);
	}
	return 0;
}