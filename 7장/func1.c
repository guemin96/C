#include <stdio.h>
//int sum(int x, int y);

void func()
{
	int a = 10, b = 20;
	int res;

	res = sum(a, b);
	printf("result : %d\n", res);
}

int func1(void)
{
	func();//func �Լ� ȣ��
	return 0;
}

int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}