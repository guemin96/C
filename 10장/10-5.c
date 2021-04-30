#include <stdio.h>

void print_ary(int* pa);

int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	printf("sizeof(ary):%d\n", sizeof(ary));

	print_ary(ary);

	return 0;
}

void print_ary(int* pa)
{
	int i;
	printf("sizeof(pa): %d\n", sizeof(pa));
	for (size_t i = 0; i < 5; i++)
	{
		
		printf("%d ", pa[i]);
	}
}