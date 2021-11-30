#include<stdio.h>
int main()
{
	int n, count, sum;
	printf("Please enter the days:");
	scanf("%d", &n);
	count = 0;
	sum = 0;
	while (count++ < n) 
	sum = sum + count; 
	printf("sum = %d\n", sum); 
	return 0;
}