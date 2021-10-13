#include<stdio.h>
int factorial(int x)
{
	int fact = 1, realfact;
	for (int i = 1; i <= x; i++)
	{
		fact = fact * i;
	}
	realfact = fact;
	fact = 1;
	return realfact;
}

int main() 
{
	int n, a, b;
	printf("number of person:");
	scanf_s("%d", &n);
	a = factorial(n);
	b = factorial(n - 2);
	printf("number of handshakes: %d", a / (2 * b));
	return 0;
}