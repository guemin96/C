#include <stdio.h>

int main()
{
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);//stdin은 입력버퍼(스트림)-하드웨어랑 시스템을 연결해주는 역할
	// 나중에 입력할 공간입니다.
	printf("입력된 문자열은 %s입니다.\n", str);

	return 0;
}