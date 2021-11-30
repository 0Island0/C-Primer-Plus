#include<stdio.h>
#include<float.h>
int main()
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;
	printf("%.6f,%.6f\n", a, b);
	printf("%.12f,%.12f\n", a, b);
	printf("%.16f,%.16f\n", a, b);
	printf("%d,%d",  DBL_DIG,FLT_DIG);
	return 0;
}