#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char my_strcpy(char ps1, char ps2);

int main()
{
	char str1[80]="change";
	char str2[80];
	printf("������ ���ڰ��� %s\n",str1);
	printf("�ٲٰ� ���� ���ڸ� �Է��Ͻÿ�");
	scanf("%s", str2);

	my_strcpy(str1,str2);

	//printf("�ٲ��� ���ڿ��� %s",str1);

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