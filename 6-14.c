#include<stdio.h>
int main()
{
	double n1[8], n2[80];
	int i,j;
	printf("Enter the first array(8):");
	for (i=0;i < 8;i++)
	{
		scanf("%lf", &n1[i]);
	}
	for (j = 1,n2[0] = n1[0]; j < 8; j++)
	{
		n2[j] = n2[j - 1] + n1[j];
	}
	for (i = 0; i < 8; i++)
	{
		printf("%10lf ", n1[i]);
	}
	printf("\n");
	for (i = 0; i < 8; i++)
	{
		printf("%10lf ", n2[i]);
	}
	return 0;
}