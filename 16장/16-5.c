#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);


int main()
{
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;


	while (i<20)
	{
		printf("문자열을 입력하세요 : (종료를 하실때는 end를 입력해주세요)");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);
	for (size_t i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}
	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}