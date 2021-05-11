#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");//r(read) -> 읽기 위해 개방, w(write) -> 파일 내용을 지우고 쓰기 위해 개방, a(append) -> 파일의 끝에 추가하기 위해 개방 
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	while (1)
	{
		ch = fgetc(fp);
		if (ch==EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;
}