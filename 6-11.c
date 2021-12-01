#include<stdio.h>
int main()
{
	int number[8],i;
	printf("Enter 8 numbers(int):");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &number[i]);
		//printf("%d", number[i]);
	}
	for (i = 7; i >= 0; i--)
	{
		printf("%d ", number[i]);
	}
	
	return 0;
}