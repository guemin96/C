#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	Employee s1;
	char str[20];
	printf("사원아이디, 사원이름, 급여를 입력하세요.\n");
	printf("$ ");
	scanf("%d %s %d", &s1.id, str, &s1.salary); //동적할당은 다른 값으로 따로 입력
	s1.name = (char*)malloc(strlen(str) + 1);
	strcpy(s1.name, str);
	printf("%d %s %d", s1.id, s1.name, s1.salary);
}
