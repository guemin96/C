#include <stdio.h>

int main()
{
	char* dessert = "apple";
	
	printf("���� �Ľ��� %p�Դϴ�.\n", dessert); 
	//������ �������� ����������� �ּҰ��� �����°� ����
	//������ %s�� ����������� ������ ������ ���� ������ �� ����

	
	
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);


	dessert = "banana";
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	return 0;
}