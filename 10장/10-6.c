#include <stdio.h>

void print_ary(int* pa, int size);

int main()
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };

	printf("ary1�� ������� %d\n", sizeof(ary1));
	printf("ary2�� ������� %d\n", sizeof(ary2));

	print_ary(ary1, sizeof(ary1)/sizeof(ary1[0]));
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;
	printf("����Ʈ�� ������� %d\n", sizeof(pa));
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}