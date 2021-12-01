#include<stdio.h>
int main()
{
	double M = 100.0, N = 0.08;
	int years=0;
	do
	{
		++years;
		M = M + M * N;
		M = M - 10;
	} while (M > 0);
	printf("%lf\n", M);
	printf("%d", years);
	return 0;
}