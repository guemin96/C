#include <stdio.h>

void print_char(char ch, int count);

int sub2(void)
{
	printf("\n\n\n");
	print_char('@', 5);

	return 0;
}
void print_char(char ch, int count)
{
	int i;

	for (size_t i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	//return;
}