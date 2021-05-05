#include <stdio.h>

int main()
{
	register int i;
	auto int sum = 0;
	for (size_t i = 1; i <= 1000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}