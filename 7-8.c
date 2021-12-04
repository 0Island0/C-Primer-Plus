#include<stdio.h>
#define B 40
int main()
{
	double m;
	double h;
	double A=0;
	int n;
	printf("*********************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1)$8.75/hr                         2)$9.33/hr\n");
	printf("3)$10.00/hr                        4)$11.12/hr\n");
	printf("5)quit\n");
	printf("*********************************************************************\n");
	scanf("%d", &n);
	if (n>=1&&n<=5)
	{
	switch (n)
		{
			case 1:A = 8.75; break;
			case 2:A = 9.33; break;
			case 3:A = 10.00; break;
			case 4:A = 11.20; break;
			case 5:goto end; break;
		}
	printf("Enter your workking time(h):");
	scanf("%lf", &h);
	if (h <= 40)
		{
			m = h * A;
		}
	else
		{
			m = 40 * A + (h - B) * A * 1.5;
		}
	printf("税前%f\n", m);

	if (m <= 300)
		{
			m -= m * 0.15;
		}
	else if (m > 300 && m <= 450)
		{
			m -= 300 * 0.15 + (m - 300) * 0.2;
		}
	else
		{
			m -= 300 * 0.15 + 150 * 0.2 + (m - 450) * 0.25;
		}
	printf("税后%lf\n", m);
	}

	else
	{
		printf("Please enter the right number!\n");
	}
	

end:printf("Done!");
	return 0;
}