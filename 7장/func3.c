#include <stdio.h>

void func(int aa, int ab);

int sub()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); // �Է��� �ִ� �Լ� ȣ��
	return 0;
}
void func2(int aa, int ab)
{
	int res;
	res = aa + ab;

}