#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 5명의 사원 아이디, 사원이름, 한달 급여를 입력받아 출력한 뒤 
// 5명 사원의 급여 총액과 평균 급여액을 구하시오.
// (이름은 동적할당에 저장한다.)

typedef struct employee {
	int id;		//사원번호
	char* name;	//사원이름
	int salary;	//사원급여
}Employee;

int main()
{

	Employee num[5];
	char str[20];
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d번 사원번호,사원이름, 급여를 적어주세요\n",i+1);
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