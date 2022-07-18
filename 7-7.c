#include<stdio.h>
#define A 10.00
#define B 40
int main()
{
	double h, sui, sum;
	printf("enter the hours:");
	while ((scanf("%lf", &h)) == 1 && h>0)
	{
		if (h < B)
		{
			sum = A * h;
		}
		else
		{
			h = B + (h - B) * 1.5;
			sum = A * h;
		}
		if (sum <= 300)
		{
			sui = sum * 0.15;
		}
		else if (sum > 300 & sum < 450)
		{
			sui = 300 * 0.15 - (sum - 300) * 0.2;
		}
		else
		{
			sui = 300 * 0.15 - 150 * 0.2 - (sum - 450) * 0.25;
		}
		printf("%lf,%lf,%lf\n", sum, sui, sum-sui);
		printf("enter the hours again(q to quit):");
	}
	printf("done");
	
	
	return 0;
}
