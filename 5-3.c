#include<stdio.h>
int main()
{
	int n, weeks, days;
	printf("Please enter the number of days(<0 to quit)£º");
	scanf("%d", &n);
	while (n > 0)
	{
		weeks = n / 7;
		days = n % 7;
		printf("%d days are %d weeks£¬%d days\n", n, weeks, days);
		printf("Please enter the number of days(<0 to quit)£º");
		scanf("%d", &n);
	}
	printf("Done!");
	return 0;
}