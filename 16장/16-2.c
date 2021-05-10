#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi==NULL)
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (size_t i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);// 주소값 안에 데이터를 삽입
		sum += pi[i];// sum=sum+pi[0]+pi[1]+pi[2]
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}