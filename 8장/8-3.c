#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);//���� ������ int�̰� int�� 4����Ʈ�̱� ������ sizeof(score[0])�� ���� 4�̴�.

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

	printf("��� : %.1lf\n", avg);

	return 0;
}