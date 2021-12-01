#include<stdio.h>
#include <math.h>
int main()
{
	double sum,sum1,sum2;
	int n,i,j;
	printf("Enter a number(<=0 to quit):");
	scanf("%d", &n);
	if (n>0)
	{
		for (i = 1, sum1 = 0.0; i <= n; i++)
		{
			sum1 = sum1 + 1.0 / i;
		}
		printf("%lf\n", sum1);

		for (j = 1, sum2 = 0.0; j <= n; j++)
		{
			sum2 = sum2 + 1.0 / j*pow(-1,j+1);
		}
		printf("%lf\n", sum2);
		sum = sum1 + sum2;
		printf("%lf\n", sum);
	}
	printf("Done!");
	return 0;
}
