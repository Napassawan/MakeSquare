#include <stdio.h>
int a, row, star;

int main()
{
	printf("Enter number of rows : ");
	scanf_s("%d", &a);
	for (row = 1; row <= a; row++)
	{
		for (star = 1; star <= a; star++)
		{
			printf("*");
		}
		printf("\n");
	}
}