#include<stdio.h>
#define N_feet 30.48
#define N_inches 2.54
int main()
{
	float h, inches;
	int feet;
	printf("Enter a height in centimeter:");
	scanf("%f", &h);
	feet = h / N_feet;
	inches = (h - feet * N_feet) / 2.54;
	printf("%.1f cm = %d feet, %.1f inches\n",h,feet,inches);
	printf("Enter a height in centimeter(<=0 to quit):");
	scanf("%f", &h);
	while (h > 0)
	{
		feet = h / N_feet;
		inches = (h - feet * N_feet) / 2.54;
		printf("%.1f cm = %d feet, %.1f inches\n", h, feet, inches);
		printf("Enter a height in centimeter(<=0 to quit):");
		scanf("%f", &h);
	}
	printf("bye");
	return 0;

}