#include <stdio.h>

int sub9(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;//���� ����� for���� ���������� ��, 2���� for���� ������ �ϳ��� ��������
	}
	printf("������ �� : %d\n", sum);

	printf("���������� ���� �� : %d\n", i);

	return 0;
}