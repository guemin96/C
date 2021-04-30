#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);//방의 형식이 int이고 int는 4바이트이기 때문에 sizeof(score[0])의 값은 4이다.

	for (size_t i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (size_t i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;
	for (size_t i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}