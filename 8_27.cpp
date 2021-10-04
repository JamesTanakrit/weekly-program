#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int y = 1; y < n * 2; y++)
	{
		for (int x = 1; x < n * 2; x++)
		{
			if (y > x && (x != n || y != n) && y <= n)
			{
				printf(" ");
			}
			else if (x + y >= (n * 2) + 1 && y <= n)
			{
				printf(" ");
			}
			else if (x + y < (n * 2) && x < n && y > n)
			{
				printf(" ");
			}
			else if (x - y >= 1 && x > n && y > n)
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