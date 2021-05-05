#include <stdio.h>

int* sum(int a, int b);

int main()
{
	int* resp;

	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);
	
	return 0;
}

int* sum(int a, int b)
{
	int res;

	res = a + b;
	return &res; 
	//주소 값을 반환해주는데 sum이라는 함수가 끝나게 되면 res의 주소는 사라지기 때문에
	//res 변수 자체를 static으로 설정하여 main함수가 끝날때까지 사라지지 않게 해줘야하기때문에
	// res 변수에 static을 설정해주어야한다.
}