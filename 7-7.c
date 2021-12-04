#include<stdio.h>
#define A 10
#define B 40
int main()
{
	double m;
	double h;
	printf("Enter your workking time(h):");
	scanf("%lf", &h);
	if (h <= 40)
	{
		m = h * A;
	}
	else
	{
		m = 40 * A + (h - B) * A *1.5;
	}
	printf("税前%f\n", m);

	if (m <= 300)
	{
		m -= m*0.15;
	}
	else if (m > 300 && m <= 450)
	{
		m -= 300 * 0.15 + (m - 300) * 0.2;
	}
	else
	{
		m -= 300 * 0.15 + 150 * 0.2 + (m - 450) * 0.25;
	}
	printf("税后%lf", m);
	return 0;
}