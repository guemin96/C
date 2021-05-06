#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);
	printf("==========================\n");
	int ary1[2] = { 1,2 };
	int (*pary1) = ary1;
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n", ary1 + 1, pary1 + 1);
	printf("===========================\n");
	char ary2[2] = { 'a','b' };
	char* pary2 = ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n", ary2 + 1, pary2 + 1);
	printf("===========================\n");
	int ary3[][2] = { {1,2},{3,4} };
	char (* pary3)[2] = ary3;
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3 + 1, pary3 + 1);
	//원래는 배열 주소값에 1을 더하는 것이나 포인터에 1을 더하주는 값이 똑같이 나와야하지만
	//이차원 배열에서는 주소안에 또 주소가 존재하기 때문에 20번줄처럼 배열 포인트를 사용하여야 한다.
	//그렇게 될 경우 배열 주소값에 1을 더하는 것과 배열 포인트(여러 배열에 대한 포인터) 값에 1을 더하는 값이 똑같아 진다.
	printf("===========================\n");
	char* ary4[2] = { "hi","good" }; //포인트 배열은 2개의 포인트를 가진다. 포인터에 하나 배열에 하나
	char* *pary4 = ary4;
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4 + 1, pary4 + 1);
	return 0;
}