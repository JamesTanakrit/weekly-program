#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int y = 1; y < n * 2; y++)
	{
		for (int x = 1; x < n * 2; x++)
		{
			if (x > y && (x != n || y != n) && x <= n)
			{
				printf(" ");
			}
			else if (x + y >= (n * 2) + 1 && x <= n )
			{
				printf(" ");
			}
			else if (x + y < (n * 2) && y < n && x > n)
			{
				printf(" ");
			}
			else if (y - x >= 1 && y > n && x > n)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}