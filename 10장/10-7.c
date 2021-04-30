#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);
	
	/*ary//사이즈 다른 주소 = pa = &*pa => 주소값
	ary[0]  = * pa  => 데이터 값*/
	
	return 0;
}
void input_ary(double* pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (size_t i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}
double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (size_t i = 1; i < size; i++)
	{
		if (pa[i]>max)
		{
			max = pa[i];
		}
		return max;

	}

}