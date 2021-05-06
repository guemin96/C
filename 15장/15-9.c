#include <stdio.h>

int main()
{
	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a; //a의 주소값을 받음
	printf("a : %d\n", *(int*)vp);//포인터 vp는 void 형태이기 때문에 int*로 형 변환

	vp = &b;//b의 주소값을 받음
	printf("b : %.1lf\n", *(double*)vp);//포인터 vp는 void 형태이기 때문에 double*로 형 변환

	return 0;
}