#include<stdio.h>
void cube(double c);
int main()
{
	double n;
	printf("Enter a number(double):");
	scanf("%lf", &n);
	cube(n);
	return 0;
}

void cube(double c)
{
	c = c * c * c;
	printf("n's cube=%lf", c);
}