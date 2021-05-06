#include <stdio.h>
void printf_str(char** pps, int cnt);

int main()
{
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf_str(ptr_ary, count);

	return 0;
}

void printf_str(char** pps, int cnt)
{
	int i;
	for (size_t i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}