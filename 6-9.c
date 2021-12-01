#include<stdio.h>
double anser(double i, double j);
int main()
{
	double a, b;
	int n;
	printf("Enter two double numbers:");
	n = scanf("%lf%lf", &a, &b);
	while (n == 2)
	{
		double anser(a, b);
		printf("(%lf-%lf)/(%lf*%lf)=%lf \n", a, b, a, b, anser(a,b));
		printf("Enter two double numbers:");
		n = scanf("%lf%lf", &a, &b);
	}
	printf("Done!");
	return 0;
}

double anser(double i, double j)
{
	return (i - j) / (i * j);
}