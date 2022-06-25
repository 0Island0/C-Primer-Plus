#include<stdio.h>
int main()
{
	float a;
	printf("please enter a num\n");
	scanf("%f", &a);
	printf("The input is %.1f or %.1e\n", a, a);
	printf("The input is %.3f or %.3e\n", a, a);
	return 0;
}
