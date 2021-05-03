#include <stdio.h>

int main()
{
	int a = 10;
	int* pa;
	pa = &a;

	int ary[] = { 1,2,3,4,5 };
	int* pary = ary;
	int i;

	printf("변수 a에 저장된 값 : %d\n", a);
	printf("변수 a의 주소 : %p\n", &a);
	printf("포인터 변수 pa에 저장된 값 : %p\n", pa);
	printf("변수 a에 저장된 값 : %d\n", *pa);

	for (size_t i = 0; i < 5; i++)
	{
		printf("ary[%d]의 값은 : %d\n",i, ary[i]);
		ary[i]++;
	}
	for (size_t i = 0; i < 5; i++)
	{
		printf("art[%d] = %d\n", i, pary[i]);
		pary[i]++;//pary[i]의 데이터 값에 1씩 더해주는 것
	}
	for (size_t i = 0; i < 5; i++)
	{
		printf("ary[%d] =%d\n", i, *(pary + i));
	}
	return 0;
}

//ary[0]=*ary=pary[0]=*(pary+i)=> 데이터 값
//&ary=pary+i => 주소값

