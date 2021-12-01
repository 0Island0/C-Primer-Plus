#include<stdio.h>
#include<math.h>
int main()
{
	double m1, m2;
	int years=0,Money=100;
	do
	{
		++years;
		m1 = Money+Money*0.1*years;
		m2 = Money*pow(1.05,years);
	} while (m1 > m2);
	
	printf("%lf %lf\n", m1, m2);
	printf("%d", years);
	return 0;
}