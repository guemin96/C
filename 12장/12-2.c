#include <stdio.h>

int main()
{
	char* dessert = "apple";
	
	printf("오늘 후식은 %p입니다.\n", dessert); 
	//포인터 변수만은 사용했을때는 주소값이 나오는게 맞음
	//하지만 %s를 사용했을때는 무조건 데이터 값이 나오는 것 같음

	
	
	printf("오늘 후식은 %s입니다.\n", dessert);


	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);

	return 0;
}