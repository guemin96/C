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

	Employee num[5] = {0};
	char temp[80];
	int pi = 0;


	for (size_t i = 0; i < 5; i++)
	{
		printf("%d��° ����� ���̵� �����ּ���",i+1);
		scanf("%d", &(num[i].id));

		printf("%d��° ����� �̸��� �����ּ���", i + 1);
		scanf("%s", &temp);

		num[i].name = (char*)malloc(80);
		strcpy(num[i].name, temp);

		printf("%d��° ����� �޿��� �����ּ���", i + 1);
		scanf("%d", &(num[i].salary));

	}
	



	for (size_t i = 0; i < 5; i++)
	{
		printf("%d��° ����� ���̵�,�̸�, �޿��� %d %s %d�Դϴ�\n",i+1, num[i].id, num[i].name, num[i].salary);

	}

	for (size_t i = 0; i < 5; i++)
	{
		pi += num[i].salary;

	}
	printf("%d", pi);

	
	return 0;

}