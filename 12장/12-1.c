#include <stdio.h>

int main()
{
	printf("apple이 저장된 시작 주소 값 :%p\n", "apple"); //문자열도 주소 = 포인터이다
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1); //
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);/*문자열자체가 배열주소이기때문에 뒤에 [i] 붙여주면 데이터 값이 나옴*/

	return 0;
}