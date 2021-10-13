#include<stdio.h>
int main()
{
	int n, x = 0;
	printf("number of person:");
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			x = x + 1;
		}
	}
	printf("number of handshakes: %d", x);
	return 0;
}