#include <stdio.h>

void add_ten(int a);


int main()
{
	int a = 10;
	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
	printf("add_ten의 a는 %d\n", a);// add_ten의 a는 메인 함수의 a를 복사하여 사용했지만 main의 a에 영향을 주지 않는다 

}