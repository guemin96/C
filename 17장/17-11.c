#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season {SPRING,SUMMER,FALL,WINTER};

int main()
{
	//struct 구조체
	//union 공용체
	//enum 열거체
	enum season ss;
	char* pc = NULL;
	int temp = 0;// enum을 컴파일러로 해석할때 바로 숫자로 인식이 됨
	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);
	//scanf("%d", &temp);

	ss = (enum season)temp;
	switch (ss)
	{
	case SPRING :
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저 활동 => %s\n", pc);

	return 0;
}