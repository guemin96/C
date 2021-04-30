#include <stdio.h>

int main()
{
	int i;
	int ary[5] = { 10,20,30,40,50 };
	int size = sizeof(ary) / sizeof(ary[0]);
	for (size_t i = size-1; i < size; i--)
	{
		printf("ary[%d]=%d\n", i, ary[i]);
	}
	printf("ary[%d]=%d\n", 1, 1);
	return 0;
}