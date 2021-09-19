#include<stdio.h>
int fact = 1;
int factorial(int x)
{
	if (x > 0)
	{
		fact = fact * x;
		factorial(x - 1);
	}
	return fact;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("Factorial of 0 = 1");
	}
	else
	{
		printf("Factorial of %d = %d", n, factorial(n));
	}
	return 0;
}