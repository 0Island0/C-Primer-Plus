#include<stdio.h>
int isprime(int num);
int main()
{
	int n,i;
	printf("Enter a number(+int):");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		isprime(i);
	}
	return 0;
}

int isprime(int num)
{
	int a = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) 
		{
			a++; 
		}
	}
	if (a == 0) 
	{
		printf("%d是素数\n", num);
	}
	else 
	{
		//printf("%d不是素数\n", num);
	}
	return 0;

}