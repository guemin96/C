#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char my_strcpy(char ps1, char ps2);

int main()
{
	char str1[80]="change";
	char str2[80];
	printf("기존의 문자값은 %s\n",str1);
	printf("바꾸고 싶은 문자를 입력하시오");
	scanf("%s", str2);

	my_strcpy(str1,str2);

	//printf("바꿔진 문자열은 %s",str1);

	return 0;
}

char my_strcpy(char *ps1, char *ps2)
{
	char* po = ps1;
	while (*ps2 !='\0')
	{
		
		*ps1 = *ps2;

		ps1++;
		ps2++;
	}
	*ps1 = '\0';

	return po;
}