#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*1. 로또 번호를 저장할 수 잇는 배열 선언 int lotto[6]
2. 로또 번호 입력 (동일한 번호가 입력시 에러 메세지를 출력하고 다시 입력 받으시오)
- input_lotto(),print_lotto()
*/
void input_lotto(char* plotto, int size);
void print_lotto(char* plotto);

int main()
{
	int lotto[6];
	int size = sizeof(lotto) / sizeof(lotto[0]);
	printf("로또 번호를 입력하시오.\n");
	input_lotto(lotto, size);
	print_lotto(lotto, size);
	
	return 0;
}
void input_lotto(int* plotto, int size)
{
	int temp;

	scanf("%d", &temp);
	*plotto = temp;

	for (size_t i = 1; i < size; i++)
	{
		printf("%d번째 번호를 입력하시오\n", i + 1);
		scanf("%d", &temp);

		if (temp>45||temp<1)
		{
			printf("1~45까지의 숫자를 써주십시오\n");
			scanf("%d", &temp);
		}
		for (size_t j = 0; j < i + 1; j++)
		{
			if (plotto[j] == temp)
			{
				printf("값이 중복되었습니다.다시 입력해주세요\n");
				scanf("%d", &temp);
			}
		}
		*(plotto + i) = temp;
	}
	return 0;
}
void print_lotto(int* plotto, int size)
{
	printf("로또 번호를 출력합니다.\n");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d번 숫자 : %d\n", i + 1, *(plotto + i));
	}
	return 0;
}