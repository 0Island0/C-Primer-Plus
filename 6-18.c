#include<stdio.h>
int main()
{
	int a = 5;
	int week = 0;
	for (week = 1; a <= 150; week++)
	{
		a = a - week;
		a = a * 2;
		printf("��%d����%d������\n", week, a);
		if (a > 150)
			printf("��%d�ܳ����˰���", week);
	}
	return 0;
}