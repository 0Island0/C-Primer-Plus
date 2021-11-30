#include<stdio.h>
void Temperatures(double c);
int main()
{
	double t;
	printf("Enter the temperatures(华氏):");
	while (scanf("%lf", &t) == 1)
	{
		Temperatures(t);
		printf("Enter the temperatures(华氏):");
	}
	printf("Done");
	return 0;
}

void Temperatures(double c)
{
	const double m = 273.16;
	printf("华氏温度=%.2f\n摄氏温度=%.2f\n开氏温度=%.2f\n", 
		c, 5.0 / 9.0 * (c - 32.0), 5.0 / 9.0 * (c - 32.0) + m);
	return;
}