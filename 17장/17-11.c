#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season {SPRING,SUMMER,FALL,WINTER};

int main()
{
	//struct ����ü
	//union ����ü
	//enum ����ü
	enum season ss;
	char* pc = NULL;
	int temp = 0;// enum�� �����Ϸ��� �ؼ��Ҷ� �ٷ� ���ڷ� �ν��� ��
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
	printf("���� ���� Ȱ�� => %s\n", pc);

	return 0;
}