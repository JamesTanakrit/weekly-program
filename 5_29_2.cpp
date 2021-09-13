#include<stdio.h>
float student[10], allHeight = 0;

void inputHeight(int i)
{
	if (i<10)
	{
		scanf_s("%f", &student[i]);
		inputHeight(i + 1);
	}
}

void height(int a)
{
	if (a < 9)
	{
		printf("%.2f, ", student[a]);
		height(a + 1);
	}
	if (a == 9)
	{
		printf("%.2f\n", student[a]);
	}
	allHeight = allHeight + student[a];
}

int main()
{
	float avg;
	inputHeight(0);
	printf("The height of the 10 students : ");
	height(0);
	avg = allHeight / 10;
	printf("Average height : %.2f", avg);
	return 0;
}