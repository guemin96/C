#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1. 10���� ������ �Է¹޾� �迭�� �����Ѵ�.
//2. �迭�� ����Ѵ�.
//3. �迭�� ����� ���� 9 < ->0, 8 < ->1, 7 < ->2, 6 < ->3...���·� ����� ���� ��ȯ�Ѵ�.
//	(��� : ������ 2���� ����Ͽ� 0����, 9������ ����Ų��.)
//4.�迭�� ����Ѵ�.
//input_ary();
//swap_ary();
//print_ary();

//&ary=*ary=pa
//ary=*pa
void input_ary(int* pa, int size);
void swap_ary(int* pa, int* pb, int size);
void print_ary(int* pa, int size);
int main()
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);
	print_ary(ary, size);

	swap_ary(ary, ary + size - 1, size);

	print_ary(ary, size);

}
void input_ary(int* pa, int size)
{
	int i;

	printf("%d���� �������� �����ÿ�\n", size);
	for (size_t i = 0; i < size; i++)
	{
		scanf("%d", pa + i);
	}
}
void swap_ary(int* pa, int* pb, int size)
{
	int temp;
	for (size_t i = 0; i < size / 2; i++)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;

		pa++;
		pb--;
	}
}
void print_ary(int* pa, int size)
{
	printf("\n�迭�� ����մϴ�\n");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", *(pa + i));
	}
}
