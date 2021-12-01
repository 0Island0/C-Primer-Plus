#include<stdio.h>
int main()
{
	char ch;
	int n,i,j;
	printf("Enter a capital letter:");
	scanf("%c", &ch);
	n = ch - 'A';
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (ch='A',j = n - i; j < n + 1;ch++, j++)
			printf("%c", ch);
		for (ch = ch-2, j = n + i; j > n ; ch--, j--)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}