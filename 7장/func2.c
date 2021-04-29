#include <stdio.h>

int func3(int aa, int ab);

int main1()
{
	int a, b;
	int res;
	a = 10, b = 20;
	
	res = func3(a, b);
	printf("%d", res);
	return 0;
}

int func3(int aa, int ab)
{
	int res;
	res = aa + ab;

	return res;
}
