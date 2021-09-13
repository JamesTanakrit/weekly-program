//29.จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)//
#include<stdio.h>
int main()
{
	float x[10], x_all = 0, avg;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%f", &x[i]);
	}
	printf("The height of the 10 students : ");
	for (int i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			printf("%.2f, ", x[i]);
		}
		else
		{
			printf("%.2f\n", x[i]);
		}
		x_all = x_all + x[i];
	}
	avg = x_all / 10;
	printf("Average height : %.2f", avg);
	return 0;
}