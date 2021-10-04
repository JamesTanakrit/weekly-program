#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int y = 1; y <= n; y++)
	{
		for (int x = 1; x <= (n*2)-1; x++)
		{
			if (x + y <= n || x - y >= n)
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
}