#include <stdio.h>

int main()
{
	int ary[2][2] = { {1,2} ,{3,4} };
	int(*pary)[2] = ary;
	printf("%u  %u  %u\n", ary, ary[0], &ary[0][1]);
	printf("%u", &(*pary));
	return 0;

}