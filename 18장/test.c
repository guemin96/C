#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
	�α��� ���α׷�
	1. id�� password �� �����ϰ� �����̸��� password.txt �� �����Ѵ�.
	2. ����ü Login ������ id,password ����� ���� ������ ��Ű�� 
	3. Ű����� �ԷµǴ� id�� password�� ���Ͽ� "�α��� �Ǿ����ϴ�."�Ǵ� "���̵� ã�� �� �����ϴ�"�� ��� 
*/
struct Login {
	char id[20];
	char password[20];
} ;

int main()
{
	FILE* fp, * fb;
	char *str = "guemin96";
	char *ps = "12345";
	int i;

	int a;

	char id[20];
	char pass[20];

	struct Login temp ;

	fb = fopen("password.txt", "w");
	if (fb == NULL)
	{
		printf("������ ������ ���߽��ϴ�.");
		return 1;
	}

	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fb);
		i++;
	}
	fputc(' ', fb);

	i = 0;
	while (ps[i]!='\0')
	{
		fputc(ps[i], fb);
		i++;
	}
	fputc('\n', fb);

	fclose(fb);
	
	fp = fopen("password.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.");
		return 1;
	}

	i = 0;

	printf("%s\n", str);
	printf("%s\n", ps);
	
	a=fscanf(fp, "%s%s", &(temp.id), &(temp.password));

	/*strcpy(temp.id, str);
	strcpy(temp.password, ps);*/

	printf("���̵� �Է��ϼ���");
	scanf("%s", id);
	printf("�н����带 �Է��ϼ���");
	scanf("%s", pass);
	
	if (*id==*temp.id && *pass==*temp.password)
	{
		printf("�α��εǾ����ϴ�.");
	}
	else
	{
		printf("id�� ã�� �� �����ϴ�.");
	}

	fclose(fp);
}