#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 5���� ��� ���̵�, ����̸�, �Ѵ� �޿��� �Է¹޾� ����� �� 
// 5�� ����� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�.
// (�̸��� �����Ҵ翡 �����Ѵ�.)

typedef struct employee {
	int id;		//�����ȣ
	char* name;	//����̸�
	int salary;	//����޿�
}Employee;

int main()
{

	Employee num[5];
	char str[20];
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d�� �����ȣ,����̸�, �޿��� �����ּ���\n",i+1);
		scanf(" %d &s %d", &num[i].id, str, &num[i].salary);
		num->name = (char*)malloc(strlen(str) + 1);
		strcpy(num->name, str);

	}
	



	for (size_t i = 0; i < 5; i++)
	{
		printf("%d %s %d", num->id, num->name, num->salary);

	}
	
	return 0;

}