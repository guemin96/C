#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a;
	int* const pb = &b;

	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	//pa = 20;
	a = 20;
	printf("���� a �� : %d\n", *pa);
	/*pa = 30;
	printf("���� a �� : %d\n", *pa);*/
	*pb = 30;
	printf("%d", *pb);
	return 0;
}