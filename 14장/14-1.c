#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score[3][4];
	int total;
	double avg;
	int i, j, c;


	printf("학생 수를 입력하시오\n");
	scanf("%d", &c);

	for (size_t i = 0; i < c; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (size_t j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (size_t i = 0; i < c; i++)
	{
		total = 0;
		for (size_t j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}

	return 0;
}