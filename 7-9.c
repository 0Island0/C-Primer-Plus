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
		printf("%dÊÇËØÊý\n", num);
	}
	else 
	{
		//printf("%d²»ÊÇËØÊý\n", num);
	}
	return 0;

}



\way two\
#include<stdio.h>
int main()
{
	int n, i, j, k;
	printf("enter a number:");
	while ((scanf("%d", &n) == 1) && n > 0)
	{
		for (i = 2; i <= n; i++)
		{
			k = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					k++;
			}
			if (k == 0)
				printf("%5d", i);
		}
		
	}

	return 0;
}
