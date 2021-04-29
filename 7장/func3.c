#include <stdio.h>

void func(int aa, int ab);

int sub()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); // 입력이 있는 함수 호출
	return 0;
}
void func2(int aa, int ab)
{
	int res;
	res = aa + ab;

}