#include <stdio.h>

int main()
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);//개행시키는 기능없음
	puts("milk");

	return 0;
}