#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	Employee s1;
	char str[20];
	printf("������̵�, ����̸�, �޿��� �Է��ϼ���.\n");
	printf("$ ");
	scanf("%d %s %d", &s1.id, str, &s1.salary); //�����Ҵ��� �ٸ� ������ ���� �Է�
	s1.name = (char*)malloc(strlen(str) + 1);
	strcpy(s1.name, str);
	printf("%d %s %d", s1.id, s1.name, s1.salary);
}
