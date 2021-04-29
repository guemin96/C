#include <stdio.h>

void print_line(void);

int sub3(void)
{
	printf("\n\n\n");

	print_line();
	printf("학번	이름	전공	학점\n");
	print_line();

	return 0;
}

void print_line(void)
{
	int i;
	for (size_t i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}