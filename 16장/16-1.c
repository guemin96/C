#include <stdio.h>
#include <stdlib.h>//malloc, free 함수 사용을 위한 헤더 파일
//시스템

int main()
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));//(int*)는 생략 가능
	if (pi==NULL)
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);// free라는 함수는 동적 할당 영역 반환
	free(pd);// malloc이랑 free는 세트 함수 

	return 0;
}
