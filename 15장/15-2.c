#include <stdio.h>
void swap_ptr(char** ppa, char** ppb);

int main()
{
	char* pa = "success";// ���ڿ��� pa��� �����͸� �Ҵ�
	char* pb = "failure";
	char pt[10];
	
	pa= p+

	printf("pa-> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa-> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa; //pt ���ο� �ּҰ� <= 
	*ppa = *ppb;
	*ppb = pt;
}

�Լ�// ���� ��� ���� ���� �׳� ����// �Լ��ȿ����� ����� �� �մ�. �Լ����� ����� ������ 
//�ּҸ� ������ ���� �����Լ��� ���� ������ �� �մ�!!!

//**ppa => 
