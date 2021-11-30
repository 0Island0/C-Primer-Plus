#include<stdio.h>
int main()
{
	int n,N;
	printf("Please enter the number£º");
	scanf("%d", &n);
	N = n + 10;
	while (n<=N)
	{
		printf("%d\n", n++);
	}
	return 0;
}