#include<stdio.h>
int main()
{
	double a, b;
	int n;
	printf("Enter two double numbers:");
	n = scanf("%lf%lf", &a, &b);
	while (n == 2)
	{
		printf("(%lf-%lf)/(%lf*%lf)=%lf \n", a, b, a, b, (a - b) / (a * b));
		printf("Enter two double numbers:");
		n = scanf("%lf%lf", &a, &b);
	}
	printf("Done!");
	return 0;
}