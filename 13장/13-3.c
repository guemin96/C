#include <stdio.h>
void assign10(void);
void assign20();

int a;//컴파일러가 기본적으로 0으로 초기화를 시켜줌 (전역변수일경우)

int main()
{
	printf("함수 호출 전 a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);

	return 0;
}
void assign10(void)
{
	a = 10;
}
void assign20()
{
	int a;//지역변수로 따로 설정해준것이기 때문에 전역변수 a와는 상관없다.
	a = 20;
}