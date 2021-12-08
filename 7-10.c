#include<stdio.h>
int main()
{
	double m;
	double A;
	double s;
	int n;

	do
	{
		printf("*********************************************\n");
		printf("Enter the number corresponding to you:\n");
		printf("1)单身				2)户主\n");
		printf("3)已婚，共有			4)已婚，离异\n");
		printf("5)退出\n");
		printf("*********************************************\n");
		scanf("%d", &n);
		
		if (n >= 1 && n < 5)
		{
			printf("Enter your input:");
			scanf("%lf", &m);
			switch (n)
			{
			case 1:
				A = 17850; 
				if (m < A)
				{
					s= m * 0.15;
				}
				else
				{
					s= A * 0.15 + (m - A) * 0.28;
				}
				break;
			case 2:
				A = 23900;
				if (m < A)
				{
					s = m * 0.15;
				}
				else
				{
					s = A * 0.15 + (m - A) * 0.28;
				}
				break;
			case 3:
				A = 29750;
				if (m < A)
				{
					s = m * 0.15;
				}
				else
				{
					s = A * 0.15 + (m - A) * 0.28;
				}
				break;
			case 4:
				A = 14875; 
				if (m < A)
				{
					s = m * 0.15;
				}
				else
				{
					s = A * 0.15 + (m - A) * 0.28;
				}
				break;
			}
			printf("税金为：%lf\n", s);
			continue;
		}

		else if (n == 5)
		{
			goto end;
		}
		else
		{
			printf("Please enter the right number!\n");
			continue;
		}
	} while (n = 5);



end:printf("Done!");
	return 0;
}