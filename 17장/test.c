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

	Employee num[5] = {0};
	char temp[80];
	int pi = 0;


	for (size_t i = 0; i < 5; i++)
	{
		printf("%d번째 사원의 아이디를 적어주세요",i+1);
		scanf("%d", &(num[i].id));

		printf("%d번째 사원의 이름을 적어주세요", i + 1);
		scanf("%s", &temp);

		num[i].name = (char*)malloc(80);
		strcpy(num[i].name, temp);

		printf("%d번째 사원의 급여를 적어주세요", i + 1);
		scanf("%d", &(num[i].salary));

	}
	



	for (size_t i = 0; i < 5; i++)
	{
		printf("%d번째 사원의 아이디,이름, 급여는 %d %s %d입니다\n",i+1, num[i].id, num[i].name, num[i].salary);

	}

	for (size_t i = 0; i < 5; i++)
	{
		pi += num[i].salary;

	}
	printf("%d", pi);

	
	return 0;

}