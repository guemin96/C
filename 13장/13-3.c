#include <stdio.h>
void assign10(void);
void assign20();

int a;//�����Ϸ��� �⺻������ 0���� �ʱ�ȭ�� ������ (���������ϰ��)

int main()
{
	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	return 0;
}
void assign10(void)
{
	a = 10;
}
void assign20()
{
	int a;//���������� ���� �������ذ��̱� ������ �������� a�ʹ� �������.
	a = 20;
}