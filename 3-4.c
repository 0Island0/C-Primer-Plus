#include<stdio.h>
int main()
{
	float a;
	printf("Enter a floating-point valus:");
	scanf("%f",&a);	
	printf("fixed-point natation:%f\n",a);
	printf("exponential natation:%e\n",a);
	printf("p notation:%a\n",a);
	return 0;
}
