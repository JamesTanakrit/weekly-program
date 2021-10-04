#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int y = 1; y < n * 2; y++)
	{
		for (int x = 1; x < n * 2; x++)
		{
			if (y == 1 || y == (n * 2)-1 || x + y == n * 2 || x == y)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}