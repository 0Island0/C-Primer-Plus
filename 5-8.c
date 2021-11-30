#include<stdio.h>
int main()
{
	int n,n1;
	printf("This program computes moduli.");
	printf("Enter an integer to serve as the second operated:");
	scanf("%d", &n);
	printf("Now enter the first oerated:");
	scanf("%d", &n1);
	printf("%d %% %d is %d\n", n1, n, n1 % n);
	printf("Enter next number for first operand (<= 0 to quit):");
	scanf("%d", &n1);
	while (n1 > 0)
	{
		printf("%d %% %d is %d\n", n1, n, n1 % n);
		printf("Enter next number for first operand (<= 0 to quit):");
		scanf("%d", &n1);
	}
	printf("Done");
	return 0;
}