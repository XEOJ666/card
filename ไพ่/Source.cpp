#include<stdio.h>
void C_test(int);
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Error");
	}
	else
	{
		C_test(n);
	}

}

void C_test(int n)
{
	for (int row = 1;row <= n;row++)
	{
		for (int space = n - row;space >= 1;space--)
		{
			printf("*");
		}
		for (int star = 1;star <= 2 * row - 1;star++)
		{
			if (star == 1 || star == 2 * row - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int space = n - row;space >= 1;space--)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int row = n - 1;row >= 1;row--)
	{
		for (int space = 1; space <= n - row; space++)
		{
			printf("*");
		}
		for (int star = 1;star <= 2 * row - 1;star++)
		{
			if (star == 1 || star == 2 * row - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int space = n - row;space >= 1;space--)
		{
			printf("*");
		}
		printf("\n");
	}
}