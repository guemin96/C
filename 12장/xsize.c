#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char al;


	while (1)
	{
		printf("알파벳을 입력하시오 : (종료버튼 : /)\n");

		scanf(" %c", &al);

		if (al > 64 && al < 91)
		{
			al = al + 32;
			printf("알파벳은 %c\n", al);
		}
		else if (al > 96 && al<123)
		{
			al = al - 32; 
			printf("알파벳은 %c\n", al);
		}
		else if (al=='/')
		{
			printf("시스템을 종료합니다.\n");
			break;
		}
		else
		{
			printf("알파벳 값이 아닙니다.\n"); 
			//알파벳 값이 아닙니다 구문이 두번 나오는 이유는 
			//개행으로 인한 엔터버튼이 버퍼에 저장됨으로써 while 구문안의 scanf에
			//엔터값이 들어가면서 if구문이 실행되서 그 구문이 한번 더 반복되는 것 
			//그래서 getchar를 사용하여 버퍼에 저장된 값을 삭제시켜줘야함
		}
		getchar();
	}
	
	

	return 0;
}