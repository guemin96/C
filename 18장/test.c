#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
	로그인 프로그램
	1. id와 password 를 저장하고 파일이름은 password.txt 로 저장한다.
	2. 구조체 Login 변수에 id,password 멤버에 각각 저장을 시키고 
	3. 키보드로 입력되는 id와 password를 비교하여 "로그인 되었습니다."또는 "아이디를 찾을 수 없습니다"를 출력 
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
		printf("파일을 만들지 못했습니다.");
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
		printf("파일을 만들지 못했습니다.");
		return 1;
	}

	i = 0;

	printf("%s\n", str);
	printf("%s\n", ps);
	
	a=fscanf(fp, "%s%s", &(temp.id), &(temp.password));

	/*strcpy(temp.id, str);
	strcpy(temp.password, ps);*/

	printf("아이디를 입력하세요");
	scanf("%s", id);
	printf("패스워드를 입력하세요");
	scanf("%s", pass);
	
	if (*id==*temp.id && *pass==*temp.password)
	{
		printf("로그인되었습니다.");
	}
	else
	{
		printf("id를 찾을 수 없습니다.");
	}

	fclose(fp);
}