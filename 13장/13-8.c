#include <stdio.h>

int* sum(int a, int b);

int main()
{
	int* resp;

	resp = sum(10, 20);
	printf("�� ������ �� : %d\n", *resp);
	
	return 0;
}

int* sum(int a, int b)
{
	int res;

	res = a + b;
	return &res; 
	//�ּ� ���� ��ȯ���ִµ� sum�̶�� �Լ��� ������ �Ǹ� res�� �ּҴ� ������� ������
	//res ���� ��ü�� static���� �����Ͽ� main�Լ��� ���������� ������� �ʰ� ������ϱ⶧����
	// res ������ static�� �������־���Ѵ�.
}