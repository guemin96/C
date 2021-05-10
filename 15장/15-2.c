#include <stdio.h>
void swap_ptr(char** ppa, char** ppb);

int main()
{
	char* pa = "success";// 문자열에 pa라는 포인터를 할당
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

	pt = *ppa; //pt 새로운 주소값 <= 
	*ppa = *ppb;
	*ppb = pt;
}

함수// 값을 들고 오는 것은 그냥 복사// 함수안에서만 사용할 수 잇다. 함수밖을 벗어나면 삭제됨 
//주소를 가지고 오면 메인함수의 값을 변경할 수 잇다!!!

//**ppa => 
