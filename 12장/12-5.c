#include <stdio.h>

int main()
{
	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);//stdin�� �Է¹���(��Ʈ��)-�ϵ����� �ý����� �������ִ� ����
	// ���߿� �Է��� �����Դϴ�.
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}