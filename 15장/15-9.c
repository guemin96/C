#include <stdio.h>

int main()
{
	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a; //a�� �ּҰ��� ����
	printf("a : %d\n", *(int*)vp);//������ vp�� void �����̱� ������ int*�� �� ��ȯ

	vp = &b;//b�� �ּҰ��� ����
	printf("b : %.1lf\n", *(double*)vp);//������ vp�� void �����̱� ������ double*�� �� ��ȯ

	return 0;
}