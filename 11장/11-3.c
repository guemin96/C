#include <stdio.h>

int main()
{
	int ch;//아스키 코드로 받기 때문에 인트로 받음

	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');
	//문자열 gets,puts
	return 0;
}