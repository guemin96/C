#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char al;


	while (1)
	{
		printf("���ĺ��� �Է��Ͻÿ� : (�����ư : /)\n");

		scanf(" %c", &al);

		if (al > 64 && al < 91)
		{
			al = al + 32;
			printf("���ĺ��� %c\n", al);
		}
		else if (al > 96 && al<123)
		{
			al = al - 32; 
			printf("���ĺ��� %c\n", al);
		}
		else if (al=='/')
		{
			printf("�ý����� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("���ĺ� ���� �ƴմϴ�.\n"); 
			//���ĺ� ���� �ƴմϴ� ������ �ι� ������ ������ 
			//�������� ���� ���͹�ư�� ���ۿ� ��������ν� while �������� scanf��
			//���Ͱ��� ���鼭 if������ ����Ǽ� �� ������ �ѹ� �� �ݺ��Ǵ� �� 
			//�׷��� getchar�� ����Ͽ� ���ۿ� ����� ���� �������������
		}
		getchar();
	}
	
	

	return 0;
}