#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1. 10개의 정수를 입력받아 배열에 저장한다.
//2. 배열을 출력한다.
//3. 배열에 저장된 값을 9 < ->0, 8 < ->1, 7 < ->2, 6 < ->3...형태로 저장된 값을 교환한다.
//	(방법 : 포인터 2개를 사용하여 0번방, 9번방을 가리킨다.)
//4.배열을 출력한다.
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

	printf("%d개의 정수값을 넣으시오\n", size);
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
	printf("\n배열을 출력합니다\n");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", *(pa + i));
	}
}
