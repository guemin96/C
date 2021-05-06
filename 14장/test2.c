#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_score(int (*)[4], int);
void print_avgscore(int (*)[4], int,int);
void print_subavg(int (*)[4], int, int , int , int , int , int );

int main()
{
	int score[5][4];
	int total;
	int Ktotal=0;
	int Mtotal=0;
	int Etotal = 0;
	int Ptotal = 0;

	int avg = 0;
	int size = sizeof(score) / sizeof(score[0]);


	for (size_t i = 0; i < size; i++)
	{
		printf("%d�� �л��� ������ �Է��Ͻÿ�(����,����,����,ü�� ������ �Է��Ͻÿ�)\n",i+1);
		for (size_t j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	print_score(score, size);

	print_avgscore(score, size, avg);

	print_subavg(score, size, Ktotal, Mtotal, Etotal, Ptotal, avg);
	
	return 0;
}

void print_score(int (*ps)[4], int size) 
{
	int i, j;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{

		}
		printf("%d�� �л��� ������ %d,%d,%d,%d\n", i + 1, ps[i][0], ps[i][1], ps[i][2], ps[i][3]);
	}
}

void print_avgscore(int (*ps)[4], int size , int avg)
{
	int i, j, total;
	
	for (size_t i = 0; i < size; i++)
	{
		total = 0;
		for (size_t j = 0; j < 4; j++)
		{
			total += ps[i][j];
		}
		avg = total / 4.0;
		printf("%d�� �л��� ����� %d�Դϴ�.\n", i + 1, avg);
	}
}
void print_subavg(int(*ps)[4], int size,int Ktotal, int Mtotal, int Etotal, int Ptotal,int avg )
{
	Ktotal = 0;
	Mtotal = 0;
	Etotal = 0;
	Ptotal = 0;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{


			Ktotal += ps[i][0];
			Mtotal += ps[i][1];
			Etotal += ps[i][2];
			Ptotal += ps[i][3];
		}


	}
	avg = Ktotal / 5;
	printf("���� ����� %d�Դϴ�.\n", avg);
	avg = Mtotal / 5;
	printf("���� ����� %d�Դϴ�.\n", avg);
	avg = Etotal / 5;
	printf("���� ����� %d�Դϴ�.\n", avg);
	avg = Ptotal / 5;
	printf("ü�� ����� %d�Դϴ�.\n", avg);
}

