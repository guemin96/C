#include <stdio.h>

int main()
{
	printf("apple�� ����� ���� �ּ� �� :%p\n", "apple"); //���ڿ��� �ּ� = �������̴�
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1); //
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);/*���ڿ���ü�� �迭�ּ��̱⶧���� �ڿ� [i] �ٿ��ָ� ������ ���� ����*/

	return 0;
}