#include<stdio.h>
int main()
{
	int n, j = 0, o = 0, sum1 = 0,sum2=0;
	double a, b;
	printf("Enter numbers(int):");
	while ((scanf("%d", &n)) == 1)
	{
		if (n == 0)
			break;
		if (n % 2 == 1)
		{
			j++;
			sum1 += n;
		}
		if (n % 2 == 0)
		{
			o++;
			sum2 += n;
		}	
	}
	if (j == 0)
	{
		a = 0;
		b = (double)sum2 / o;
	}
	if (o == 0)
	{
		b = 0;
		a = (double)sum1 / j;
	}
		
	
	printf("偶数个数为：%d,偶数平均数为：%f,奇数个数为：%d,奇数平均数为：%f", o, b, j, a);
	printf("\nDone!");
	return 0;
}