#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(void);

int main()
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);


	sub2();

	sub3();
	return 0;
}
int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);
	
	return num;
}