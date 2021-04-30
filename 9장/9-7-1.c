#include <stdio.h>

int a = 10, b = 20;

void swap();

int main()
{
	
	printf("a=%d,b=%d\n", a, b);
	swap();
	printf("a=%d,b=%d", a, b);

	return 0;
}
void swap()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}