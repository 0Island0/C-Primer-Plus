#include<stdio.h>
int main()
{
	char i, j;
	int n, m;
	for (i = 'A', n = 1; n <= 6; i+=n,n++)
	{
		for (j = i, m = 1; m <= n; j++, m++)
			printf("%c", j);
		printf("\n");
	}
	return 0;
}