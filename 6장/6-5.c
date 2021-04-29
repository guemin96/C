#include <stdio.h>

int sub9(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;//가장 가까운 for문을 빠져나오는 것, 2개의 for문이 있으면 하나만 빠져나옴
	}
	printf("누적한 값 : %d\n", sum);

	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}