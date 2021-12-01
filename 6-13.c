#include<stdio.h>
#include<math.h>
int main()
{
	int number[8];
	int i;
	for (i = 0; i < 8; i++)
	{
		number[i] = pow(2, i + 1);
		do
		{
			printf("%d ", number[i]);
		} while (i>8);
		
	}
	return 0;
}