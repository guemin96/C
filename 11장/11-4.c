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
		if (ch == '\n')// 문자열일 경우에는 조건식이 안먹는다
		{
			break;
		}
		printf("%c", ch);
	}
	return 0;
}