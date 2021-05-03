#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*1. �ζ� ��ȣ�� ������ �� �մ� �迭 ���� int lotto[6]
2. �ζ� ��ȣ �Է� (������ ��ȣ�� �Է½� ���� �޼����� ����ϰ� �ٽ� �Է� �����ÿ�)
- input_lotto(),print_lotto()
*/
void input_lotto(char* plotto, int size);
void print_lotto(char* plotto);

int main()
{
	int lotto[6];
	int size = sizeof(lotto) / sizeof(lotto[0]);
	printf("�ζ� ��ȣ�� �Է��Ͻÿ�.\n");
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
		printf("%d��° ��ȣ�� �Է��Ͻÿ�\n", i + 1);
		scanf("%d", &temp);

		if (temp>45||temp<1)
		{
			printf("1~45������ ���ڸ� ���ֽʽÿ�\n");
			scanf("%d", &temp);
		}
		for (size_t j = 0; j < i + 1; j++)
		{
			if (plotto[j] == temp)
			{
				printf("���� �ߺ��Ǿ����ϴ�.�ٽ� �Է����ּ���\n");
				scanf("%d", &temp);
			}
		}
		*(plotto + i) = temp;
	}
	return 0;
}
void print_lotto(int* plotto, int size)
{
	printf("�ζ� ��ȣ�� ����մϴ�.\n");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d�� ���� : %d\n", i + 1, *(plotto + i));
	}
	return 0;
}