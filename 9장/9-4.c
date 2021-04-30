#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a;
	int* const pb = &b;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	//pa = 20;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);
	/*pa = 30;
	printf("변수 a 값 : %d\n", *pa);*/
	*pb = 30;
	printf("%d", *pb);
	return 0;
}