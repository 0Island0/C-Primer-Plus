#include<stdio.h>
#define A 60
int main()
{
	int mins, hours;
	printf("Please enter the number of mins(<0 to quit)£º");
	scanf("%d", &mins);
	while (mins > 0)
	{
		hours = mins / A;
		mins = mins % A;
		printf("%dh %dmins\n", hours, mins);
		printf("Please enter the number of mins(<0 to quit)£º");
		scanf("%d", &mins);
	}
	printf("Done!");
	return 0;
}