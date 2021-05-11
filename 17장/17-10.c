#include <stdio.h>

union student
{
	int num;
	double grade;
};
struct student1
{
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 };
	struct student1 s2 = { 316 };
//	printf("학번 : %d\n", s1.num);
//	s1.grade = 4.4;
	printf("학점 : %d\n", s1.num);

	printf("학점 : %.1lf\n", s1.grade);

	s1.num = 315 ;

	printf("학번 : %d\n", s1.num);
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", s2.num);
	printf("%.1lf\n", s2.grade);

	return 0;
}