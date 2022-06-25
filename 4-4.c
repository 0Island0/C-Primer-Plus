#include<stdio.h>
int main()
{
	float high;
	char name[40];
	printf("please enter your height and your name:");
	scanf("%f%s", &high, name);
	high = high / 100;
	printf("%s,you are %f meters tall.", name, high);
	return 0;
}
