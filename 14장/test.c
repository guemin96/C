#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char wd[80];
	int c;
	int comp;

	printf("글자를 입력해주세요\n");

	scanf("%s", &wd);

	c = strlen(wd);

	for (size_t i = 0; i < c / 2; i++)
	{
		if (wd[0 + i] == wd[c - 1 - i])
		{

		}
		else
		{
			printf("앞뒤가 다른 글자입니다.");
			exit(0);
		}
	}

	printf("앞뒤가 같은 글자입니다.");


	return 0;
}