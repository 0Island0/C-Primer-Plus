#include<stdio.h>
int main()
{
	int a = 5;
	int week = 0;
	for (week = 1; a <= 150; week++)
	{
		a = a - week;
		a = a * 2;
		printf("第%d周有%d个朋友\n", week, a);
		if (a > 150)
			printf("第%d周超过邓巴数", week);
	}
	return 0;
}