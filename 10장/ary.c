#include <stdio.h>

int main()
{
	int a = 10;
	int* pa;
	pa = &a;

	int ary[] = { 1,2,3,4,5 };
	int* pary = ary;
	int i;

	printf("���� a�� ����� �� : %d\n", a);
	printf("���� a�� �ּ� : %p\n", &a);
	printf("������ ���� pa�� ����� �� : %p\n", pa);
	printf("���� a�� ����� �� : %d\n", *pa);

	for (size_t i = 0; i < 5; i++)
	{
		printf("ary[%d]�� ���� : %d\n",i, ary[i]);
		ary[i]++;
	}
	for (size_t i = 0; i < 5; i++)
	{
		printf("art[%d] = %d\n", i, pary[i]);
		pary[i]++;//pary[i]�� ������ ���� 1�� �����ִ� ��
	}
	for (size_t i = 0; i < 5; i++)
	{
		printf("ary[%d] =%d\n", i, *(pary + i));
	}
	return 0;
}

//ary[0]=*ary=pary[0]=*(pary+i)=> ������ ��
//&ary=pary+i => �ּҰ�

